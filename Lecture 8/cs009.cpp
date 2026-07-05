#include<bits/stdc++.h>
using namespace std;
 
priority_queue<int, vector<int>, greater<int>> pq;

void input(int n){
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        pq.push(x);
    }
}

void greedy(){
    int d = 0;
    while(pq.size() > 1){
        int first = pq.top(); pq.pop();
        int second = pq.top(); pq.pop();
        d += first + second;
        pq.push(first + second);
    }
    cout<<d;
}

int main(){
    int n;
    cin>>n;
    input(n);
    greedy();
}
