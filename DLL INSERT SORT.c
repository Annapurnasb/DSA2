#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct NODE
{
    int num;
    struct NODE *rlink;
    struct NODE *llink;
};

typedef struct NODE *node;

node getnode()
{
    node nw;
    nw = (node)malloc(sizeof(struct NODE));
    nw->rlink = NULL;
    nw->llink = NULL;
    return nw;
}

node getdata(node nw)
{
    printf("enter the number\n");
    scanf("%d", &nw->num);
    return nw;
}

node insert_sort(node head)
{
    node nw;
    nw = getnode();
    nw = getdata(nw);
    if (head == NULL)
    {
        return nw;
    }

    if (head->num > nw->num)
    {
        nw->rlink = head;
        head->llink = nw;
        return nw;
    }
    else
    {
        node cur = head, prev = NULL;
        while (cur->num < nw->num && cur->rlink != NULL)
        {
            prev = cur;
            cur = cur->rlink;
        }

        if (cur->rlink == NULL && cur->num < nw->num)
        {
            cur->rlink = nw;
            nw->llink = cur;
        }
        else
        {
            prev->rlink = nw;
            nw->llink = prev;
            nw->rlink = cur;
            cur->llink = nw;
        }

        return head;
    }
}

void display(node head)
{
    node cur = head;
    while (cur != NULL)
    {
        printf("%d\n", cur->num);
        cur = cur->rlink;
    }
}
/*node insert_pos(node head)
{
    node nw;
    nw=getnode();
    nw=getdata(nw);
    int pos;
    printf("enter position\n");
    scanf("%d",&pos);
    if(pos==1&&head==NULL)
    {

        return nw;
    }
    if(pos==1)
    {
        nw->rlink=head;
        if(head!=NULL)

        {
            head->llink=nw;
        }
        head=nw;
        return head;
    }
    else
    {
        node cur=head,prev=NULL;
        int c=1;
        while(cur->rlink!=NULL&&c!=pos)
        {
            c++;
            prev=cur;
            cur=cur->rlink;
        }
        if(pos==c+1&&cur->rlink==NULL)
        {
            cur->rlink=nw;
            nw->llink=cur;
            return head;
        }
        else
        {
            prev->rlink=nw;
            nw->llink=prev;
            nw->rlink=cur;
            cur->llink=nw;
            return head;
        }
    }
    return head;
}*/
node insert_pos(node head)
{
    node nw;
    nw = getnode();
    nw = getdata(nw);
    int pos;
    printf("enter position\n");
    scanf("%d", &pos);

    if (pos == 1 && head == NULL)
    {
        return nw;
    }
    if (pos == 1)
    {
        nw->rlink = head;
        if (head != NULL)
        {
            head->llink = nw;
        }
        head=nw;
        return head;
    }
    else
    {
        node cur = head, prev = NULL;
        int c = 1;
        while (cur->rlink != NULL && c != pos)
        {
            c++;
            prev = cur;
            cur = cur->rlink;
        }
        if (pos == c + 1 && cur->rlink == NULL)
        {
            cur->rlink = nw;
            nw->llink = cur;
            return head;
        }
        else
        {
            prev->rlink = nw;
            nw->llink = prev;
            nw->rlink = cur;
            cur->llink = nw;
            return head;
        }
    }
    return head;
}
//node insert

int main()
{
    node head = NULL;
    int i, n;
    printf("enter n\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        head = insert_sort(head);
    }

    display(head);
    head=insert_pos(head);
    display(head);
    return 0;
}





