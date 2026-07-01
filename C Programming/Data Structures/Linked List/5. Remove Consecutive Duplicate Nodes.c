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


void removeDuplicate(){
    if(head == NULL)    return;
    Node *temp = head;
    while(temp != NULL && temp->next != NULL){
        while(temp->next != NULL && temp->data == temp->next->data){
            Node *del = temp->next;
            temp->next = temp->next->next;
            free(del);
        }
        temp = temp->next;
    }
}

int main(){
    while(1){
        int data;
        scanf("%d" , &data);
        if(data == -1)
            break;
        insert(createNode(data));
    }
    removeDuplicate();
    display();
    return 0;
}