Một tên trộm có 1 cái túi có thể mang các đố vật với trọng lượng tối đa là V.

Hiện tại tên trộm muốn lựa chọn các đồ vật trong N đồ vật để ăn trộm, mỗi đồ vật có trọng lượng là w[i] và giá trị là v[i].

Hãy xác định tổng giá trị lớn nhất của các đồ vật mà tên trộm này lựa chọn sao cho trọng lượng của chúng không vượt quá V.

Đầu vào
Dòng đầu ghi 2 số N và V.

Dòng 2 ghi N số của mảng w.

Dòng 3 ghi N số của mảng v.

Giới hạn
V<=1000

N≤1000

1<=w[i], c[i]<=500

Đầu ra
In ra giá trị lớn nhất có thể đạt được.

Ví dụ :
Input 01
Copy
6 22
39 44 4 59 91 70
47 26 92 33 6 69
Output 01
Copy
92

#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int main() {
    int  n,v;
    cin >> n >> v;

    int w[n + 1], c[n + 1];
    for (int i = 1; i <= n; i++) cin >> w[i];
    for (int i = 1; i <= n; i++) cin >> c[i];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= v; j++) {
            dp[i][j] = 0;
        }
    }


    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= v; j++) {
            if (j >= w[i]) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + c[i]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << dp[n][v];
    return 0;
}


