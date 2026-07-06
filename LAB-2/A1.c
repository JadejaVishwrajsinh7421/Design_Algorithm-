// implement stack operations (push,pop,peep,change,display)

#include<stdio.h>
#define max 100

int stack[max],top=-1;

int push(int x){
    if(top==max-1){
        printf("Stack overflow\n");
        return -1;
    }
    else{
        top++;
        stack[top]=x;
        return 0;
    }
}

int pop(){
    if(top==-1){
        printf("Stack underflow\n");
        return -1;
    }
    else{
        int x=stack[top];
        top--;
        return x;
    }
}
int peep(int pos){
    if(top==-1){
        printf("Stack is empty\n");
        return -1;
    }
    else if(pos>top+1){
        printf("Invalid position\n");
        return -1;
    }
    else{
        return stack[top-pos+1];
    }
}

int change(int pos,int x){
    if(top==-1){
        printf("Stack is empty\n");
        return -1;
    }
    else if(pos>top+1){
        printf("Invalid position\n");
        return -1;
    }
    else{
        stack[top-pos+1]=x;
        return 0;
    }
}

void display(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        for(int i=top;i>=0;i--){
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}
void main(){
    // Example usage
    push(10);
    push(20);
    push(30);
    display();
    printf("Popped element: %d\n", pop());
    display();
    printf("Element at position 1: %d\n", peep(1));
    change(1, 100);
    display();
}