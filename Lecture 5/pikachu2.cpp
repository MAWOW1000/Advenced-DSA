#include<bits/stdc++.h>
using namespace std;
int m, n, a[100][100], h[100], c[100], d =0, dem=0;
void docfile(){
    ifstream f("pikachu.txt");
    f>>m>>n;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            f>>a[i][j];
        }
    }
    f.close();
}

void inmt(){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

void inkq(){
    cout<<"Cach thu "<<++dem<<": ";
    for(int i=1; i<=d; i++){
        cout<<"("<<h[i]<<","<<c[i]<<") = "<<a[h[i]][c[i]];
        if(i<d) cout<<", ";
    }
    cout<<endl;
}
void di(int x, int y){
    d++; h[d] = x; c[d] = y;
    if(y == n-1) inkq();
    else{
        if(x>0 && a[x][y]<a[x-1][y+1]) di(x-1, y+1);
        if(a[x][y]<a[x][y+1]) di(x, y+1);
        if(x<m-1 && a[x][y]<a[x+1][y+1]) di(x+1, y+1);
    }
    h[d] = 0; c[d] = 0; d--;
}

int main(){
    docfile();
    inmt();
    for(int i=0; i<m; i++){
        if(a[i][0]) di(i, 0);
    }
    return 0;
}