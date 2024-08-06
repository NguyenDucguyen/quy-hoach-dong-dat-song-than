Một chiếc cầu thang có N bậc. Mỗi bước, bạn được phép bước lên trên tối đa K bước.

Hỏi có tất cả bao nhiêu cách bước để đi hết cầu thang sao cho tổng số bước đi bằng N

Đầu vào
Dòng duy nhất chứa 2 số nguyên N và K

Giới hạn
1<=N<=100000

1<=K<=1000

Đầu ra
In ra đáp án sau khi chia dư với 10^9+7.

Ví dụ :
Input 01
Copy
4 2
Output 01
Copy
5

#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int main() {
    int n, k;
    cin >> n >> k;

    vector<long long> dp(n + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= min(i, k); j++) {
            dp[i] = (dp[i] + dp[i - j]) % mod;
        }
    }

    cout << dp[n] % mod << endl;

    return 0;
}


