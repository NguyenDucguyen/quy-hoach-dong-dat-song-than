Cho mảng số nguyên A[] gồm N phần tử và số nguyên dương S, nhiệm vụ của bạn hãy xác định xem có thể tạo ra một tập con các phần tử trong mảng có tổng bằng S hay không?

Chú ý mỗi phần tử trong mảng chỉ được sử dụng một lần.

Đầu vào
Dòng đầu tiên gồm 2 số N và S

Dòng thứ 2 gồm N số của mảng A

Giới hạn
1<=N<=200

1<=S<=50000

1<=A[i]<=500

Đầu ra
In ra 1 nếu có tập con của A[] có tổng bằng S, ngược lại in ra 0

Ví dụ :
Input 01
Copy
5 10
2 2 1 6 3
Output 01
Copy
1

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a) {
        cin >> x;
    }


    vector<bool> dp(k + 1, false);
    dp[0] = true;

    for (int i = 0; i < n; i++) {
        for (int j = k; j >= a[i]; j--) {
            dp[j] = dp[j] || dp[j - a[i]];
        }
    }

    if (dp[k]) {
        cout << "1";
    } else {
        cout << "0";
    }

    return 0;
}
