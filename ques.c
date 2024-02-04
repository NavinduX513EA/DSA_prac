#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node *link;
 };
struct node *front=NULL;
struct node *rear=NULL;
void enqueue(int x){
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x;
newnode->link=NULL;
if(front==NULL&&rear==NULL){
    front=rear=newnode;
}
else{
    rear->link=newnode;
    rear=newnode;
}
}
void display(){
 struct node *temp;
 temp=front;
 if(front==NULL){
    printf("quee empty");
 }
 else{
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->link;
    }
 }
}
void dequeue(){
  struct node *temp;
  temp=front;
  front=front->link;
  free(temp);
}
int main(){

int y,num,z;
printf("enter how many times you want to enqueue: ");
scanf("%d",&y);

for(int i=0;i<y;i++){
printf("enter the %d: ",i+1);
scanf("%d",&num);
   enqueue(num);

}
display();
printf("\nenter how many times you want to dequeue: ");
scanf("%d",&z);
for(int i=0;i<z;i++){

   dequeue();
}
display();
}
