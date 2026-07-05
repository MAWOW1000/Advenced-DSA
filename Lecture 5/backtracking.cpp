#include<bits/stdc++.h>
using namespace std;
vector<int> v={1,3,4,5,9,13};
int k = 17;
int a[100], chon[100];
int l=0, dem=0;

void inkq(){
    cout<<"Cach thu "<<++dem<<": ";
    for(int i=0; i<l; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void tim(int d){
    if(d==0) inkq();
    else{
        for(int i=0; i<v.size(); i++){
            if(chon[i]==0 && v[i]<=d){
                a[l++] = v[i];
                chon[i] = 1;
                tim(d-v[i]);
                a[--l] = 0;
                chon[i] = 0;
            }
        }
    }

}

int main(){
    tim(15);
    return 0;
}