#include<stdio.h>
void digits(int character);
main()
{
    int character;
    printf("enter the character");
    scanf("%c",&character);
    digits(character);
}
void digits(int character)
{

    if(character>=65&&character<=90)
    {
       printf("capital letter");
    }
     else if(character>=97&&character<=122)
    {
       printf("small letter");
    }
    else if(character>=48&&character<=57)
    {
       printf("capital letter");
    }
    else
    {
       printf("special character");
    }
}
