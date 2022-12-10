#include <bits/stdc++.h>
#define int long long
#define bte(v) (v).begin(), (v).end()
#define mod 1000000007
#define odd(n) (n & 1)
#define pb push_back
#define cv(v)                          \
    for (int i = 0; i < v.size(); i++) \
    cout << v[i] << ' '
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, x = 0, a = 0, b = 0, c = 0, d = 0, sum = 0, diff = 0, maxN = 0, minN = 0, count = 0, temp = 0;
        bool flag = false;
        cin >> n >> x;
        vector<int> vv;
        multiset<int> set;
        for (int i = 0; i < n; i++)
        {
            int xx;
            cin >> xx;
            vv.push_back(xx);
            set.insert(vv[i]);
        }
        sort(vv.begin(), vv.end());
        for (int i = 0; i < n; i++)
        {

            auto it=set.find(vv[i]);
            if(it!=set.end()){
                auto it1=set.find(x*vv[i]);
                if(it1!=set.end()){
                     set.erase(it);
                     set.erase(it1);
                }

                else{
                    count++;
                    set.erase(it);

                }
            }

        }
            cout<<count<<endl;
    }
    return 0;
}