/*#include <stdio.h>
 int main()
{
    int n,i,num,pos;

    printf("Enter number of Elements:");
    scanf("%d",&n);

    int a[n];
    printf("The elements are:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the Element to be inserted:");
    scanf("%d",&num);
    printf("Enter the position");
    scanf("%d",&pos);

    if(pos<1 || pos>n+1)
    {   printf("INVALID POSITION");
        return 1;
    }

    for(i=n-1;i>=pos-1;i--)
    {
         a[i+1]=a[i];
    }

    a[pos-1]=num;
    n++;

    printf("Array after insertion:\n");
    for(i=0;i<n;i++)
      printf("\t%d",a[i]);
}*/
