#include <iostream>
using namespace std;
int main ()
{
    int n,s,b,a[4],i;


    while (cin>>n)
    {
        s=0;
        while (n--)
        {
            b=0;
            for (i=0;i<3;i++)
            {
                cin>>a[i];
                if (a[i]==1)
                    b++;
            }
            if (b>=2)
                s++;
        }
        cout<<s<<endl;
    }
    return 0;
}