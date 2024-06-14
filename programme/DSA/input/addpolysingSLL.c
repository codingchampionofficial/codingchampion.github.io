#include<stdio.h>
#include<Stdlib.h>
#define MAX 25
typedef struct poly{
    int cf,pwr;
}POLY;
void main()
{
    int m,n,i;
    POLY pa[MAX],pb[MAX],pc[MAX];

    printf("Enter Number of terms of first poly");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter coefficint and power");
        scanf("%d%d",&pa[i].cf,&pa[i].pwr);
    }

    printf("\n First polynomial=");
    for(i=0;i<n-1;i++)
    {
        printf("%dx^%d+",pa[i].cf,pa[i].pwr);

    }
    if(pa[i].pwr==0)
    {
        printf("%d",pa[i].cf,pa[i].pwr);
    }
    else{
        printf("%d",pa[i].cf,pa[i].pwr);

    }

    printf("\nEnter Number of terms of second poly");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        printf("Enter coefficint and power");
        scanf("%d%d",&pb[i].cf,&pb[i].pwr);
    }

    printf("\n secod polynomial=");
    for(i=0;i<m-1;i++)
    {
        printf("%dx^%d+",pb[i].cf,pb[i].pwr);

    }
    if(pb[i].pwr==0)
    {
        printf("%d",pb[i].cf,pb[i].pwr);
    }
    else{
        printf("%d",pb[i].cf,pb[i].pwr);

    }



}
