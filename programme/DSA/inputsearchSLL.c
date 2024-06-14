void search(NODE *head1,int x){
NODE *temp; 
int c=1; 
temp=head1; 
while(temp->data!=x && temp!=NULL){
    temp=temp->next; c++;
     }
if(temp!=NULL) {
printf("No. is Found at Location %d",c); 
}
else {
printf("No. is Not Found:"); 
}
}