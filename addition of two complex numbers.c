#include<stdio.h>
typedef struct complex
{
    int real,img;

}CMP;
CMP add(CMP c1,CMP c2);
main()
{
    CMP c1,c2,c3;
    printf("enter real and img part of first complex number\n");
    scanf("%d %d" ,&c1.real,&c1.img);
    printf("enter real and img part of second complex number\n");
    scanf("%d %d ",&c2.real,&c2.img);
c3=add(c1,c2);
printf("%d +i %d ",c3.real,c3.img);
};
CMP add(CMP c1,CMP c2)
{
    CMP c3;
    c3.real=c1.real+c2.real;
    c3.img=c1.img +c2.img;
    return c3;
};
