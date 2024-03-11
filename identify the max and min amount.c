#include<stdio.h>
void read(float A[100],int n);
void print(float A[100],int n);
float max(float A[100],int n);
float min(float A[100],int n);
main()
{
    int n;
    float A[100],res1,res2;
    printf("enter the value of n");
    scanf("%d",&n);
    read(A,n);
    print(A,n);
    res1=max(A,n);
    printf("maximum=%f\n",res1);
    res2=min(A,n);
   printf("minimum=%f\n",res2);
}
void read(float A[100],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%f",&A[i]);
}
void print(float A[20],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%f\n",A[i]);
}
float max(float A[100],int n)
{
    int i;
    float res1=A[0];
    for(i=0;i<n;i++)
    {
        if(A[i]>res1)
        {
            res1=A[i];
        }

    }
    return res1;
}
float min(float A[100],int n)
{
    int i;
    float res2=A[0];
    for(i=0;i<n;i++)
    {
        if(A[i]<res2)
        {
            res2=A[i];
        }
    }
    return res2;
 }

