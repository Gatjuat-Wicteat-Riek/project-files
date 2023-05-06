#include<iostream>
using namespace std;
int t=0;
int main()
{
        int n,s,arr[5]={0,0,0,0,0};
        
        cin>>n;

        for(int i=0;i<n;i++)
        {
            cin>>s;
            arr[s]++;
      }
 
      t+=arr[4]+arr[3];
      if(arr[1]>arr[3])
      {
            if(arr[2]%2!=0)
            {
                int a=arr[1],b=arr[3];
                a-=b;
                int c=(a+arr[2]*2+3)/4;
                t+=c;
            }
            else
            {
                int a=arr[1],b=arr[3];
                a-=b;
                t+=arr[2]/2+(a+3)/4;
            }
      }
      else
      {
            t+=(arr[2]+1)/2;
      }
      cout<<t;
      return 0;
}
