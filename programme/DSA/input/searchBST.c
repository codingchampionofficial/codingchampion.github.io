int search(NODE *root1,int x){
    NODE *temp; 
    temp=root1; 
    while(temp!=NULL&&temp->data!=x) {
        if(temp->data>x) 
        temp=temp->lchild; 
        else
        temp=temp->rchild;
         }
if(temp!=NULL) 
return(1); 
else 
return(0);
}