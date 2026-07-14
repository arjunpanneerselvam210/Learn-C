#include<stdio.h>
#include<stdlib.h>
#define N 5
int size = 0;
struct Node{
    int data;
    struct Node *next;
};
typedef struct Node Node;
Node *front = NULL , *rear = NULL;
Node *createNode(int data){
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void enqueue(int data){
    if(size == N){
        printf("Queue is Full");
        return;
    }
    Node *newNode = createNode(data);
    if(front == NULL){
        front = rear = newNode;
    }
    else{
        rear->next = newNode;
        rear = newNode;
    }
    size++;
}
void dequeue(){
    if(front == NULL){
        printf("Queue is Empty");
        return;
    }
    else if(front == rear){
        Node *del = front;
        front = rear = NULL;
        free(del);
    }
    else{
        Node *del = front;
        front = front->next;
        free(del);
    }
    size--;
}
void display(){
    if(front == NULL){
        printf("Queue is Empty");
        return;
    }
    Node *temp = front;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main(){
    while(1){
        printf("\nSelect Options : \n");
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        int ch;
        scanf("%d",&ch);
        switch(ch){
            case 1:{
                int val;
                printf("Enter a value : ");
                scanf("%d",&val);
                enqueue(val);
                break;
            }
            case 2:{
                dequeue();
                break;
            }
            case 3:{
                display();
                break;
            }
            case 4:{
                return 0;
            }
            default:{
                return 0;
            }
        }
    }
    return 0;
}