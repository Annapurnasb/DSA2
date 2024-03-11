#include<stdio.h>
#include<stdlib.h>
typedef struct bank_details
{
    char cname[15];//cname = customer name
    long int accno;
    char acctype[10];
    float bal;

}BK;
void read(BK B[10],int n);
void display(BK B[10],int n);
//void display_bal_1000(BK B[10],int n);
//void salary_acc(BK B[10],int n);
//void update_addres(BK B[10],int n);
//void sort(BK B[10],int n);
//void highest_salary(BK B[10],int n);
int main()
{
    BK B[10];
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("cname:\t accno:\t acctype:\t bal:\n");
    read(B,n);
    display(B,n);
    //display_bal_1000(B,n);
    //salary_acc(B,n);
    //update_addres(B,n);
    //sort(B,n);
    //highest_salary(B,n);
}
void read(BK B[10],int n)
{
    int i;
    for(i=0;i<n;i++)

        scanf("%s%ld%s%f",B[i].cname,&B[i].accno,B[i].acctype,&B[i].bal);

}
void display(BK B[10],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%s\t %ld\t %s\t %f \n",B[i].cname,B[i].accno,B[i].acctype,B[i].bal);
    }
}
