/*#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void insert(int x)
{
    if (rear == MAX - 1)
    {
        printf("Queue Overflow\n");
    }
    else if(front==-1&&rear==-1)
    {
        rear=front=0;
        queue[front]=x;
        printf("%d is inserted\n",x);
    }
    else
    {
        rear++;
        queue[rear]=x;
        printf("%d is inserted\n",x);
    }
}

void delete()
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
            front++;
    }
}

void display()
{
    int i;

    if (front == -1)
        printf("Queue is Empty\n");
    else
    {
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);

        printf("\n");
    }
}

int main()
{
    insert(6);
    insert(7);
    insert(8);
    display();

    delete();
    display();

    return 0;
}*/

