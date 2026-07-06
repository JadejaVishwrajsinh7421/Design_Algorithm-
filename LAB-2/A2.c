// implement queue operations (enqueue,dequeue,display)

#include<stdio.h>
#define max 100

int queue[max],front=-1,rear=-1;

int enqueue(int x){
    if(rear==max-1){
        printf("Queue overflow\n");
        return -1;
    }
    else{
        if(front==-1){
            front=0;
        }
        rear++;
        queue[rear]=x;
        return 0;
    }
}
int dequeue(){
    if(front==-1){
        printf("Queue underflow\n");
        return -1;
    }
    else{
        int x=queue[front];
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
            front++;
        }
        return x;
    }
}
void display(){
    if(front==-1){
        printf("Queue is empty\n");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}
void main(){
    // Example usage
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    printf("Dequeued element: %d\n", dequeue());
    display();
}