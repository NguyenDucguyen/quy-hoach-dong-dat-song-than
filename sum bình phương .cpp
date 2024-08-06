Mọi số nguyên dương N đều có thể phân tích thành tổng các bình phương của các số nhỏ hơn N.

Ví dụ số 100 = 10^2 hoặc 100 = 5^2 + 5^2 + 5^2 + 5^2. Cho số nguyên dương N.

Nhiệm vụ của bạn là tìm số lượng ít nhất các số nhỏ hơn N mà có tổng bình phương bằng N.

Đầu vào
Một số tự nhiên N được viết trên 1 dòng.

Giới hạn
1≤N≤10000

Đầu ra
Đưa ra kết quả của bài toán

Ví dụ :
Input 01
Copy
100
Output 01
Copy
1


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dp[n]={0};
    for(int i=1;i<=n;i++){
        dp[i] =1e9;
        for(int j=1;j*j<=i;j++){

            dp[i] =min(dp[i],dp[i-j*j]+1);
        }
    }
    cout<<dp[n];
}
