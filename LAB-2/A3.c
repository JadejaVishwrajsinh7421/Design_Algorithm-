//  implement a single linked list with the following operations: insert at beginning, insert at end, insert at a given position, delete from beginning, delete from end, delete from a given position, display the list.
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void insert_at_beginning(struct node **head,int x){
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=x;
    new_node->next=*head;
    *head=new_node;
}

void insert_at_end(struct node **head,int x){
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=x;
    new_node->next=NULL;
    if(*head==NULL){
        *head=new_node;
        return;
    }
    struct node *temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
}

void insert_at_position(struct node **head,int x,int pos){
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=x;
    if(pos==1){
        new_node->next=*head;
        *head=new_node;
        return;
    }
    struct node *temp=*head;
    for(int i=1;i<pos-1 && temp!=NULL;i++){
        temp=temp->next;
    }
    if(temp==NULL){
        printf("Position out of bounds\n");
        free(new_node);
        return;
    }
    new_node->next=temp->next;
    temp->next=new_node;
}

void delete_from_beginning(struct node **head){
    if(*head==NULL){
        printf("List is empty\n");
        return;
    }
    struct node *temp=*head;
    *head=(*head)->next;
    free(temp);
}

void delete_from_end(struct node **head){
    if(*head==NULL){
        printf("List is empty\n");
        return;
    }
    if((*head)->next==NULL){
        free(*head);
        *head=NULL;
        return;
    }
    struct node *temp=*head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
}

void delete_from_position(struct node **head,int pos){
    if(*head==NULL){
        printf("List is empty\n");
        return;
    }
    if(pos==1){
        struct node *temp=*head;
        *head=(*head)->next;
        free(temp);
        return;
    }
    struct node *temp=*head;
    for(int i=1;i<pos-1 && temp!=NULL;i++){
        temp=temp->next;
    }
    if(temp==NULL || temp->next==NULL){
        printf("Position out of bounds\n");
        return;
    }
    struct node *to_delete=temp->next;
    temp->next=to_delete->next;
    free(to_delete);
}

void display(struct node *head){
    if(head==NULL){
        printf("List is empty\n");
        return;
    }
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void main(){
    struct node *head=NULL;
    insert_at_beginning(&head, 10);
    insert_at_end(&head, 20);
    insert_at_position(&head, 15, 2);
    display(head);
    delete_from_beginning(&head);
    delete_from_end(&head);
    delete_from_position(&head, 1);
    display(head);
}