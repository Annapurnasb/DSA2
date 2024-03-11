
#include<stdio.h>
main()
{
    int Y;
    printf("Enter the value of Y");
    scanf("%d",&Y);
    if(Y%4==0)
        printf("leap year\n");
    else
        printf("not a leap year\n");
    return 0;
}
