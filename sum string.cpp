Cho một số tự nhiên N được biểu diễn như một xâu kí tự, bạn hãy tính tổng của tất cả các số tạo bởi các xâu con liên tiếp của N, ví dụ N = 235 thì ta có tổng = 2 + 3 + 5 + 23 + 35 + 235.

Đầu vào
Dòng duy nhất chứa số nguyên dương N

Giới hạn
1<=N<=10^12

Đầu ra
In ra kết quả của bài toán

Ví dụ :
Input 01
Copy
1807
Output 01
Copy
2915

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    string s;
    cin>>s;
    int n =s.size();
    ll dp[n] ={0};
    dp[0] = s[0] -'0';
    ll sum =dp[0];
    for(int i=1;i<n;i++){
        int digit = s[i] -'0';
        dp[i]  = (dp[i-1] *10+digit*(i+1));
        sum+=dp[i];
    }
    cout<<sum;

}
