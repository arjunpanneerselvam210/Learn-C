#include<stdio.h>
#include<math.h>
int main(){
    int n , digit;
    scanf("%d%n", &n,&digit);
    int sum = 0 , temp = n;
    while(temp > 0){
        sum += pow(temp % 10 , digit);
        temp /= 10;
    }
    if(sum == n)    printf("%d is Amstrong Number",n);
    else    printf("%d is Not Amstrong Number",n);
    return 0;
}