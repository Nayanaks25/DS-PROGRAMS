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
        printf("Enter value:");
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

void main()
{
    push();
    pop();
    display();
}
*/
