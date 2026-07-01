#include<stdio.h>
#include<limits.h>
void Sort(int arr[] , int n){
    for(int i = 0 ; i < n - 1 ; i++){
        for(int j = 0 ; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    Sort(arr , n);
    int count = 1, maxVal = 1;
    for(int i = 1; i < n ; i++){
        if(arr[i] == arr[i - 1])   
            continue;
        if(arr[i] == arr[i - 1] + 1)    
            count++;
        else    
            count = 1;
        if(count > maxVal)  
            maxVal = count;
    }
    printf("%d " , maxVal);
    return 0;
}