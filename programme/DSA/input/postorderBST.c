 postorder(NODE *temp){
    if(temp!=NULL){
        postorder(temp->lchild); 
        postorder(temp->rchild); 
        printf("%d\n",temp->data); 
        }
}