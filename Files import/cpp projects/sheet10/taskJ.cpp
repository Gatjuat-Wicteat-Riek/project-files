#include <bits/stdc++.h>
#include <set>
#include <map>
using namespace std;

int main(){
    const long N = 1e9;
    set<long> s;
    set<pair<long, long> > t;
    map<long, long> r;

    long q; 
    cin >> q;
    
    long counter(0);
    while(q--){
        long w; 
        cin >> w;
        if(w == 1){
            ++counter;
            long m; 
            cin >> m;
            s.insert(counter);
            t.insert(std::make_pair(m, N - counter));
            r[counter] = m;
        }
        else if(w == 2){
            long num = *(s.begin());
            cout << num << endl;
            s.erase(num);
            t.erase(make_pair(r[num], N - num));
            r.erase(num);
        }
        else if(w == 3){
            pair<long, long> cust = *t.rbegin();
            long num = N - cust.second;
            long spend = cust.first;
            cout << num << endl;
            s.erase(num);
            t.erase(cust);
            r.erase(num);
        }
    }
    puts("");
}