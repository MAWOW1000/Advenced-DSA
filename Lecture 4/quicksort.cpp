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

void qs(vector<int>& a){
    if(a.size() >1 ){
        int pivot = a[a.size()/2];
        vector<int> LEFT, MID, RIGHT;
        for(int x:a){
            if(x<pivot) LEFT.push_back(x);
            else if(x==pivot) MID.push_back(x);
            else RIGHT.push_back(x);
        }
        a.resize(0);
        qs(LEFT);
        qs(RIGHT);
        for(int x:LEFT) a.push_back(x);
        for(int x:MID) a.push_back(x);
        for(int x:RIGHT) a.push_back(x);
    }
}
int main(){
    vector<int> a;
    int n;
    cin>>n;
    sinh(a, n);
    in(a);
    qs(a);
    in(a);
    return 0;
}