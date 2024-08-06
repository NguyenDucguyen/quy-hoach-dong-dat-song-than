Ngân hàng XYZ hiện có N tờ tiền có mệnh giá khác nhau được lưu vào mảng C[], bạn hãy tìm cách đổi số tiền là S sao cho số tờ tiền cần dùng là ít nhất. Bạn được sử dụng một mệnh giá không giới hạn số lần.

Đầu vào
Dòng đầu tiên chứa 2 số N và S

Dòng thứ 2 chưa N số là mệnh giá các tờ tiền

Giới hạn
1<=N<=100

1<=S<=10^6

1<=C[i]<=10^6

Đầu ra
In ra số tờ tiền nhỏ nhất cần đổi. Nếu không thể đổi được số tiền đúng bằng S thì in ra -1.

Ví dụ :
Input 01
Copy
3 10
4 5 8
Output 01
Copy
2

#include<bits/stdc++.h>
using namespace std;
int f[1000005];
int main() {

     int n,x;
     cin>>n>>x;
     int a[n+1];
     for(int i=1; i<=n;i++) cin>>a[i];
     for(int i=1;i<=x;i++) f[i] =1e9;
     for(int i=1;i<=n;i++) {
         for(int j=1;j<=x;j++){
             if(j>= a[i])
                f[j] = min(f[j], f[j-a[i]]+1);

         }
     }
     if(f[x] ==1e9) cout<<"-1";
     else cout<<f[x];
}
