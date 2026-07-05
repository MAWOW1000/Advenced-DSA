#include<bits/stdc++.h>
using namespace std;
int m, n, a[100][100], h[100], c[100], d=0, dem=0;
void inmt(){
	for(int i=0; i<m; i++){
		cout<<"\n";
		for(int j=0; j<n; j++)
			cout<<setw(4)<<a[i][j];
	}
}
void docfile()
{
	ifstream fi("pikachu.txt");
	if(!fi) cout<<"\n LOI DOC FILE";
	fi>>m>>n;
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			fi>>a[i][j];
	fi.close();
}

void inkq()
{
	cout<<"\n Cach thu "<< ++dem<<": ";
	for(int i=1; i<=d; i++)
	{
		cout<<"( "<<h[i]<<", "<<c[i]<<" ) = "<<a[h[i]][c[i]];
		if(i<d) cout<<" -> ";
	}
}
void di(int x, int y)
{
	d++; h[d]= x; c[d]=y;
	if (y==n-1) inkq();
	else
	{
		if(x>0 && a[x][y]<a[x-1][y+1]) di(x-1, y+1);
		if(a[x][y]<a[x][y+1]) di(x, y+1);
		if(x<m-1 && a[x][y]<a[x+1][y+1]) di(x+1, y+1);
	}
	h[d]= 0; c[d]=0; d--;
}
void tinh_cach_di()
{
	for(int i=0; i<m; i++){
		cout<<"\n\nStarting from row "<<i<<" (value = "<<a[i][0]<<")";
		int dem_before = dem;
		di(i,0);
		if(dem == dem_before) cout<<" -> No paths found";
	}
}

int main() { 
	docfile(); inmt();
	tinh_cach_di();
	cout<<"\n\nTotal paths: "<<dem<<"\n";
}
