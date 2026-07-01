#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int maxVal = 0;
    for(int i = 0;i < n ; i++){
        scanf("%d" ,&arr[i]);
        if(arr[i] > maxVal)
            maxVal = arr[i];
    }
    int freq[maxVal + 1];
    for(int i = 0 ; i <= maxVal ; i++)
        freq[i] = 0;
    for(int i = 0 ; i < n ; i++)
        freq[arr[i]]++;
    int target;
    scanf("%d",&target);
    int flag = 0;
    for(int i = 0 ; i < n ; i++){
        int need = target - arr[i];
        if(need < 0 || need > maxVal)
            continue;
        if(need == arr[i]){
            if(freq[arr[i]] >= 2){
                flag = 1;
                break;
            }
        }
        else{
            if(freq[need] > 0){
                flag = 1;
                break;
            }
        }
    }
    printf("%s",
           flag ? "Target is found"
                : "Target is not found");
    return 0;
}