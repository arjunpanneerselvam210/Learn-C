#include<stdio.h>
#include<string.h>
struct student{
    int rollNo;
    char name[20];
    int age;
    float marks;
};
int main(){
    struct student s;
    printf("Enter the Roll Number : ");
    scanf("%d",&s.rollNo);
    printf("Enter the Name : ");
    scanf(" %[^\n]" , s.name);
    printf("Enter the Age : ");
    scanf("%d",&s.age);
    printf("Enter the Marks : ");
    scanf("%f",&s.marks);
    printf("\n\nStudent Detail \nRoll Number : %d\nName : %s\nAge : %d\nMarks : %f\n",s.rollNo , s.name , s.age , s.marks);
}