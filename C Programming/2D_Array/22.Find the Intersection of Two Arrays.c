#include<stdio.h>
#include<stdlib.h>
int ptr = 0;
int *solve(int *arr1 , int *n1 , int *arr2 , int *n2){
    int i = 0 , j = 0 ;
    int *res = (int*)calloc(ptr , sizeof(int));
    while(i < *n1 && j < *n2){
        if(arr1[i] == arr2[j]){
            ptr++;
            res = realloc(res , ptr * sizeof(int));
            res[ptr - 1] = arr1[i];
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j])  i++;
        else if(arr2[j] < arr1[i])  j++;
    }
    return res;
}

int main(){
    int n , m;
    scanf("%d" , &n);
    int *arr1 = (int*)calloc(n , sizeof(int));
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr1[i]);
    }
    scanf("%d" , &m);
    int *arr2 = (int*)calloc(m , sizeof(int));
    for(int i = 0 ; i < m ; i++){
        scanf("%d" , &arr2[i]);
    }
    int *res = solve(arr1 , &n , arr2 , &m);
    for(int i = 0 ; i < ptr ; i++)
        printf("%d" , res[i]);
    return 0;
}