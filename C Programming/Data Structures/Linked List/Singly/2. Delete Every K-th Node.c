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

void deleteKthNode(int k){
    Node *temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        if(count == k - 1){
            Node *del = temp->next;
            temp->next = del->next;
            count = 0;
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
    display();
    int k;
    scanf("%d" , &k);
    deleteKthNode(k);
    display();
    return 0;
}   