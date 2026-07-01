#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

typedef struct Node Node;

Node *head = NULL;

void display(){
    Node *temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

Node *createNode(int data){
    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insert(Node *newNode){
    if(head == NULL)
        head = newNode;
    else{
        Node *temp = head;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}


void rotateKPostLeft(int k){
    Node *temp = head , *dummy = head;
    int count = 0;
    while(temp->next != NULL){
        count++;
        if(count == k){
            head = temp->next;
            temp->next = NULL;
            break;
        }
        temp = temp->next;
    }
    temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = dummy;
}

int main(){
    while(1){
        int data;
        scanf("%d" , &data);
        if(data == -1)
            break;
        insert(createNode(data));
    }
    display();
    int k;
    scanf("%d" , &k);
    rotateKPostLeft(k);
    display();
    return 0;
}