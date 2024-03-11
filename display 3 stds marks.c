#include<stdio.h>
void read(int a[10],int n);
void print(int a[10],int n);
int sum(int a[10],int n);
int count(int a[10],int n,int avg);
void max(int a[10],int n);
main()
{
    int n,a[10],s,avg,c;
    printf("enter the value of n");
    scanf("%d",&n);
    read(a,n);
    print(a,n);
    s=sum(a,n);
    printf("sum=%d\n",s);
    avg=s/n;
    printf("average=%d\n",avg);
    c=count(a,n,avg);
    printf("students who scored less than average=%d\n",c);
    max(a,n);
    min(a,n);

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
int sum(int a[10],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
int count(int a[10],int n,int avg)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<avg)
            c++;
    }
    return c;
}
void max(int a[10],int n)
{
    int i,max=a[0];
    for(i=0;i<n;i++)
    {
    if(a[i]>max)
          max=a[i];
    }
    printf("maximum=%d\n",max);


}
void min(int a[10],int n)
{
    int i,min=a[0];
    for(i=0;i<n;i++)
    {
    if(a[i]<min)
          min=a[i];
    }
    printf("minimum=%d\n",min);

}


