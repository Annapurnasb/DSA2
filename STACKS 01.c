#define STACK  5
typedef struct
{
    int  S[STACKSIZE];
    int top;

}STACK;
int main()
{
    stack stk;
    int ch,data;
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:if(full(stk))
              {
                 printf("\n stack overflow\n");
              }
              else
              {
                  printf("\n ente data to push");
                  scanf("%d",&data);
                  push(stk,data);
            }
            break;
        case 2
    }
}
