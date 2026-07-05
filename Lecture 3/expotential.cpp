#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007

// long long xmun(long long x, long long n){
//     long long kq = 1;
//     for(long long i=1; i<=n; i++){
//         kq = (kq*x) % MOD;
//     }
//     return kq;
// }

long long xmun1(long long x, long long n){
    if(n==0) return 1;
    else if(n%2!=0){
        return x*(xmun1(x, n-1) % MOD) % MOD;
    }
    else{
        long long kq = xmun1(x, n/2) % MOD;
        return (kq*kq) % MOD;
    }
}

int main(){
    // long long x, n=10e10, t1, t2;
    long long x, y;
    cin>>x>>y;
    // t1 = clock();
    // cout<<"\n x^"<<n<<"= "<<xmun(x, n);
    // t2 = clock();
    // cout<<"\n Thoi gian thuc hien = "<<(t2-t1)<<endl;
    cout<<xmun1(x, y);
    return 0;
}
