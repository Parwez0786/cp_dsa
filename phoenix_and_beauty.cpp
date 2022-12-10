#include <bits/stdc++.h>
#define int long long
#define bte(v) (v).begin(),(v).end()
#define mod 1000000007
#define odd(n) (n&1)
#define pb push_back
#define cv(v) for (int i = 0; i < v.size(); i++) cout << v[i]<<' '
using namespace std;
signed main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n=0,k=0,a=0,b=0,c=0,d=0,sum=0,diff=0,maxN=0,minN=0,count=0,temp=0;
        bool flag = false;
        cin>>n>>k;

        vector<int>vv;
        unordered_set<int>set;
        for(int i=0; i<n; i++){
            int xx; cin>>xx;
            vv.push_back(xx);
            set.insert(vv[i]);
        }

        if(set.size()>k){
            cout<<-1<<endl;
            continue;
        }

        cout<<n*k<<endl;

        for(int i=0; i<n; i++){
            for(auto it:set){
                cout<<it<<" ";
            }

            for(int j=0; j<k-set.size(); j++){
                cout<<1<<" ";
            }

        }

        cout<<endl;





    }
    return 0;
}