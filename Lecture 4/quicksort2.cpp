// #include<bits/stdc++.h>
// using namespace std;

// void sinh(vector<int>& a, int n){
//     srand(time(NULL));
//     a.resize(n);
//     for(int i=0; i<n; i++){
//         a[i] = rand() % 1000001;
//     }
// }

// void in(const vector<int>& a){
//     for(int i=0; i<a.size(); i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }

// void qs(vector<int>& a){
//     if(a.size() >1 ){
//         int pivot = a[a.size()/2];
//         vector<int> LEFT, MID, RIGHT;
//         for(int x:a){
//             if(x<pivot) LEFT.push_back(x);
//             else if(x==pivot) MID.push_back(x);
//             else RIGHT.push_back(x);
//         }
//         a.resize(0);
//         qs(LEFT);
//         qs(RIGHT);
//         for(int x:LEFT) a.push_back(x);
//         for(int x:MID) a.push_back(x);
//         for(int x:RIGHT) a.push_back(x);
//     }
// }

// void nhap(vector<int>& a){
//     string line;
//     getline(cin, line);

//     stringstream ss(line);
//     int x;

//     while (ss >> x) {
//         a.push_back(x);
//     }
// }

// int main(){
//     vector<int> a;
//     nhap(a);
//     int n = a.size();
//     // // sinh(a, n);
//     // // in(a, n);
//     qs(a);
//     in(a);
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
 
void sinh(vi &a){
    string line;
    if (getline(cin, line)) {
        stringstream ss(line);
        int n;
        while (ss >> n) {
            a.push_back(n);
        }
    }
}
void in(vi a){
	for(int x:a) cout<<x<<" ";
}
void qs(vi &a){
	if(a.size()>1){
		int pivot = a[a.size()/2]; //a[0]
		vi LEFT, MID, RIGHT;
		for(int x:a)
			if (x< pivot) LEFT.push_back(x);
			else 
				if (x> pivot) RIGHT.push_back(x);
				else MID.push_back(x);
		a.resize(0);
		qs(LEFT); qs(RIGHT);
		a.insert(a.end(), LEFT.begin(), LEFT.end());
		a.insert(a.end(), MID.begin(), MID.end());
		a.insert(a.end(), RIGHT.begin(), RIGHT.end());
	}
}
//void quicksort(vi &a){ qs(a);}
int main(){
	vi a;
	//int n=4;
	sinh(a); qs(a); 
	in(a);
}
