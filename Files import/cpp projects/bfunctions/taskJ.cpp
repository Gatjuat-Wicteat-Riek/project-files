#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define LL long long
  
  int tb[10]={1};
  int a[10],b[10],n;
  int cal(int a[],int n){
      int results=0;
      for(int i=1;i<=n;++i){
        int c=0;
        for(int j=i+1;j<=n;++j)
        c+=(a[j]<a[i]);
        results += c*tb[n-i];
    }
    return results;
}
int main(){
     for(int i=1;i<=9;++i)tb[i]=i*tb[i-1];
     cin >> n;
     for(int i=1;i<=n;++i)
     cin >> a[i];

     for(int i=1;i<=n;++i)
     cin >> b[i];

     cout << abs(cal(b,n)-cal(a,n)) << endl;
     return 0;
}
