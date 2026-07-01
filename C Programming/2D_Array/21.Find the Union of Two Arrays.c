#include<stdio.h>
int main(){
    int n , m;
    scanf("%d" , &n);
    int arr1[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr1[i]);
    }
    scanf("%d" ,&m);
    int arr2[m];
    for(int i = 0 ; i < m ; i++){
        scanf("%d" , &arr2[i]);
    }
    int res[n+m];
    int ptr = 0 , i = 0 , j = 0;
    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            res[ptr++] = arr1[i++];
        }
        else if(arr1[i] > arr2[j]){
            res[ptr++] = arr2[j++];
        }
        else{
            res[ptr++] = arr1[i++];
            j++;
        }
    }
    while(i < n){
       res[ptr++] = arr1[i++]; 
    }
    while(j < m){
       res[ptr++] = arr2[j++]; 
    }
    for(int i = 0 ; i < ptr ; i++){
        printf("%d " , res[i]);
    }
    return 0;
}