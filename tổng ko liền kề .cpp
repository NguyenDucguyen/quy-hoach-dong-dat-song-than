Cho mảng A[] gồm N phần tử, nhiệm vụ của bạn là tính tổng lớn nhất của dãy con trong mảng với một điều kiện đó là trong dãy con này không được có 2 phần tử nằm liền kề nhau.

Đầu vào
Dòng đầu tiên là N : số lượng phần tử trong mảng

Dòng thứ 2 là A[i]

Giới hạn
1<=N<=10^6

1<=A[i]<=1000

Đầu ra
In ra kết quả của bài toán

Ví dụ :
Input 01
Copy
4
2 1 8 10
Output 01
Copy
12

#include<bits/stdc++.h>
using namespace std;
int f[1000005];
int mod = 1e9;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> dp(n, 0);

    dp[0] = a[0];
    dp[1] = max(a[0], a[1]);

    for (int i = 2; i < n; ++i) {

        dp[i] = max(dp[i-1], a[i] + dp[i-2]);
    }

    cout<< dp[n-1];
}


