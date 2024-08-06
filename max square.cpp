Bạn được cung cấp một ma trận nhị phân có N dòng và M cột chỉ bao gồm các số 0 và 1, hãy tìm hình vuông lớn nhất trong ma trận mà chỉ chứa toàn số 1.

Đầu vào
Dòng đầu tiên gồm 2 số N và M

N dòng tiếp theo mỗi dòng M số nguyên

Giới hạn
1<=N,M<=500

0<=A[i][j]<=1

Đầu ra
In ra kết quả đáp án của bài toán

Ví dụ :
Input 01
Copy
4 4
1 1 0 0
1 1 1 1
1 1 0 1
1 0 1 0
Output 01
Copy
2

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n+1][m+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    int dp[505][505];
    for(int  i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            dp[i][j] =0;
        }
    }
    int maxSide =0;
     for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (a[i][j] == 1) {
                if (i == 1 || j == 1) {
                    dp[i][j] = 1;
                } else {
                    dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + 1;
                }
                maxSide = max(maxSide, dp[i][j]);
            }
        }
    }

    cout<< maxSide;


}

