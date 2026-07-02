#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
};

typedef struct Node Node;

Node *head = NULL;

Node *createNode(int data){
    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void display(){
    Node *temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

void displayReverse(){
    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->prev;
    }
}

void insertAtBeginning(Node *newNode){
    if(head == NULL)
        head = newNode;
    else{
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }
}

void insertAtEnd(Node *newNode){
    if(head == NULL)
        head = newNode;
    else{
        Node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

int countNumberOfNodes(){
    int count = 0;
    Node *temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

int main(){
    int n;
    scanf("%d" , &n);
    while(n--){
        int data;
        scanf("%d" , &data);
        insertAtEnd(createNode(data));
    }
    printf("%d" , countNumberOfNodes());
}