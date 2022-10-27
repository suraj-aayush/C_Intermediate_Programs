#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *head=NULL;

struct node *append(struct node *);
struct node *display(struct node *);
struct node *delete(struct node *);

int main(){
    int ch;
    while (1)
    {
        printf("1. APPEND \n");
        printf("2. display \n");
        printf("3. delete \n");
        printf("4. exit \n");

        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            head=append(head);
            break;
        
        case 2:
            head=display(head);
            break;

        case 3:
            head=delete(head);
            break;

        case 4:
            exit(0);
            break;

        default:
        printf("  \n    WRONG INPUT \n  ");
            break;
        }
    }
    
return 0;
}
///////////////////////////////////////////////////////////////////////////////
struct node *append(struct node *head)
{
    struct node*temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf(" \n ENTER ELEMENT TO APPEND -->> ");
    scanf("%d",&temp->data);
    temp->link=NULL;

    if(head==NULL)
    {
        head=temp;
        temp->link=NULL;
    }

    else
    {
        struct node *p=head;
        while (p->link!=NULL)
        {
            p=p->link;
        }

        p->link=temp;
        temp->link=NULL;
    }

    return head;
}
////////////////////////////////////////////////////////////////////////////////////
struct node *display(struct node *head)
{
    if(head==NULL)
    {
        printf("\n NO ELEMENTS TO DISPLAY \n ");
    }
    else
    {
    struct node *p=head;
    while (p!=NULL)
    {
        printf("\n ==>> %d is element <==>\n",p->data);
        p=p->link;
    }
    }
    return head;
}
///////////////////////////////////////////////////////////////////////////////////////
// struct node *display(struct node *start)
// {
// struct node *ptr;
// ptr = start;
// while(ptr != NULL)
// {
//  printf(“\t %d”, ptr -> data);
//  ptr = ptr -> next;
// }
// return start;
// }
///////////////////////////////////////////////////////////////////////////////////////
struct node *delete(struct node* head)
{
    int pos;
    struct node *p=head;
    if (head==NULL)
    {
        printf("\n NO ELEMENTS TO DELETE \n");
    }
    else
    {
        printf("enter the position to delte ");
        scanf("%d",&pos);

        if(pos==1)
        {
            printf("element is deleted is %d",head->data);
            head=p->link;
            p->link=NULL;
            free(p);
        }

        else
        {
            struct node *q;
            int i=1;
            while (i<pos-1)
            {
                p=p->link;
                i++;
            }
            q=p->link;

            printf("%d is element deleted ",q->data);
            p->link=q->link;
            q->link=NULL;
            free(q);
            
        }

    }
    return head;
}