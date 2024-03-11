#include<stdio.h>
main()
{
    float d,n,x,y,cost;
    printf("enter the distance,fixed n kms,cost of first n kms,cost of every kms thereafter");
    scanf("%f%f%f%f",&d,&n,&x,&y);
    cost=x+(d-n)*y;
    printf("total cost=%f",cost);
}
