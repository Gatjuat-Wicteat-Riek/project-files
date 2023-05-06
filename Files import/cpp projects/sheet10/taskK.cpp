#include<bits/stdc++.h>
typedef long long int ll;
#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>
#define COLOMBIA cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define RIEK ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){

    COLOMBIA
    RIEK

    int i, j,k;
    int n,m,s;
    int p,q;
    char cha;

    cin >> n >> s;

    map<int,int> buying;
    map<int,int> selling;

    for(i=0; i<n; i++){
    
        cin >> cha >> p >> q;

        if(cha=='B')
            buying[p] += q;
        else
            selling[p] += q;
    }

    vector <pp> vec;
    vector <pp> vs;

    map<int,int>::iterator it1 = buying.begin();
    while(it1!=buying.end()){
    
        vec.push_back({it1->first,it1->second});
        it1++;
    }

    it1=selling.begin();
    while(it1!=selling.end()){
    
        vs.push_back({it1->first,it1->second});
        it1++;
    }

    sort(vs.begin(),vs.end());
    sort(vec.begin(),vec.end(),greater<pp>());

    
    while(vs.size()>s)
        vs.pop_back();

    while(vec.size()>s)
        vec.pop_back();

    sort(vs.begin(),vs.end(),greater<pp>());

    k=s;i=0;
    while(k && i<vs.size()){
    
        cout<<"S "<<vs[i].first<<" "<<vs[i].second<<endl;
        i++;k--;
    }

    i=0;
    while(s && i<vec.size()){
    
        cout<<"B "<<vec[i].first<<" "<<vec[i].second<<endl;
        s--;i++;
    }

    return 0;
}