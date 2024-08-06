Cho mê cung được mô tả bởi một ma trận kí tự gồm N hàng và N cột. Mỗi ô trên ma trận chứa kí tự '.' tương ứng với đường đi và dấu * tương ứng với bẫy.

Một con chuột muốn đi từ ô (1, 1) tới ô (N, N) và chỉ được di chuyển khi một ô nào đó là đường đi và nó được di chuyển sang phải hoặc xuống dưới.

Hãy đếm số cách con chuột có thể di chuyển tới đích.

Vì kết quả quá lớn nên hãy lấy dư với 10^9 + 7

Đầu vào
Dòng đầu tiên là N

N dòng tiếp theo mỗi dòng là N kí tự

Giới hạn
1<=N<=1000

Đầu ra
Số đường đi tối đa

Ví dụ :
Input 01
Copy
4
....
.*..
...*
*...
Output 01
Copy
3

#include<bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

int countPaths(const vector<vector<char>>& maze) {
    int N = maze.size();
    vector<vector<int>> dp(N, vector<int>(N, 0));

    if (maze[0][0] == '.') dp[0][0] = 1;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (maze[i][j] == '.') {
                if (i > 0) dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
                if (j > 0) dp[i][j] = (dp[i][j] + dp[i][j-1]) % MOD;
            }
        }
    }

    return dp[N-1][N-1];
}

int main() {
    int N;
    cin >> N;
    vector<vector<char>> maze(N, vector<char>(N));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> maze[i][j];
        }
    }

    cout << countPaths(maze) << endl;

    return 0;
}

