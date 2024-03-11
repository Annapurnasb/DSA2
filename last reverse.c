#include<stdio.h>
void read(int a[10],int n);
void print(int a[10],int n);
void reversing(int a[10],int n);
main()
{
    int a[10],n;
    printf("enter n");
    scanf("%d",&n);
    read(a,n);
    reversing(a,n);
    printf("after reversing:\n");
    print(a,n);

}
void read(int a[10],int n)
{ int i;
    for(i=0;i<n;i++)
    {
        printf("enter the element\n");
        scanf("%d",&a[i]);
    }
}
void print(int a[10],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
void reversing(int a[10],int n)
{
    int i,temp,j;
    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp=a[i];
                a[i]=a[j];
                a[j]=temp;
    }
}
