#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void insert(int x)
{
    if ((rear + 1) % MAX == front)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        if (front == -1&&rear==-1)
        {
            front = 0;
            rear = 0;
            queue[front]=x;
            printf("%d is inserted\n",x);
        }
        else
        {
            rear = (rear + 1) % MAX;
            queue[rear] = x;
            printf("%d inserted\n", x);
    }
}
}
void del()
{
    if (front == -1)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("Deleted element = %d\n", queue[front]);

        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % MAX;
    }
}

void display()
{
    int i;

    if (front == -1)
        printf("Queue is Empty\n");
    else
    {
        printf("Queue elements are:\n");
        for(i=front;i!=rear;i=(i+1)%MAX)
        {
            printf("%d\t",queue[i]);
        }
        printf("%d\t",queue[i]);
    }
}

void main()
{
    insert(6);
    insert(7);
    insert(8);
    display();

    del();
    display();


}


