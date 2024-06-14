 inorder(NODE *temp){
    if(temp!=NULL){
        inorder(temp->lchild);
        printf("%d\n",temp->data); 
        inorder(temp->rchild); 
    }
}