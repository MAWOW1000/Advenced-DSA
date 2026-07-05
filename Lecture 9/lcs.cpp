#include<bits/stdc++.h>
using namespace std;

string X, Y;
int LCS(int m, int n){
  if(m==0 || n==0) return 0;
  else if(X[m-1] == Y[n-1]) return 1+ LCS(m-1, n-1);
  else {
    return max(LCS(m-1,n), LCS(m,n-1));
  }
} 

int main(){
    cin>>X>>Y;
    cout<<LCS(X.length(),Y.length())<<endl;
}
