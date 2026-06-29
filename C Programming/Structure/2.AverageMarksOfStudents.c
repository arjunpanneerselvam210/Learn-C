#include<stdio.h>
#include<stdlib.h>
struct student{
    int rollNo;
    char *name;
    int mark;
}; 
int main(){
    int n;
    scanf("%d" , &n);
    struct student s[n];
    for(int i = 0 ; i < n ; i++){
        printf("Enter the Student %d Details \n" , i + 1);
        printf("Enter the Roll Number : ");
        scanf("%d", &s[i].rollNo);
        s[i].name = (char*)malloc(20);
        printf("Enter the Name : ");
        scanf(" %[^\n]",s[i].name);
        printf("Enter the mark : ");
        scanf("%d" , &s[i].mark);
    }
    float sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += s[i].mark;
    }
    printf("Average Marks of Students : %f \n",sum / n);
    return 0;
}