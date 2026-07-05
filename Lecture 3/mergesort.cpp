#include<bits/stdc++.h>
using namespace std;

void sinh(vector<int>& a, int n){
    srand(time(NULL));
    a.resize(n);
    for(int i=0; i<n; i++){
        a[i] = rand() % 1000001;
    }
}

void in(const vector<int>& a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void MERGE(vector<int>& a, int l, int r){
    vector<int> b(r-l+1);
    int m = (l+r)/2;
    int i = l, j = m+1, v = 0;
    while(i<=m && j<=r){
        if(a[i]<a[j]){
            b[v++] = a[i++];
        }
        else{
            b[v++] = a[j++];
        }
    }
    while(i<=m){
        b[v++] = a[i++];
    }
    while(j<=r){
        b[v++] = a[j++];
    }
    for(int k=0; k<v; k++){
        a[l+k] = b[k];
    }
}

void ms(vector<int>& a, int l, int r){
    if(l<r){
        int m = (l+r)/2;
        ms(a, l, m);
        ms(a, m+1, r);
        MERGE(a, l, r);
    }
}

void mergesort(vector<int>& a, int n){
    ms(a, 0, n-1);
}

void nhap(vector<int>& a){
    string line;
    getline(cin, line);

    stringstream ss(line);
    int x;

    while (ss >> x) {
        a.push_back(x);
    }
}

int main(){
    vector<int> a;
    nhap(a);
    int n = a.size();
    // // sinh(a, n);
    // // in(a, n);
    mergesort(a, n);
    in(a);
    return 0;
}