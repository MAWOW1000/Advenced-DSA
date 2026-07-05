// cs013 MÁY BAY TRỰC THĂNG ĐI TUẦN
// Cho n bình xăng chứa trong các bình v1 đến vn. Máy bay cần thực hiện n lần đi tuần từ khu vực A sang khu vực B và ngược lại. Ban đầu trực thăng ở bên A và cách ranh giới (giữa A và B ) là d km. Hãy đếm có bao nhiêu cách bố trí thứ tự các bình xăng để máy bay thực hiện n chuyến đi tuần đúng theo yêu cầu.
// Máy bay có thể chọn bình xăng vj trong lần bay thứ i nếu như giá trị bình xăng vj > d (để có thể bay chuyển từ vùng này sang vùng kia) và khi thực hiện bay sang vùng khác sẽ cách ranh giới là v_j -d.
// Dữ liệu vào gồm có 2 dòng. Dòng thứ nhất chứa hai số nguyên n và d. Dòng thứ 2 chứa n số nguyên dương tương ứng với giá trị v[i].
// Dữ liệu ra: Số cách đi.
// Ví dụ:
// INPUT
// 3 4 2 2 5
// OUTPUT
// 2

#include<bits/stdc++.h>
using namespace std;

int *a, *mark, n, d, sd=0;

void input(){
	cin>>n>>d;
	a = new int[n];
    mark = new int[n];
	for(int i = 0; i < n; i++) {
		cin>>a[i];
        mark[i] = 0;
	}
}

void loang(int rest, int used){
	if(used==n) { sd++; return; }
    for(int i=0; i<n; i++){
        if(a[i]>rest && mark[i]==0){
            mark[i] = 1;
            loang(a[i] - rest, used+1);
            mark[i]=0;
        }
    }
}


int main() { 
	input();
	loang(d, 0);
  cout<<sd;
}
