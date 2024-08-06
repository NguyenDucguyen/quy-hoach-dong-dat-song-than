Cho hai số nguyên lớn N và M có không quá 1000 chữ số.

Người ta muốn tính xem liệu có thể lấy ra nhiều nhất bao nhiêu chữ số trong N (không cần liên tiếp) và giữ nguyên thứ tự của nó để tạo ra một số X sao cho ta cũng có thể tìm thấy X trong số M theo cách tương tự.

Đầu vào
Dòng thứ nhất ghi số N, dòng thứ 2 ghi số M

Giới hạn
1<=len(N), len(M) <= 1000

Đầu ra
In ra số chữ số nhiều nhất có thể của X

Ví dụ :
Input 01
Copy
82619136359
5572555993152891122
Output 01
Copy
5

#include <iostream>
#include <vector>
#include <string>
using namespace std;


int longestCommonSubsequence(string S, string T) {
    int m = S.size();
    int n = T.size();
    vector<int> previous(n + 1, 0);
    vector<int> current(n + 1, 0);

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (S[i - 1] == T[j - 1]) {
                current[j] = previous[j - 1] + 1;
            } else {
                current[j] = max(previous[j], current[j - 1]);
            }
        }

        previous = current;
    }

    return current[n];
}

int main() {
    string S, T;

    cin >> S;

    cin >> T;

    int lengthLCS = longestCommonSubsequence(S, T);
    cout <<  lengthLCS << endl;

    return 0;
}
