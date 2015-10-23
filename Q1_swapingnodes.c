//PROGRAM TO SWAP CONSECUTIVE NODES OF A LINKED LIST
#include<stdio.h>
typedef struct node
{
int info;
struct node *next;
}nodetype;
nodetype* insert(nodetype*);
nodetype* swapingOfNodes(nodetype*);
void display(nodetype*);
int main()
{
nodetype *head=NULL;
int choice;
do
{
head=insert(head);
printf(" to insert value in a linked list press 1 ");
scanf("%d",&choice);
}while(choice==1);

printf("\nelements of linked list : \n");
display(head);
head= swapingOfNodes(head);
printf("\nswaped elements of linked list\n");
display(head);
return 0;
}

nodetype* insert(nodetype *head)
{
nodetype *temp=head, *p=(nodetype*)malloc(sizeof(nodetype));
if(p!=NULL)
{
printf("\n enter the information to be insert");
scanf("%d",&p->info);
p->next=NULL;
if(head==NULL)
head=p;
else
{
while(temp->next!=NULL)
   temp=temp->next;
temp->next=p;
}
}
else
 printf("\n node cannot be created");
return head;
}

nodetype* swapingOfNodes(nodetype *head)
{
nodetype *str,*ptr;
if(head==NULL)
printf("No node to swap");
else if(head->next==NULL)
printf("only 1 node is present");
else
{
str=head->next;
head->next=str->next;
str->next=head;
head=str;
str=head->next;
ptr=(head->next)->next;
while(ptr!=NULL&&ptr->next!=NULL)
{
str->next=ptr->next;
ptr->next=(str->next)->next;
(str->next)->next=ptr;
str=ptr;
ptr=ptr->next;
}
}
return head;
}


void display(nodetype *f)
{
while(f!=NULL)
{
printf(" %d",f->info);
f=f->next;
}
}
