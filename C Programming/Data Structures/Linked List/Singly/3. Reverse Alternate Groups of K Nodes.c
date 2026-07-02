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

Node *reverseList(Node *temp){
    Node *prev = NULL , *curr = temp;
    while(curr != NULL){
        Node *nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

void reverseAlternateGroup(int k){
    Node *temp = head , *dummy = NULL;
    int count = 0;
    while(temp != NULL){
        if(count == 0)
            dummy = temp;
        count++;
        if(count == k){
            Node *dummy2 = temp->next;
            temp->next = NULL;
            reverse(dummy);
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
    reverseAlternateGroup(k);
    display();
    return 0;
}