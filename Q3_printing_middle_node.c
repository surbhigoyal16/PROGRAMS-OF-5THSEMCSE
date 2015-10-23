//PROGRAM TO PRINT THE MIDDLE NODE OF A LINKED LIST
#include<stdio.h>
typedef struct node
{
int info;
struct node *next;
}nodetype;
nodetype* insert(nodetype*);
void displayingMiddleNode(nodetype*);
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

printf("\nMiddle node =");
displayingMiddleNode(head);
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

void displayingMiddleNode(nodetype *head)
{
nodetype *r,*t=(r)=head;
if(head!=NULL)
{
while(r->next!=NULL && (r->next)->next!=NULL)
{
t=t->next;
r=(r->next)->next;
}
printf(" %d",t->info);
}
else
printf("no node");
}
