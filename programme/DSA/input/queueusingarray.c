#include<stdlib.h> 
#include<stdio.h> 
#include<conio.h> 
#define MAX 4 
int a[MAX]; 
int rear=-1,front=-1; 
void insertq(int); 
void delq(); 
void main(){
int choice,x; 
do{
printf("\n1.INSERT\n2.DELETE\n3.EXIT"); 
printf("\nENTER YOUR CHOICE:"); 
scanf("%d",&choice); 
switch(choice){ 
    case 1:
    printf("Enter data:");
    scanf("%d",&x);
    insertq(x); 
    break; 
    case 2: 
    delq();
    break; 
    default: 
    exit(0); 
    }
}while(choice!=3); 
}
void insertq(int X){
if(front==MAX-1)
{ front=rear=-1; }
if(rear==MAX-1) {
printf("Queue is Full,Entered Data is not Inserted"); }
else {
rear++;
a[rear]=X;} }
void delq() {
int x; if(front==rear)
{
printf("Queue is Empty"); }
else
{ front++; x=a[front]; printf("Deleted Data is %d",x); }
}