#include<stdio.h>
#include<stdlib.h>
struct student{
    int rollNo;
    char *name;
    struct Address{
        char *city;
        int pincode;
    }address;
};
int main(){
    struct student s;
    printf("Enter the Roll Number : ");
    scanf("%d",&s.rollNo);
    s.name = (char*)malloc(20);
    printf("Enter the Student Name : ");
    scanf(" %[^\n]",s.name);
    s.address.city = (char*)malloc(20);
    printf("Enter the City : ");
    scanf(" %[^\n]",s.address.city);
    printf("Enter the Pincode : ");
    scanf("%d" , &s.address.pincode);

    printf("\n\nStudent Details \nRoll Number : %d\nName : %s\nCity : %s\nPincode : %d\n\n", s.rollNo , s.name , s.address.city , s.address.pincode);
    return 0;
}