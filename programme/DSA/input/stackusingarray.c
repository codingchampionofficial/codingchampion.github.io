#include<stdio.h>
void pop();
void push();
void display();
#define MAX 5
int top=-1,s[MAX];

int main()
{
    int ch,i,x,n;
    while(1)
    {
        printf("\nSelect operation  1)push  2)pop  3)diplay  0)exit");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            case 0:
            return 0;


            default:
            printf("Error ...... plaese select proper operation");




        }

    }

}

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

void display()
{
    int i=0;
    while(i!=top+1)
    {
        printf("\n%d",s[i]);
        i++;
    }
}
