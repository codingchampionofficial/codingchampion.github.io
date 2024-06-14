void preorder(NODE *temp){
    if(temp!=NULL) {
        printf("%d\n",temp->data); 
        preorder(temp->lchild); 
        preorder(temp->rchild); 
        }
}