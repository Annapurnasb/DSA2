#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Song Name, Singer Name, Song size, Movie Name.
struct music
{
    char sname[20];
    char singname[20];
    int   size;
    char mname[20];
    struct music *rlink;
    struct music *llink;

};
typedef struct music *NODE;
NODE getnode()
{
    NODE nw;
    nw=(NODE)malloc(sizeof(struct music));
    if(nw==NULL)
    {
        return NULL;

    }
    else

    {
        return nw;
    }
}
NODE getdata(NODE nw)
{
    printf("enter song name,singer name,size,movi name\n");
    scanf("%s%s%d%s",nw->sname,nw->singname,&nw->size,nw->mname);
    nw->rlink=NULL;
    nw->llink=NULL;
    return nw;
}
NODE insert_end(NODE head)
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
        while(cur->rlink!=NULL)
        {
            cur=cur->rlink;
        }
        cur->rlink=nw;
        nw->llink=cur;
        return head;
    }
}
NODE insert_after(NODE head)
{
    NODE nw;
    char songname[10];
    nw=getnode();
    nw=getdata(nw);
    if(head==NULL)
    {
        return nw;
    }
    else
    {
        scanf("%s",songname);
        if(head->rlink==NULL&&strcmp(songname,head->sname)==0)
        {
            head->rlink=nw;
            nw->llink=head;
            return head;
        }
        else
        {
            NODE cur=head,prev=NULL;
           // int c=1;
            while(cur->rlink!=NULL)
            {
                if(strcmp(songname,cur->sname)==0)

                {
                    if(cur->rlink==NULL)
                     {
                         cur->rlink=nw;
                         nw->llink=cur;
                        return head;
                     }
                  else
                   {
                        prev = cur;
                        cur = cur->rlink;
                        prev->rlink = nw;
                        nw->llink = prev;
                        nw->rlink = cur;
                        cur->llink = nw;
                        return head;
                    }
                }
                else

                {
                    prev=cur;
                   cur=cur->rlink;
                }
            }
         }
    }
    return head;
}
void display(NODE head)
{



        NODE cur=head;
        while(cur!=NULL)
        {
            printf("%s %s %d %s \n",cur->sname,cur->singname,cur->size,cur->mname);
            cur=cur->rlink;
        }

}
NODE delet_song(NODE head)
{
    char soname[10];
    scanf("%s",soname);
    if(head==NULL)
    {
        return NULL;
    }
    else
    {
        if(head->rlink==NULL && strcmp(head->sname,soname)==0)
        {
            free(head);
            return NULL;
        }
        else
        {
            NODE cur=head,prev=NULL;
            //int c=1;
            while(cur->rlink!=NULL)
            {
                if(strcmp(cur->sname,soname)==0)
                {
                    if(prev==NULL)
                    {
                        head=head->rlink;
                        head->llink=NULL;
                        free(cur);
                        return head;
                    }
                    if(cur->rlink==NULL)
                    {
                        prev->rlink=NULL;
                        free(cur);
                        return head;
                    }
                    else
                    {
                        prev->rlink=cur->rlink;
                        if(cur->rlink!=NULL)
                        cur->rlink->llink=prev;
                        free(cur);
                        return head;
                    }

                }
               //c++;
                else
                {
                  prev=cur;
                  cur=cur->rlink;
                }
            }

        }
    }
     return head;
}
int main()
{
  NODE head=NULL;
    int i,n;
    scanf("%d",&n);
    if(n>3)
    {
        for(i=0;i<n;i++)
        {
            head=insert_end(head);
        }
        head=insert_after(head);
        head=delet_song(head);
          display(head);
    }
    else
    {
      printf("Number of Songs should be more than 3.\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
