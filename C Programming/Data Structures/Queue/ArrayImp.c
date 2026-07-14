#include<stdio.h>
#define N 5
int front = - 1, rear = -1;
int queue[N];
void enqueue(int val){
    if(rear == -1){
        queue[++rear] = val;
        front++;
    }
    else if(rear == N - 1){
        printf("\nQueue is Full");
    }
    else{
        queue[++rear] = val;
    }
}
void dequeue(){
    if(front == -1 || front > rear){
        printf("Queue is Empty");
        return ;
    }
    printf("Deleted Value : %d",queue[front]);
    if(front == rear)
        front = rear = -1;
    else
        front++;
}
void display(){
    if(front > rear){
        printf("Queue is Empty");
        return;
    }
    for(int i = front ; i <= rear ; i++){
        printf("%d ", queue[i]);
    }
    printf("\n");
}
int main(){
    while(1){
        printf("Select Options : \n");
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        int ch;
        scanf("%d",&ch);
        switch(ch){
            case 1:{
                int val;
                printf("Enter a value : ");
                scanf("%d",&val);
                enqueue(val);
                break;
            }
            case 2:{
                dequeue();
                break;
            }
            case 3:{
                display();
                break;
            }
            case 4:{
                return 0;
            }
            
            default:{
                return 0;
            }
        }
    }
    return 0;
}