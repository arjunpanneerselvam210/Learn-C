#include<bits/stdc++.h>
using namespace std;
void squareStar(int n){
    for(int i = 1; i<=n ; i++){
        for(int j = 1 ; j <= n ;j++)    cout<<"*";
        cout<<endl;
    }
}
void H_squareStar(int n){
    for(int i = 1 ;i <= n ; i++){
        for(int j = 1; j<= n; j++){
            if(j == 1 || j == n || i == 1 || i == n)    cout<<"*";
            else    cout<<" ";
        }
        cout<<endl;
    }
}
void L_rombusStar(int n){
    for(int i = 1;i <= n ;i++){
        for(int j = 1 ; j <= i ;j++)    cout<<" ";
        for(int j = 1; j <= n ; j++)    cout<<"*";
        cout<<endl;
    }
}
void R_rombusStar(int n){
    for(int i = n ;i >= 1; i--){
        for(int j = i ; j >= 1; j--)    cout<<" ";
        for(int j = n ; j >= 1; j--)    cout<<"*";
        cout<<endl;
    }
}
void fullPyramid(int n){
    for(int  i = 1 ; i <= n ; i++){
        for(int j = n-i ; j >= 1 ; j--) cout<<" ";
        for(int j = 2*i-1;j >= 1 ; j--) cout<<"*";
        cout<<endl;
    }
}
void rectangleStar(int n){
    for(int i = 1 ; i<= n; i++){
        for(int j = 1 ; j <= 2*n-2 ; j++)   cout<<"*";
        cout<<endl;
    }
}
void H_rectangleStar(int n){
    for(int i = 1 ;i <= n; i++){
        for(int j = 1 ; j <= 2*n-2 ; j++){
            if(i == 1 || i == n || j == 1 || j == 2*n-2)    cout<<"*";
            else    cout<<" ";
        }
        cout<<endl;
    }
}
void R_HalfPyramid(int n){
    for(int  i = 1; i <= n; i++){
        for(int j = 1 ; j <= i ; j++)   cout<<"*";
        cout<<endl;
    }
}
void IR_HalfPyramid(int n){
    for(int i = n ; i >= 1; i--){
        for(int j = i ; j >= 1 ; j--)   cout<<"*";
        cout<<endl;
    }
}
void L_HalfPyramid(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = i-1 ; j >=1 ; j--) cout<<" ";
        for(int j = n ; j >= i ; j--)   cout<<"*";
        cout<<endl;
    }
}
void IL_HalfPyramid(int n){
    for(int i = 1; i<= n ; i++){
        for(int j = n-i ; j >= 1 ; j--) cout<<" ";
        for(int j = i ; j >= 1 ; j--)   cout<<"*";
        cout<<endl;
    }
}
void I_fullPyramid(int n){
    for(int i = n ; i >= 1 ; i--){
        for(int j = n-i; j >= 1 ; j--)  cout<<" ";
        for(int j = 2*i-1; j >= 1 ; j--)    cout<<"*";
        cout<<endl;
    }
}
void H_fullPyramid(int n){
    for(int i = 1 ; i<= n ; i++){
        for(int j = n-i ; j >= 1 ; j--) cout<<" ";
        for(int j = 2*i-1; j >= 1 ; j--){
            if(j == 2*i-1 || j == 1 || i == n)    cout<<"*";
            else    cout<<" ";
        }
        cout<<endl;
    }
}
void HI_fullpyramid(int n){
    for(int i = n ; i >= 1 ; i--){
        for(int j = n-i ; j >= 1 ; j--) cout<<" ";
        for(int j = 2*i-1 ; j >= 1 ; j--) {
            if(j == 1 || j == 2*i-1 || i == n)      cout<<"*";
            else    cout<<" ";
        }
        cout<<endl;
    }
}
void halfDiamond(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++)   cout<<"*";
        cout<<endl;
    }
    for(int i = n-1 ; i >= 1 ; i--){
        for(int j = i ; j >= 1 ; j--)   cout<<"*";
        cout<<endl;
    }
}
void I_halfDiamond(int n){
    for(int i = 1; i <= n ; i++){
        for(int j = n-i ; j >= 1 ; j--) cout<<" ";
        for(int j = i ; j >= 1 ;j--)    cout<<"*";
        cout<<endl;
    }
    for(int i = 1 ; i <= n ; i++){
        for(int j = i ; j >= 1 ; j--)   cout<<" ";
        for(int j = n-i ; j >= 1; j--)  cout<<"*";
        cout<<endl;
    }
}
void fullDiamond(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = n-i ; j >= 1 ; j--) cout<<" ";
        for(int j = 2*i-1;j >= 1 ; j--) cout<<"*";
        cout<<endl;
    }
    for(int i = n-1 ; i >= 1 ; i--){
        for(int j = n-i; j >= 1 ;j--)   cout<<" ";
        for(int j = 2*i-1;j>= 1 ;j--)  cout<<"*";
        cout<<endl;
    }
}
void I_fullDiamond(int n){
    for(int i = 1 ; i<= n ; i++){
        for(int j = n-i ; j >= 1 ; j--) cout<<" ";
        for(int j = 2*i-1;j >= 1 ; j--){
            if(j == 2*i-1 || j == 1)    cout<<"*";
            else    cout<<" ";
        }
        cout<<endl;
    }
    for(int i = n-1;i >= 1 ; i--){
        for(int j = n-i ; j >= 1 ; j--)   cout<<" ";
        for(int j = 2*i-1; j >= 1 ; j--){
            if(j == 2*i-1 || j == 1)    cout<<"*";
            else    cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    tri(n);
    squareStar(n);cout<<endl;
    H_squareStar(n);cout<<endl;
    rectangleStar(n);cout<<endl;
    H_rectangleStar(n);cout<<endl;
    L_rombusStar(n);cout<<endl;
    R_rombusStar(n);cout<<endl;
    L_HalfPyramid(n);cout<<endl;
    IL_HalfPyramid(n);cout<<endl;
    R_HalfPyramid(n);cout<<endl;
    IR_HalfPyramid(n);cout<<endl;
    fullPyramid(n);cout<<endl;
    I_fullPyramid(n);cout<<endl;
    H_fullPyramid(n);cout<<endl;
    HI_fullpyramid(n);cout<<endl;
    halfDiamond(n);cout<<endl;
    I_halfDiamond(n);cout<<endl;
    fullDiamond(n);
    I_fullDiamond(n);
    return 0;
}
