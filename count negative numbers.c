#include<stdio.h>
int  count_negative_numbers(int n);
int main()
{
    int n,count;
    printf("enter the n");
    scanf("%d",&n);
    count=count_negative_numbers(n);
    printf("%d",count);
}
int  count_negative_numbers(int n)
{
    int count=0,i,num;
    for(i=1;i<=n;i++)
       {
        scanf("%d",&num);
      if(num<0)
        count++;
    else
        continue;
}
return count;
}
