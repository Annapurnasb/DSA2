#include<stdio.h>
main()
{
    float a,b,res;
    char op;
    printf("Enter two numbers and operater\n");
    scanf("%f%f%*c%c",&a,&b,&op);
    switch(op)
    {

        case'+':res=a+b;
            printf("a+b=%f",res);
            break;
        case'-':res=a-b;
            printf("a-b=%f",res);
            break;
        case'*':res=a*b;
            printf("a*b=%f",res);
            break;
        case'/':if(b==0)
        {
            printf("ERROR\N");
        }
        else
        {   res=a/b;
           printf("a/b=%f",res);
            break;
        }

        case'%':res=(int)a%(int)b;
            printf("a%b=%f",res);
            break;
    }
}
