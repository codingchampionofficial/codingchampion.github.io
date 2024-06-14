void insertq(int X) {
if(front==MAX-1)
{ front=rear=-1; }
if(rear==MAX-1) {
printf("Queue is Full,Entered Data is not Inserted"); }
else {
rear++;
a[rear]=X;
}
}