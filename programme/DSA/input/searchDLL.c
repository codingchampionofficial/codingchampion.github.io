int search(NODE *head,int x){
    NODE *temp; 
    int c=1; 
    temp=head;
while(temp->data!=x&&temp!=NULL){ 
    temp=temp->next; 
    c++; 
    }
if(temp!=NULL) {
    return (c);
}
else{ 
    return (0);
}
}