Hãy xem xét một hệ thống tiền tệ của ngân hàng XYZ bao gồm n đồng xu. Mỗi đồng xu có một giá trị nguyên dương.

Nhiệm vụ của bạn là tính số cách riêng biệt mà bạn có thể tạo ra số tiền x bằng cách sử dụng số xu có sẵn.

Ví dụ: nếu số xu là {2,3,5} và tổng mong muốn là 9, có 8 cách: 2 + 2 + 5; 2 + 5 + 2; 5 + 2 + 2; 3 + 3 + 3; 2 + 2 + 2 + 3; 2 + 2 + 3 + 2; 2 + 3 + 2 + 2; 3 + 2 + 2 + 2;

Đầu vào
Dòng nhập đầu tiên có hai số nguyên n và x: số xu và số tiền mong muốn.

Dòng thứ hai có n số nguyên phân biệt c1, c2,…, cn: giá trị của mỗi đồng xu.

Giới hạn
1≤n≤100

1≤x≤10^6

1≤ci≤10^6

Đầu ra
In ra kết quả lấy dư với 10^9 + 7

Ví dụ :
Input 01
Copy
3 9
2 3 5
Output 01
Copy
8

#include<bits/stdc++.h>
using namespace std;
int dp[1000005];
int mod = 1e9+7;
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n+1];
    for(int i=1;i<=n;i++)  cin>>a[i];
    dp[0] =1;
    for(int i=1; i<=x;i++){
        for(int j=1;j<=n;j++){
            if(i>=a[j])
            dp[i] += dp[i-a[j]];
            dp[i] %=mod;
        }
    }
    cout<<dp[x];

}
