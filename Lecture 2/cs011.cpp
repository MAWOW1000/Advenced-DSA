#include<bits/stdc++.h>
using namespace std;

int find(string A, string B){
    int n = A.length();
    int m = B.length();
    string C = B;
    for(int i=0; i<=n-m; i++){
        int j = 0;
        while(A[i+j]==B[j] && j<m){
            j++;
        }
        if(j==m){
            return i+1;
        }
    }
    return 0;
}


int main(){
    string A, B;
    cin>>A>>B;
    cout<<find(A, B);
    return 0;
}