#include<stdio.h>
struct student{
    char name[100];
    int age;
    char rollNo[10];
    long phoneNo;
};
int main(){
    int n;
    scanf("%d",&n);
    struct student s[n];
    for(int i = 0 ; i < n ; i++){
        printf("Enter the Student %d Details : \n", i + 1);
        printf("Enter the Name : ");
        scanf(" %[^\n]",s[i].name);
        printf("Enter the age : ");
        scanf("%d" , &s[i].age);
        printf("Enter the Roll Number : ");
        scanf(" %[^\n]",s[i].rollNo);
        printf("Enter the Phone Number : ");
        scanf("%ld",&s[i].phoneNo);
    }
    for(int i = 0 ; i < n ; i++){
        printf("Name : %s \n",s[i].name);
        printf("Age : %d \n",s[i].age);
        printf("Roll Number  : %s \n",s[i].rollNo);
        printf("Phone Number : %ld \n",s[i].phoneNo);
    }
    return 0;
}