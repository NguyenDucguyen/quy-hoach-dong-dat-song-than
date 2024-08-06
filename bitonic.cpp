Một dãy số được gọi là Bitonic nếu nó được chia thành hai dãy đầu tăng dần và dãy tiếp theo giảm dần.

Nhiệm vụ của bạn là tìm tổng lớn nhất dãy con Bitonic của dãy số A[].

Ví dụ với dãy A[] = {1, 15, 51, 45, 33, 100, 12, 18, 9} ta có kết quả là 194 tương ứng với dãy Bi-tonic {1, 15, 51, 100, 18, 9}.

Đầu vào
Dòng đầu tiên đưa vào N là số phần tử của dãy A[]

Dòng tiếp theo đưa vào N số A[i] các số được viết cách nhau một vài khoảng trống

Giới hạn
1<=N<=100

1<=A[i]<=100

Đầu ra
In ra kết quả của bài toán

Ví dụ :
Input 01
Copy
8
7 8 8 19 3 6 2 15
Output 01
Copy
49

#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n;
     int arr[n] ;
     for(auto & x : arr){
          cin>>x;
     }
     vector<int> inc(n, 0);
     vector<int> dec(n, 0);
     for(int i=0;i<n;i++){
        inc[i] = arr[i];
        dec[i] = arr[i];
    }

    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (arr[i] > arr[j] && inc[i] < inc[j] + arr[i]) {
                inc[i] = inc[j] + arr[i];
            }
        }
    }

    for (int i = n - 2; i >= 0; --i) {
        for (int j = n - 1; j > i; --j) {
            if (arr[i] > arr[j] && dec[i] < dec[j] + arr[i]) {
                dec[i] = dec[j] + arr[i];
            }
        }
    }


    int maxSum = inc[0] + dec[0] - arr[0];
    for (int i = 1; i < n; ++i) {
        maxSum = max(maxSum, inc[i] + dec[i] - arr[i]);
    }
    cout<<maxSum;
}


