#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    int left = 0 , right = n - 1 , maxVal = INT_MIN;
    while(left < right){
        int height = arr[left] < arr[right] ? arr[left] : arr[right];
        int width = right - left;
        int area = height * width;
        maxVal = maxVal > area ? maxVal : area;
        if(arr[left] > arr[right]) right--;
        else if(arr[left] < arr[right])    left++;
        else{
            left++;
            right--;
        }
    }
    printf("%d" , maxVal);
    return 0;
}