#include<stdio.h>
void printnum(char ch);
 int main()
{
    char ch=97;
    printf("enter the value ch");
    scanf("%c",&ch);
    printnum(ch);
    return 0;

}

void printnum(char ch)
{ int i=1;
    while(ch<='z')
    {
        printf("%c\n",ch);
        ch++;
}
}
