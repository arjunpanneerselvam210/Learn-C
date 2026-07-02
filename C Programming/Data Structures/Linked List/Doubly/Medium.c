#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
};

typedef struct Node Node;

Node *head = NULL;

Node *reverse(Node *temp){
    Node *curr = temp , *prev = NULL;
    while(curr != NULL){
        curr->prev = curr->next;
        curr->next = prev;
        prev = curr;
        curr = curr->next;
    }
    return prev;
}

void display(Node *temp){
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

Node *createNode(int data){
    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insert(Node *newNode){
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

int main(){
    while(1){
        int data;
        scanf("%d" , &data);
        if(data == -1)
            break;
        insert(createNode(data));
    }
    display(reverse(head));
}