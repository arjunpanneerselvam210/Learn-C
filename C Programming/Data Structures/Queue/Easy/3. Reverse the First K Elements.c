#include<stdio.h>
#include<stdlib.h>
#define N 5
struct Node{
    int data;
    struct Node *next;
};
int size = 0;
typedef struct Node Node;
Node *front = NULL , *rear = NULL;
Node *createNode(int data){
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void reverse(int k){
    if(k <= 0 || k > size)  return;
    Node *temp = front , *tail = front;
    for(int i = 1 ; i < k ; i++)
        temp = temp->next;
    Node *res = temp->next;
    temp->next = NULL;
    Node *curr = front , *prev = NULL;
    while(curr != NULL){
        Node *nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    front = prev;
    tail->next = res;
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
    int k , i = 0;
    scanf("%d" ,&k);
    while(i < N){
        int val;
        scanf("%d",&val);
        enqueue(val);
        i++;
    }
    reverse(k);
    display();
    return 0;
}