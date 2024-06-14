void display (NODE *temp){
    printf("DLL in forward direction\n") ; 
    while(temp->next!=NULL){
        printf("%d->", temp->data); 
        temp=temp->next; 
        }
    printf("%d->NULL\n",temp->data); 
    printf("\nDLL in reverese direction\n");
    while(temp!=NULL){
        printf("%d<-", temp->data); 
        temp=temp->prev;
        }
    printf("NULL");
}