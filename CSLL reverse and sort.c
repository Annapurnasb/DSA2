#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct music
{

    char name[10];
    int duration;
    struct music *next;
};
typedef struct music *NODE;
NODE getnode()
{
    NODE nw;
    nw=(NODE*)malloc(sizeof(struct music));
    if(nw==NULL)
    {
        printf("list is empty\n");

    }
    else
        return nw;
}
NODE getdata(NODE nw)
{
    printf("enter name: duration:\n");
    scanf("%s%d",nw->name,&nw->duration);
    nw->next=nw;
    return nw;
}
NODE insert_front(NODE head)
{
     NODE nw;
    nw=getnode();
    nw=getdata(nw);
    if(head==NULL)
    {
        return nw;
    }
    else
    {
        NODE cur=head;
        while(cur->next!=head)
        {
            cur=cur->next;
        }
        cur->next=nw;
        nw->next=head;
        head=nw;

    }
        return head;
}

void display(NODE head)
{
    if(head==NULL)
    {
        printf("list is empty\n");
    }
    else
        {
            NODE cur=head;
             do
             {
                 printf("%s %d\n",cur->name,cur->duration);
                 cur=cur->next;
             }while(cur!=head);
        }
}
void sort(NODE head)
{
    NODE i,j;
    for(i=head;i->next!=head;i=i->next)
    {
        for(j=head;j->next!=head;j=j->next)
        {
            if(j->duration>j->next->duration)

            {
                swap(j,j->next);
            }
        }
    }
}
void swap(NODE p1,NODE p2)
{
    int dun;
    char naam[10];
    strcpy(naam,p1->name);
    dun=p1->duration;
    strcpy(p1->name,p2->name);
    p1->duration=p2->duration;
    strcpy(p2->name,naam);
    p2->duration=dun;
}
NODE reverse(NODE head)
{

    NODE t1,t2,t3;
    t1=head;
    t2=t1->next;
    t3=t2->next;
    if(head->next==head||head==NULL)
    return head;
    else
    {
        while(t2!=head)
        {
            t2->next=t1;
            t1=t2;
            t2=t3;

                t3=t3->next;

        }
        head->next=t1;

        return t1;
    }
}
int main()
{
    NODE head=NULL;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        head=insert_front(head);
    }
    display(head);
    printf("list after sorting\n");
    sort(head);
    display(head);
    head=reverse(head);
    display(head);
    //head=delet_pos(head);
}
