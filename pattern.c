#include<stdio.h>
void pattern(int n);
main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    pattern(n);
}
void pattern(int n)
{
    int i=1,j=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("*");
          printf("\n");
    }
}
