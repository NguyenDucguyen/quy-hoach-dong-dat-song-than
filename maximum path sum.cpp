Cho bảng A[] kích thước N x M (N hàng, M cột). Bạn được phép đi xuống dưới, đi sang phải và đi xuống ô chéo dưới về bên phải.

Khi đi qua ô (i, j), điểm nhận được bằng A[i][j]. Hãy tìm đường đi từ ô (1, 1) tới ô (N, M) sao cho tổng điểm là lớn nhất.

Đầu vào
Dòng 1 gồm số nguyên dương N và M

N dòng tiếp theo, mỗi dòng gồm M số nguyên A[i][j]

Giới hạn
1<=N,M<=500

1<=A[i][j]<=1000

Đầu ra
In ra kết quả của bài toán

Ví dụ :
Input 01
Copy
5 5
1 0 31 5 25
28 26 32 46 7
26 40 36 13 16
7 26 14 6 11
42 45 11 10 21
Output 01
Copy
208

#include<bits/stdc++.h>
using namespace std;
int f[1005][1005];
int main(){
    int n,m;
    cin>>n>>m;
    int a[n+1][m+1];
    for(int i=1;i<=n;i++){
        for(int j=1 ;j<=m;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            f[i][j] =0;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            f[i][j] = max({f[i-1][j],f[i][j-1],f[i-1][j-1]})+a[i][j];
        }
    }
    cout<<f[n][m];


}

