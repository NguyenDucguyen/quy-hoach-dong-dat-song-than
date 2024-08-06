Cho mảng A[] gồm N số nguyên. Nhiệm vụ của bạn là sắp xếp lại mảng sao cho mảng tăng dần với số bước di chuyển ít nhất.

Mỗi bước di chuyển bạn được phép lựa chọn 1 phần tử trong mảng chèn nó vào 1 vị trí bất kỳ trong mảng.

Đầu vào
Dòng đầu tiên là N

Dòng thứ 2 gồm N phần tử của mảng A

Giới hạn
1<=N<=1000

1<=A[i]<=1000

Đầu ra
Đưa ra kết quả trên 1 dòng.

Ví dụ :
Input 01
Copy
6
1 2 4 5 0 3
Output 01
Copy
2

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(auto &x : a){
        cin>>x;
    }
    int f[n];
    for(int i=0;i<n;i++){
        f[i] = 1;
        for(int j=0;j<i;j++){
            if(a[i] >a[j])  f[i] = max(f[i],f[j] +1) ;
        }
    }
    int result = *max_element(f,f+n);
    cout<<n-result;
}
