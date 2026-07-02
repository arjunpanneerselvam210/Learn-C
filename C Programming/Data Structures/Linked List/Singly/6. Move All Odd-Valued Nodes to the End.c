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


void moveOddValuesToEnd(){
    if(!head || !head->next)    return;
    Node *prev = NULL , *curr = head , *oddPtr = NULL , *evenPtr = NULL;
    while(curr != NULL){
        if(curr->data % 2 == 1){

        }
    }
}


//  Node *t1 = head , *t2 = NULL , *dummy = NULL;
//     while(t1 != NULL){
//         if(t1->data % 2 == 1){
//             if(dummy == NULL){
//                 dummy = t1;
//                 t2 = dummy;
//                 t1 = t1->next;
//                 t2->next = NULL;
//             }
//             else{
//                 t2->next = t1;
//                 t1->next = t1->next->next;
//                 t2->next = NULL;
//                 t2 = t2->next;  
//             }
//         }
//         else{
//             if(dummy == NULL || dummy->next == NULL)
//                 head = t1;
//             t1 = t1->next;
//         }
//     }
//     Node *temp = head;
//     while(temp->next != NULL){
//         temp = temp->next ;
//     }
//     temp->next = dummy;
int main(){
    while(1){
        int data;
        scanf("%d" , &data);
        if(data == -1)
            break;
        insert(createNode(data));
    }
    moveOddValuesToEnd();
    display();
    return 0;
} 