#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct number
{
   // int num;
   char name[10];
    struct number *next;
};
typedef struct number *NODE;
NODE getnode()
{
    NODE nw;
    nw=(NODE)malloc(sizeof(struct number));
    nw->next=NULL;
    return nw;
}
NODE insert_end(NODE head, char name[10])
{
    NODE nw;
    nw = getnode();
    strcpy(nw->name , name);
    nw->next = NULL;

    if (head == NULL)
    {
        return nw;
    }
    else
    {
        NODE cur = head;
        while (cur->next != NULL)
        {
            cur = cur->next;
        }
        cur->next = nw;
    }
    return head;
}

NODE split1(NODE head,NODE head2)
{
    NODE cur=head;
    while(cur!=NULL)
    {
      //if(cur->name%2!=0)
      if(strcmp(cur->name,"bvb")!=0)
      {
          NODE nw;
          nw=getnode();
          strcpy(nw->name,cur->name);
          head2=insert_end(head2,cur->name);
      }
        cur=cur->next;
    }
    return head2;

}
NODE split2(NODE head,NODE head3)
{
    NODE cur=head;
    while(cur!=NULL)
    {
      if(strcmp(cur->name,"bvb")==0)
      {
          NODE nw;
          nw=getnode();
          strcpy(nw->name,cur->name);
          head3=insert_end(head3,cur->name);
      }
        cur=cur->next;
    }
    return head3;

}
void display(NODE head)
{
    NODE cur=head;
    while(cur!=NULL)
    {
        printf("%s ",cur->name);
        cur=cur->next;
    }

}

int main()
{
    NODE head=NULL;
     NODE head2=NULL;
     NODE head3=NULL;
    int n,i,N;
    char name[10];
    scanf("%d",&n);
    if(n>0)
    {

    for(i=0;i<n;i++)
    {
        scanf("%s",name);
        head=insert_end(head,name);

    }
    printf("Original list is:\n");
    display(head);
        printf("\n");
    head2=split1(head,head2);
        printf("\n");
    printf("List 1 is:\n");
    display(head2);
    head3=split2(head,head3);
        printf("\n");
    printf("\nList 2 is:\n");
    display(head3);
    }
    else
    {
        printf("Invalid input\n");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
