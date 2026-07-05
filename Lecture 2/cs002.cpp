#include<bits/stdc++.h>
using namespace std;

void input(int n, vector<long long> &v){
    for(int i=0; i<n; i++){
        long long x;
        cin>>x;
        v.push_back(x);
    }
}

void sol3(long long *a, int n){
    long long tm = a[0], dau =0, cuoi = 0, S = 0, D = 0;
    for(int i=0; i<n; i++){
        S+=a[i];
        if(S>=tm){
            tm = S;
            dau = D;
            cuoi = i;   
        }
        if(S<0){
            S = 0;
            D = i+1;
        }
    }
    cout<<tm<<" "<<dau<<" "<<cuoi;
}

void output(vector<long long> v){
    long long total = 0;
    long long total_temp = 0;
    long long end = -1;
    for(long long i=0; i<v.size(); i++){
        if(v[i]<0){
            if(total_temp>total){
                total = total_temp;
                end = i-1;
            }
            total_temp = 0;
        }
        else{
            total_temp+=v[i];
        }
    }
    if(end==-1){
        total_temp = v[0];
        end = 1;
        for(long long i=1; i<v.size() - 1; i++){
            if(v[i]>total_temp){
                total_temp = v[i];
                end = i;
            }
        }
        cout<<total_temp<<" "<<end<<" "<<end;
        return;
    }
    long long start = end;
    total_temp = total;
    for(long long i=end; i>=0; i--){
        if(total_temp>0){
            total_temp-=v[i];
            start = i;
        }
    }
    cout<<total<<" "<<start<<" "<<end;
}



int main(){
    int n;
    cin>>n;
    vector<long long> v;
    input(n, v);
    sol3(v.data(), n);
    return 0;
}