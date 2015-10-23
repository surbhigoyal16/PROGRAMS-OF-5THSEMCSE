//PROGRAM TO DELETE THE Nth NODE FROM A LINKED LIST
#include<stdio.h>
typedef struct node
{
int info;
struct node *next;
}nodetype;
nodetype* insert(nodetype*);
nodetype* deleteNthNode(nodetype*,int);
void display(nodetype*);
int main()
{
nodetype *head=NULL;
int choice,n;
do
{
head=insert(head);
printf(" to insert value in a linked list press 1 ");
scanf("%d",&choice);
}while(choice==1);

printf("\nelements of linked list : \n");
display(head);
printf("\nenter the value n : ");
scanf("%d",&n);
head=deleteNthNode(head,n);
printf("\nelements of linked list after deletion\n");
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

nodetype* deleteNthNode(nodetype *head,int num)
{
int i;
nodetype *ptr;
if(head==NULL)
printf("no node present");
else if(head->next==NULL)
{
if(num==1)
head==NULL;
else
printf("wrong nth value");
}
else if(num==1)
head=head->next;
else
{
ptr=head;
for(i=1;i<num-1;i++)
 ptr=ptr->next;
ptr->next=(ptr->next)->next;
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
