#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k=0;
    int py=1;
    int sum=0;
    while(k<=n)
    {
        sum+=py;
        k+=sum;
        py++;
    }
    cout<<py-2<<endl;
    return 0;
}
