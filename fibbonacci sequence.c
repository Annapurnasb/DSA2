#include<stdio.h>
#include<stdlib.h>
void fibbonacci(int n);
main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    fibbonacci(n);
}
void fibbonacci(int n)
{
    int c=0,a=-1,b=1,i=0;
    while(i<n)
    {

        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
        i++;
    }

}
