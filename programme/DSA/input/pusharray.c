void push()
{
    int i,x,flag=0,n;
                    printf("\nhow many number you want to add?");
                scanf("%d",&n);
                for(i=0;i<n;i++)
                {



    if(top==MAX-1)
    {
        flag=1;
    }
    else{
   printf("Enter number :");
   scanf("%d",&x);
   top++;
   s[top]=x;
    }

}
    if(flag==1)
    {
        printf("Overflow");
    }
}