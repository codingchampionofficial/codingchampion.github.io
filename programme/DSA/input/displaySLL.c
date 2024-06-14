void display(NODE *temp)
{
while(temp!=NULL){
printf("%d->",temp->data); 
temp=temp->next;
}
    printf("NULL");
}