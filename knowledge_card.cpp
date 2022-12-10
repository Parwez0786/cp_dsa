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
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, m = 0, a = 0, b = 0, c = 0, d = 0, sum = 0, diff = 0, maxN = 0, minN = 0, count = 0, temp = 0;
        bool flag = false;
        cin >> n;

        vector<int> vv;
        for (int i = 0; i < n; i++)
        {
            int xx;
            cin >> xx;
            vv.push_back(xx);
        }
        vector<pair<int, int>> vp;
        for (int i = 0; i < n; i++)
        {
            vp.push_back({vv[i], i});
        }
        sort(vp.begin(), vp.end());
       unordered_set<int>set;
        sum = vp[0].first;
        int index = -1;
           
        for (int i = 1; i < n; i++)
        {
            if (sum < vp[i].first)
            {      
                index = i;
                sum += vp[i].first;
            }
            else
            {    set.insert(vp[i].second);

                sum += vp[i].first;
            }
        }
   if(index==-1){
    index=0;
   }
          vector<int>anss;

        for (int i = index; i < n; i++)
        {
            anss.push_back(vp[i].second+1);

        }
        sort(anss.begin(), anss.end());
        cout<<anss.size()<<endl;
        for(int i=0; i<anss.size(); i++){
            cout<<anss[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}