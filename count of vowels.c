#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define SIZE 50
struct stack
{
    char data[SIZE];
    int top;
};
typedef struct stack STACK;
void push(STACK *s,char ch)
{
    if(s->top==SIZE-1)
        printf("\nStack overflow\n");
    else
        s->data[++(s->top)]=ch;
}
char pop(STACK *s)
{
    if(s->top==-1)
        printf("Stack underflow");
    else
        return s->data[(s->top)--];
}
char peek(STACK *s)
{
   if(s->top==-1)
       {
          printf("pop:Stack overflow");
       }
    else
        return (s->data[(s->top)]);
}
void split(STACK *s)
{

   // STACK *temp1,*temp2;
    char exp[SIZE],ch;
    /*temp1->top=-1;
    temp2->top=-1;*/
    int i=0,v=0,c=0;
    printf("\nenter string\n");
    scanf("%s",exp);
    while(exp[i]!='\0')
    {
        push(s,exp[i]);
        i++;
    }
    i=0;
    while(s->top!=-1)
    {
        ch=pop(s);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            v++;
        }
        else
        {
            c++;
        }
        i++;
    }

    printf("number of vowels %d\n",v);
     printf("number of consonants %d\n",c);
}
void display(STACK *s)
{
    int i;
    for(i=s->top;i>=0;i--)
    {
        printf("%s\n",s->data[i]);
    }
}
int main()
{
    STACK *s,st;
    s=&st;
    s->top=-1;
    split(s);
}
