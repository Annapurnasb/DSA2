
#include<stdio.h>
void read(int a[10][10],int m,int n);
void print(int a[10][10],int m,int n);
void rowsum(int a[10][10],int m,int n);
void coloumnsum(int a[10][10],int m,int n);
void row_max(int a[10][10],int m,int n);
void print_principlediagonal_elements(int a[10][10],int m,int n);
void sum_of_principlediagonal_elements(int a[10][10],int m,int n);
void print_secondary_principlediagonal_elements(int a[10][10],int m,int n);
void sum_of_secondary_principlediagonal_elements(int a[10][10],int m,int n);
main()
{
    int a[10][10],n,m;
    printf("enter the limits");
    scanf("%d%d",&m,&n);
    read(a,m,n);
    print(a,m,n);
    printf("row sum:\n");
    rowsum(a,m,n);
    printf("coloumn sum:\n");
    coloumnsum(a,m,n);
    row_max(a,m,n);
    printf("principle diagonal elements are:\n");
    print_principlediagonal_elements(a,m,n);
      sum_of_principlediagonal_elements(a,m,n);
      printf("secondary principle diagonal elements are:\n");
      print_secondary_principlediagonal_elements(a,m,n);
sum_of_secondary_principlediagonal_elements(a,m,n);

}
void read(int a[10][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)

        for(j=0;j<n;j++)

            scanf("%d",&a[i][j]);


}
void print(int a[10][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
{
        for(j=0;j<n;j++)
{
            printf("%d\t",a[i][j]);
}
       printf("\n");
}
}
void rowsum(int a[10][10],int m,int n)
{
   int i,j,sum=0;
    for(i=0;i<m;i++)
    { sum=0;
        for(j=0;j<n;j++)
        {
            sum=sum+a[i][j];
        }
        +
        printf("sum=%d\n",sum);
        }


}
void coloumnsum(int a[10][10],int m,int n)
{
    int i,j,sum=0;
     for(i=0;i<m;i++)
    { sum=0;
        for(j=0;j<n;j++)
        {
            sum=sum+a[j][i];
        }
        printf("sum=%d\n",sum);
        }

}
 void row_max(int a[10][10],int m,int n)
    {
        int i,j,max;
        for(i=0;i<m;i++)
        { max=a[i][0];
            for(j=1;j<n;j++)
            {
                if(a[i][j]>max)
                    max=a[i][j];
            }
            printf("maximum=%d\n",max);
        }
    }
void print_principlediagonal_elements(int a[10][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                 printf("%d\n",a[i][j]);
            }
        }
    }
}
void sum_of_principlediagonal_elements(int a[10][10],int m,int n)
{
    int i,j,sum=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("sum of principle diagonal elements =%d\n",sum);
}
void print_secondary_principlediagonal_elements(int a[10][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j==m-1)
            {
                printf("%d\n",a[i][j]);
            }
        }
    }
}
void sum_of_secondary_principlediagonal_elements(int a[10][10],int m,int n)
{
    int i,j,sum=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        { if(i+j==m-1)
        {
            sum=sum+a[i][j];
        }

        }
    }
    printf("sum of secondary principle diagonal elements =%d",sum);
}
