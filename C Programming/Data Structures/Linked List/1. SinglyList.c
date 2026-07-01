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
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

void createNode(int data){
    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    if(head == NULL)
        head = newNode;
    else{
        Node *temp = head;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}

void insertAtEnd(Node *newNode){
    Node *temp = head;
    if(head == NULL){
        head = newNode;
    }
    else{
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}

void insertAtBegin(Node *newNode){
    if(head == NULL)    
        head = newNode;
    else{
        newNode->next = head;
        head = newNode;
    }
}

void insertAtPos(int pos , Node *newNode){
    if(pos == 1)    insertAtBegin(newNode);
    Node *temp = head;
    for(int i = 1 ; i < pos - 1 && temp != NULL ; i++){
        temp = temp->next;
    }
    if(temp == NULL)
        printf("Position Is Not available");
    else{
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void insertAtMiddle(Node *newNode){
    if(head == NULL)    head = newNode;
    Node *temp = head;
    int size = 0;
    while(temp != NULL){
        size++;
        temp = temp->next;
    }
    temp = head;
    for(int i = 1 ; i < size/2 - 1 ; i++){
        temp = temp->next;
    }
    newNode->next = temp->next ;
    temp->next = newNode;
}

void deleteAtBegin(){
    if(head->next == NULL){
        free(head);
        head = NULL;
    }
    else{
        Node *temp = head;
        head = head->next;
        free(temp);
    }
}

void deleteAtEnd(){
    if(head->next == NULL){
        free(head);
        head = NULL;
    }
    else{
        Node *temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void deleteAtMiddle(){
    int size = 0;
    Node *temp = head;
    while(temp != NULL){
        temp = temp->next;
        size++;
    }
    temp = head;
    for(int i = 1 ; i < size / 2 - 1; i++){
        temp = temp->next;
    }
    Node *del = temp->next;
    temp->next = del->next;
    free(del);
}
void deleteAtPos(int pos){
    Node *temp = head;
    if(pos == 1){
        deleteAtBegin();
        return ;
    }
    for(int i = 1 ; i < pos -1 && temp != NULL ; i++){
        if(i > pos){
            printf("Position is not in the list");
            break;
        }
        temp = temp->next;
    }
    Node *del = temp->next;
    temp->next = del->next;
    free(del);
}

int search(int find){
    Node *temp = head;
    int pos = 1;
    while(temp->next != NULL){
        if(temp->data == find)
            return pos;
        pos++;
        temp = temp->next;
    }
    return -1;
}

int noOfNodes(){
    int count = 0;
    Node *temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void reverse(){
    if(!head || !head->next)    return;
    Node *curr = head , *prev = NULL;
    while(curr != NULL){
        Node *nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    head = prev;
}

void sort(){
    Node *temp = head , *res = NULL , *dummy = head;
    while(1){
        while(temp->next != NULL){
            if(temp->val < dummy->val)
        }
    }
}

int main(){
    while(1){
        int data;
        scanf("%d" ,&data);
        if(data == -1){
            // int pos , data;
            // scanf("%d" , &data);
            // Node *newNode = malloc(sizeof(Node));
            // newNode->data = data;
            // newNode->next = NULL;
            // insertAtMiddle(newNode);
            break;
        }
        Node *newNode = malloc(sizeof(Node));
        newNode->data = data;
        newNode->next = NULL;
        insertAtEnd(newNode);
        
    }
    reverse();
    display();  
    return 0;
}