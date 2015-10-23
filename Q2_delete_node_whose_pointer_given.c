/*FUNCTION CODE TO DELETE A NODE TO WHICH A POINTER IS GIVEN IN A LINKED LIST AS THE ADDRESS WE CANNOT DEFINE SO
 ONLY CODE OF FUNCTION PRESENT*/
#include<stdio.h>
typedef struct node
{
int info;
struct node *next;
}nodetype;

void deleteForPointer(nodetype *ptr)
{
if(ptr!=NULL)
{
if(ptr->next!=NULL)
{
ptr->info=(ptr->next)->info;
ptr->next=(ptr->next)->next;
}
}
else
 printf("\nNode not present");
}
