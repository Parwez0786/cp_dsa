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
	cin.tie(0); cout.tie(0); 
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
 
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, m = 0, aa = 0, ba = 0, c = 0, d = 0, sum = 0, diff = 0, maxN = 0, minN = 0, count = 0, temp = 0;
        bool flag = false;
        cin >> n;
        vector<int> a, b;
        for (int i = 0; i < n; i++)
        {
            int xx;
            cin >> xx;
            a.push_back(xx);
        }
        for (int i = 0; i < n; i++)
        {
            int xx;
            cin >> xx;
            b.push_back(xx);
        }

        vector<pair<int, int>> vp;
        for (int i = 0; i < n; i++)
        {
            vp.push_back({a[i], b[i]});
        }

        sort(vp.begin(), vp.end());
   for(int i=1; i<n; i++){
    vp[i].second+=vp[i-1].second;
   }
  int anss=vp[n-1].second;


   for(int i=0; i<n; i++){
    anss=min(anss, max(vp[i].first,vp[n-1].second-vp[i].second));
   }
   cout<<anss<<endl;
       
    }
    return 0;
}