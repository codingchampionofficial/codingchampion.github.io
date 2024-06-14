NODE* create(){
    int x,i,n,flag; 
    NODE *root1,*ptr,*temp,*prev; 
    root1=NULL; 
    printf("\n How many elements?"); 
    scanf("%d",&n); 
    for(i=1;i<=n;i++){
        printf("\n Enter the no="); 
        scanf("%d",&x); 
        ptr=(NODE*)malloc(sizeof(NODE)); 
        ptr->data=x; 
        ptr->lchild=ptr->rchild=NULL; 
        if(root1==NULL) 
        root1=ptr; 
        else {
            temp=root1; 
            while(temp!=NULL){
                prev=temp; 
                if(temp->data>x){
                    temp=temp->lchild; 
                    flag=0; 
                    } 
            else{
                temp=temp->rchild; 
                flag=0; 
                } 
                }
                
            if(flag==1) 
                prev->lchild=ptr; 
            else prev->rchild=ptr; 
            } 
        }
return(root1);
}