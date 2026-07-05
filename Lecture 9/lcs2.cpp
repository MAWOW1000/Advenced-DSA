#include<bits/stdc++.h>
using namespace std;

string X, Y;
int LCS(int m, int n){
  int a[m+1][n+1];
  for(int i=0; i<=m; i++) a[i][0]=0;
  for(int j=0; j<=n;j++) a[0][j]=0;
  for(int i=1; i<=m;i++){
    for(int j=1;j<=n;j++){
      if(X[i-1]==Y[j-1]) a[i][j] = 1+ a[i-1][j-1];
      else a[i][j] = max(a[i][j-1], a[i-1][j]);
    }
  }
  return a[m][n];
} 

int main(){
    cin>>X>>Y;
    cout<<LCS(X.length(),Y.length())<<endl;
}
