#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
    char sname[20];
    int rno;
    float cgpa;
    struct student*next;
}*NODE;

NODE getnode()
{
    NODE newn;
    newn=(NODE *)malloc(sizeof(struct student));
    if(newn==NULL)
    {
        printf("Memory not created!\n");
        exit(0);
    }
    return newn;
}

NODE read_details(NODE newn)
{
    printf("enter details:\n name\t rollno:\t cgap:\t\n");
    scanf("%s %d %f",newn->sname,&newn->rno,&newn->cgpa);
    newn->next=newn;
    return newn;
}

NODE insert_front(NODE head)
{ NODE cur,newn;
  newn=getnode();
  newn=read_details(newn);
  if(head==NULL)
  {
      return newn;
  }
  else
  {
     cur=head;
     while(cur->next!=head)
     {
         cur=cur->next;
     }
     cur->next=newn;
     newn->next=head;
     head=newn;
  return head;
  }
}

NODE insert_rear(NODE head)
{
    NODE newn,cur;
    newn=getnode();
    newn=read_details(newn);
    if(head==NULL)
    {
    return newn;
    }
    else
    {
        cur=head;
        while(cur->next!=head)
        {
         cur=cur->next;
        }
         cur->next=newn;

    newn->next=head;

    return head;
}}
void display(NODE head)
{
    NODE cur;
    if(head==NULL)
    {
        printf("circular list is empty\n");
    }
    else if(head->next==head)
    {
        printf("%s %d %f",head->sname,head->rno,head->cgpa);
    }
    else
    {
        cur=head;
        while(cur->next!=head)
        {
            printf("%s %d %f\n",cur->sname,cur->rno,cur->cgpa);
        cur=cur->next;
    }
    printf("%s %d %f\n",cur->sname,cur->rno,cur->cgpa);
}}

NODE delete_front(NODE head)
{
    if(head==NULL)
    {
        printf(" Circular list is empty\n");
    }
    else if(head->next==NULL)
    {
        printf("deleted data: name:%s\t rno:%d\t cgpa:%f\t\n");
        free(head);
        head=NULL;
    }
    else
    {
        NODE cur,prev;
        cur=head;
        prev=head;
        while(cur->next!=head)
        {
            cur=cur->next;
        }
       head=head->next;
        //cur=head;
        cur->next=head;
        printf("\ndeleted:%s %d %f",prev->sname,prev->rno,prev->cgpa);
       prev->next=NULL;
        free(prev);
    }
    return head;
}


NODE delete_rear(NODE head)
{
    if(head==NULL)
    {
        printf(" Circular list is empty\n");
    }
    else if(head->next==NULL)
    {
        printf("deleted data: name:%s\t rno:%d\t cgpa:%f\t\n");
        free(head);
        head=NULL;
    }
    else
    {
        NODE cur,prev;
        cur=head;
        prev=head;
        while(cur->next!=head)
        {
            prev=cur;
            cur=cur->next;
        }

        prev->next=head;
        cur->next=NULL;
        printf("\ndeleted:%s %d %f",cur->sname,cur->rno,cur->cgpa);
        free(cur);
    }
    return head;
}
NODE insert_pos(NODE head)
{
    int c=1,pos;
    NODE newn,cur,prev,newnode;
    newn=getnode();
    newn=read_details(newn);
    if(head==NULL)
    {
        return newnode;
    }
    else
    {
        printf("Enter node pos\n");
        scanf("%d",&pos);
        if(pos==1)
        {//we can call insert front function or this way
            cur=head;
            while(cur->next!=head)
            {
                cur=cur->next;
            }
            newn->next=head;
            cur->next=newn;
            head=newn;
        }
       else
        {
          cur=prev=head;
           while(c!=pos&&cur->next!=head)
            {
               c++;
               prev=cur;
               cur=cur->next;
    }


    if(c==pos&&cur->next==head)
    {
        cur->next=newn;
        newn->next=head;
    }
    else if(pos>c)
    {
        printf("postiton is greater than nodes in list\n");
    }
    else
    {
        prev->next=newn;
        newn->next=cur;

    }
    }
    return head;
}
}




int main()
{
    NODE head=NULL;
    int ch;
    while(1)
    {
        printf("circular list operation\n");
        printf("1.insert_front\n 2.insert_rear 3.display\n 4.delete_front\n 5.delete_rear\n 6.=insert_pos\n");
        printf("enter choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:head=insert_front(head);
            break;
            case 2:head=insert_rear(head);
            break;
            case 3:display(head);
            break;
            case 4:head=delete_front(head);
            break;
            case 5:head=delete_rear(head);
            break;
            case 6:head=insert_pos(head);
            break;
            case 7:exit(0);
            break;
            default:printf("invalid choice\n");

        }
    }
    return 0;
}
