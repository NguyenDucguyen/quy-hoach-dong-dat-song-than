Cho 2 xâu kí tự S và T, hãy tìm độ dài xâu con chung dài nhất của S và T.

Xâu con chung của S và T không cần phải là xâu con liên tiếp

Đầu vào
Dòng đầu tiên là xâu S

Dòng thứ 2 là xâu T

Giới hạn
1<=len(S), len(T)<=1000

Đầu ra
In ra đáp án của bài toán

Ví dụ :
Input 01
Copy
ZHFTDFHF
TFISHROV
Output 01
Copy
3

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Hàm tính độ dài xâu con chung dài nhất bằng phương pháp quy hoạch động
int longestCommonSubsequence(string S, string T) {
    int m = S.size();
    int n = T.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    // Xây dựng bảng dp
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (S[i - 1] == T[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }


    return dp[m][n];
}

int main() {
    string S, T;

    cin >> S;

    cin >> T;

    int lengthLCS = longestCommonSubsequence(S, T);
    cout << lengthLCS << endl;

    return 0;
}
