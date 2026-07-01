#include<stdio.h>
#include<math.h>
int main(){
    int n ;
    scanf("%d" , &n);
    int num = sqrt(n) , count = -n;
    for(int i = 1 ; i < num ; i++){
        if(n % i == 0){
            count += (i + n / i) ;
        }
    }
    if(count == n)  printf("%d is Perfect Number",n);
    else if(count < n)  printf("%d is Abuntant number",n);
    else    printf("%d is Deficient Number",n);
    return 0;
}