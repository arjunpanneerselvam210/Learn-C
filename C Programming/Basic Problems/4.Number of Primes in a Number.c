#include<stdio.h>
int main(){
    int n , count = 0;
    scanf("%d" , &n);
    while(n > 0){
        int temp = n % 10;
        if(temp == 2)   count++;
        else if(temp == 3)  count++;
        else if(temp == 5) count++;
        else if(temp == 7) count++;
        n /= 10;
    }
    printf("%d" , count);
    return 0;
}