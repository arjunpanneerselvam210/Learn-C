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

void insertAfterEven(int even){
    Node *temp = head;
    while(temp != NULL){
        if(temp->data % 2 == 0){
            Node *dummy = createNode(even);
            dummy->next = temp->next;
            temp->next = dummy;
            temp = dummy->next;
        }
        else{
            temp = temp->next;
        }
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
    display();
    int even;
    scanf("%d" , &even);
    insertAfterEven(even);
    display();
    return 0;
}