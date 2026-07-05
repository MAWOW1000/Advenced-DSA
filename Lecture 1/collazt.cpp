#include<bits/stdc++.h>
using namespace std;

void collazt(int n){
    cout<<"-->"<<n;
    if(n==1){
        return;
    }
    else{
        if(n%2==0){
          collazt(n/2);
        }
        else{
            collazt(3*n+1);
        }
    }
}

void collazt_iterative(int n){
    while(true){
        cout<<"-->"<<n;
        if(n==1){
            break;
        }
        else if(n%2==0){
            n=n/2;
        }
        else{
            n=3*n+1;
        }
    }
    cout<<"-->"<<n;
}

int main(){
    int n;
    cin>>n;
    collazt(n);
    cout<<"\n Done";
}