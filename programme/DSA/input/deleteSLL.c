NODE* del(NODE *head1,int p){
NODE *temp,*prev; 
int i=1; 
temp=head1; 
while(i<p&&temp!=NULL){
    prev=temp; 
    temp=temp->next; 
    i++; 
    }
if(temp!=NULL){
    if(p==1){
        head1=head1->next; 
        free(temp); 
        }
else{
    prev->next=temp->next; 
    free(temp); 
    }
} 
else{
    printf("INVALID POSITION"); 
    }
return(head1);
}