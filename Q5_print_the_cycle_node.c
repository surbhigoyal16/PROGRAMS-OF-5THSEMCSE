//FUNCTION TO DISPLAY THE CYCLE NODE OF A LINKED LIST
void searchCycleNode(nodetype *head,int noOfNodes)
{
nodetype *t,*r;
t=r=head;
do
{
t=t->next;
r=(r->next)->next;
}while(t!=r);
if(noOfNodes%2==0)
printf("\nThe cycle node is : %d",(t->next)->info);
else
printf("\nThe cycle node is : %d",(t->next)->next)->info);
}
