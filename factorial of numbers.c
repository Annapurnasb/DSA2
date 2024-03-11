
#include<stdio.h>
int factorial(int N);
main()
{
    int N,i,F;
    printf("enter the limit");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        F=factorial(i);
        printf("%d\n",F);
    }
}
int factorial(int N)
{
    int i,F=1;
    for(i=1;i<=N;i++)
        F=F*i;
    return F;
}
