void delq() {
int x; if(front==rear)
{
printf("Queue is Empty"); }
else
{ front++; x=a[front]; printf("Deleted Data is %d",x); }
}