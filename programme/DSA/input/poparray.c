void pop()
{
    int temp;
    if(temp==-1)
    {
        printf("under flow (no more item)");
    }
    else{
    temp=s[top];
    printf("%d is removed",temp);
    top--;
    }
}