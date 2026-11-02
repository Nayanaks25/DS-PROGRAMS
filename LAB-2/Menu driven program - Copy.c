/*#include <stdio.h>
#define MAX 5
int top=-1;
int S[MAX];

void push()
{
    int value;
    if(top==(MAX-1))
    {
        printf("Stack Overflow!\n");
    }
    else
    {
        printf("Enter value to be inserted:");
        scanf("%d",&value);
        top++;
        S[top]=value;
        printf("%d is inserted into stack\n",value);
    }
}

void pop()
{
    int item_deleted;
    if(top==-1)
    {
        printf("Stack Underflow!\n");
    }
    else
    {
        item_deleted=S[top];
        top--;
        printf("%d is deleted\n",item_deleted);
    }
}

void display()
{
    if(top==-1)
        printf("Stack is empty");
    else
  {
    for(int i=top;i<=0;i--)
    {
        printf("%d\t",S[i]);
    }
}
}

int main()
{
    int choice;
    int deletedItem;

    while(1)
    {
        printf("\n----STACK MENU----\n");
        printf("1.Push\n 2.Pop\n 3.Display\n 4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting....\n");
            return 0;
        default:
            printf("Invalid choice!\n");
        }
    }
        return 0;
}
*/
