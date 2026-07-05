#include<bits/stdc++.h>
using namespace std;

int collazt(long long n, int count=0){
    if(n==1){
        return count;
    }
    else{
        if(n%2==0){
          return collazt(n/2, count+1);
        }
        else{
         return collazt(3*n+1, count+1);
        }
    }
}

int main(){
    long long n;
    cin>>n;
    int steps = collazt(n, 0);
    cout<<steps<<endl;
    return 0;
}