NODE* del(NODE *head,int p){
    NODE *temp;
    int i=1; 
    temp=head; 
    
while(i<p&&temp!=NULL){
    temp=temp->next; i++; 
    }
if(temp!=NULL){
    if(p==1){
        head=head->next; 
        head->prev=NULL; 
        free(temp); 
        }
else{
    temp->prev->next=temp->next; 
    temp->next->prev=temp->prev; 
    free(temp); 
    }
} 
else {
    printf("INVALID POSITION"); 
    }
return(head);
}