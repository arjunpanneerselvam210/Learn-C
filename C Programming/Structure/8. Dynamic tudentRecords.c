#include<stdio.h>
#include<stdlib.h>
struct student{
    int rollNo;
    char *name;
    float m1 , m2 , m3;
};

typedef struct student Student;

Student *createStudent(){
    Student *s = (Student*)malloc(sizeof(Student));
    s->name = (char*)malloc(10);
    printf("Enter the Roll Number : ");
    scanf("%d" , &s->rollNo);
    printf("Enter the Student Name : ");
    scanf(" %[^\n]", s->name);
    printf("Enter the Marks 1 : ");
    scanf("%f" , &s->m1);
    printf("Enter the Marks 2 : ");
    scanf("%f" , &s->m2);
    printf("Enter the Marks 3 : ");
    scanf("%f" , &s->m3);
    return s;
}

int main(){
    int n ;
    float total = 0;
    scanf("%d" , &n);
    Student **s = (Student**)malloc(n * sizeof(Student*));
    for(int i = 0 ; i < n ; i++){
        s[i] = createStudent();
        total += s[i]->m1 + s[i]->m2 + s[i]->m3 ;
    }
    
    printf("Total : %d \n",(int)total);
    printf("Percentage : %f " , total / (3 * n) );
    return 0;
}