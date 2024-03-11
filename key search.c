#include<stdio.h>
void read(int a[10],int n);
void print(int a[10],int n);
int linearsearch(int a[10],int n,int key);
main()
{
    int a[10],n,key,c;
    printf("enter the n");
    scanf("%d",&n);
    read(a,n);
    print(a,n);
    printf("enter the key to be found");
    scanf("%d",&key);
    c=linearsearch(a,n,key);
    if(c>0)
    {
        printf("search is successful");
    }
    else
    printf("search is not successful");

}
void read(int a[10],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
void print(int a[10],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
}
int linearsearch(int a[10],int n,int key)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
            c++;
    }
    return c;
}
