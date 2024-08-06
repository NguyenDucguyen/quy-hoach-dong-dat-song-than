Một con ếch có thể nhảy 1, 2, 3 bước để có thể lên đến một đỉnh cần đến.

Hãy đếm số các cách con ếch có thể nhảy đến đỉnh.

Đầu vào
Số nguyên dương N mô tả số bước con ếch cần di chuyển để nhảy tới đỉnh

Giới hạn
1<=N<=50

Đầu ra
In ra kết quả của bài toán

Ví dụ :
Input 01
Copy
5
Output 01
Copy
13

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int dp[n+1] = {0};
    dp[0] =1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=3;j++){
            if(i>=j){
                dp[i]+=dp[i-j];
            }
        }
    }
    cout<<dp[n];


}
