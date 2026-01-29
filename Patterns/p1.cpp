#include<bits/stdc++.h>
using namespace std;
void solveStar1(int n){
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<=i)    cout<<"*";
            else    break;
        }
        cout<<endl;
    }
}
void solveStar2(int n){
   for(int i = n;i >= 1;i--){
       for(int j = 1;j <=n; j++){
            if(j <= i)  cout<<"*";
            else    break;
       }
       cout<<endl;
   }
}
void solveNum1(int n){
    for(int i = 1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=i)    cout<<j;
            else    break;
        }
        cout<<endl;
    }
}
void solveNum2(int n){
    for(int i = 1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=i)    cout<<i;
            else    break;
        }
        cout<<endl;
    }
}
void solveNum3(int n){
   for(int i = n;i >= 1;i--){
       for(int j = 1;j <=n; j++){
            if(j <= i)  cout<<j;
            else    break;
       }
       cout<<endl;
   }
}
void solveStar3(int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j < n-i-1 ;j++)   cout<<" ";
        for(int j = 1;j <=2*i+1 ;j++)   cout<<"*";
        for(int j = 1;j < n-i-1 ;j++)   cout<<" ";
        cout<<endl;
    }
}
void solveStar4(int n){
    for(int i = n ; i >= 1; i--){
        for(int j = 1; j <= (n-i);j++)  cout<<" ";
        for(int j = 2*i-1; j >=1 ; j--) cout<<"*";
        for(int j = 1; j <= (n-i);j++)  cout<<" ";
        cout<<endl;
    }
}
void solveStar5(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = n-i ; j>=1 ; j--) cout<<" ";
        for(int j = 1 ; j <= 2*i-1 ; j++)   cout<<"*";
        for(int j = n-i ; j>=1 ; j--) cout<<" ";
        cout<<endl;
    }
    for(int i = n-1; i >= 1 ;i--){
        for(int j = 1; j <= n-i ; j++)  cout<<" ";
        for(int j = 1; j <= 2*i-1;j++)  cout<<"*";
        for(int j = 1; j <= n-i ; j++)  cout<<" ";
        cout<<endl;
    }
}
void solveStar6(int n){
    for(int i = 1; i <= n ;i++){
        for(int j = 1; j <= i ; j++)
            cout<<"*";
        cout<<endl;
    }
    for(int i = n-1; i >= 1 ; i--){
        for(int j = i ; j >= 1;j--)
            cout<<"*";
        cout<<endl;
    }
}
void solveNum4(int n){
    for(int i = 1 ;i <= n; i++){
        if(i%2==1){
            for(int j = 1 ; j <= i ; j++){
                if(j%2 == 0)    cout<<"0";
                else    cout<<"1";
            }
        }
        else{
            for(int j = 1; j <= i ;j++){
                if(j%2 == 1)    cout<<"0";
                else    cout<<"1";
            }
        }
        cout<<endl;
    }
}
void solveNum5(int n){
    for(int i = 1 ;i <= n;i++){
        for(int j = 1 ; j <= i ; j++)    cout<<j;
        for(int j = 1 ; j <= 2*n-i*2 ;j++) cout<<" ";
        for(int j = i ; j >= 1 ; j--)   cout<<j;
        cout<<endl;
    }
}
void solveNum6(int n){
    int cnt = 1;
    for(int i = 1 ;i <= n; i++){
        for(int j = 1; j<= n ;j++)
            if(j <= i)  cout<<cnt++<<" ";
        cout<<endl;
    }
}
void solveAlph1(int n){
    for(int i = 1 ; i<= n ; i++){
        char chr = 'A';
        for(int j = 1 ; j<= i ;j++)
            if(j <= i)  cout<<chr++<<" ";
        cout<<endl;
    }
}
void solveAlph2(int n){
    for(int i = n ; i >= 1 ; i--){
        char chr = 'A';
        for(int j = i; j >= 1 ; j--)
            cout<<chr++<<" ";
        cout<<endl;
    }
}
void  solveAlph3(int n){
    char chr = 'A';
    for(int i = 1; i <= n ;i++,chr++){
        for(int j = 1 ; j <= n ; j++)
            if(j <= i)   cout<<chr<<" ";
        cout<<endl;
    }
}
void  solveAlph4(int n){
    char chr = 'A';
}
void solveStar7(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1 ; j <= n; j++){
            if(i == 1 || j ==1 || j == n || i == n) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    solveStar1(n);
    solveStar2(n);
    solveStar3(n);
    solveStar4(n);
    solveStar5(n);
    solveStar6(n);
    solveStar7(n);
    solveNum1(n);
    solveNum2(n);
    solveNum3(n);
    solveNum4(n);
    solveNum5(n);
    solveNum6(n);
    solveAlph1(n);
    solveAlph2(n);
    solveAlph3(n);
    return 0;
}