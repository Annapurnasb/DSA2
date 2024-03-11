#include<stdio.h>
void read(int[100][100],int ,int);
void display(int[100][100],int,int);
int identity(int[100][100],int,int);
main()
{
    int r,c,flag;
    int a[100][100];
    printf("Enter the value of r&c\n");
    scanf("%d%d",&r,&c);
    read(a,r,c);
    display(a,r,c);
   flag= identity(a,r,c);
    if(flag==1)
    {
        printf("It is an identity matrix\n");
    }
    else
    {
        printf("Its not an identity matrix\n");
    }
}
void read(int a[100][100],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

}
void display(int a[100][100],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int identity(int a[100][100],int r,int c)
{
    int i,j,flag=1;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j&&a[i][j]!=1)
                flag=0;

           else if(i!=j&&a[i][j]!=0)
                flag=0;

        }
    }
    return flag;
}
