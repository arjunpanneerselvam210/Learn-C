#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
typedef struct Node Node;
Node *head = NULL;

void append(int data){
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void display(){
    while(head != NULL){
        printf("%d ",head->data);
        head = head->next;
    }
    if(head == NULL)
        printf("Stack Overflow\n");
}

int main(){
    int n;
    scanf("%d" ,&n);
    for(int i = 0 ; i < n ; i++){
        int data;
        scanf("%d",&data);
        append(data);
    }    
    display();
    return 0;
}