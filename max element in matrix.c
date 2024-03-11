
#include<stdio.h>
void read(int a[10][10],int m,int n);
void print(int a[10][10],int m,int n);
int max(int a[10][10],int m,int n);
main()
  {
    int a[10][10], m, n,m1;
    printf("enter the order if matrix");
    scanf("%d%d",&m,&n);
    if(m!=n)
    {
        printf("not a square matrix");
        exit(0);
    }
    printf("enter the elements of matrix");
    read(a,m,n);
    print(a,m,n);
    m1=max(a,m,n);
    printf("maximum element in a matrix=%d\n",m1);

    }
void read(int a[10][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
        {for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);}
    }
    void print(int a[10][10],int m,int n)
    {int i,j;
    for(i=0;i<m;i++)
       {for(j=0;j<n;j++)
            printf("%d\t",a[i][j]);
            printf("\n");}

    }
    int max(int a[10][10],int m,int n)
    {int i,j,large=a[0][0];
     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             if(a[i][j]>large)
                large=a[i][j];
         }
     }
     return large;

    }
