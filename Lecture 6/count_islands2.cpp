#include<bits/stdc++.h>
using namespace std;

int **a, m, n, sd=0;
int dh[]= {-1, -1, 0, 1, 1, 1, 0, -1};
int dc[]= {0, 1, 1, 1, 0, -1, -1, -1};

void input(){
	cin>>m>>n;
	a = new int*[m];
	for(int i = 0; i < m; i++) {
		a[i] = new int[n];
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++)
			cin>>a[i][j];
	}
}

bool OK(int u, int v){
	if(u>=0 && u<m && v>=0 && v<n && a[u][v]==1) return true;
	return false;
}

void loang(int u, int v){
	a[u][v]=0;
	for(int i =0 ; i<8 ; i++){
		int x= u+dh[i], y=v+dc[i];
		if(OK(x, y)){
			loang(x, y);
		}
	}
}

void demdao(){
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			if(a[i][j]==1){
				sd++;
				loang(i, j);
			}
	cout<<sd;	
}


int main() { 
	input();
	demdao();
}
