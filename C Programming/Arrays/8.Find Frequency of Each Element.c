#include<stdio.h>
int main(){
    int n ;
    scanf("%d" , &n);
    int arr[n] , res[10];
    printf("Elements input range from 0 to 9 :");
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
        if(arr[i] > 9 || arr[i] < 0){
            printf("Invalid Input : Input range must range from 0 to 9");
            break;
        }
    }
    for(int i = 0 ; i < 10 ; i++)   res[i] = 0;
    for(int i = 0 ; i < n ; i++)    res[arr[i]]++;
    for(int i = 0 ; i < 10 ; i++){
        if(res[i] != 0)
            printf("%d : %d\n" ,i , res[i]);
    }
    return 0;
}