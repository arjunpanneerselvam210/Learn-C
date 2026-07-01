#include<stdio.h>
#include<math.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    int first = INT_MIN , second = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] < first)
            second = arr[i];
    }
    printf("%d" , second);
    return 0;
}