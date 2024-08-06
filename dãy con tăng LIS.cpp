Cho mảng số nguyên A[] gồm N phần tử, hãy tìm dãy con tăng dài nhất của mảng A.

Đầu vào
Dòng đầu tiên là N

Dòng thứ 2 gồm N phần tử của mảng A

Giới hạn
1<=N<=1000

1<=A[i]<=1000

Đầu ra
In ra độ dài của dãy con tăng dài nhất

Ví dụ :
Input 01
Copy
10
1 1 3 4 2 4 5 5 1 2
Output 01
Copy
4

#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n;
     int a[n];
     int f[n];
     for(auto &x : a){
        cin>>x;
     }
     for(int i=0;i<n;i++){
         f[i] =1;
         for(int j=0;j<i;j++){
            if(a[i]>a[j]) f[i] = max(f[i],f[j]+1);

         }
     }
     cout<<*max_element(f,f+n);
}
