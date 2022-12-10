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
        int n = 0, m = 0, c = 0, d = 0, sum = 0, diff = 0, maxN = 0, minN = 0, count = 0, temp = 0;
        bool flag = false;
        cin >> n;
        vector<int> a;
        vector<int> b;
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

        vector<pair<int, int>> vp1;
        vector<pair<int, int>> vp2;

        for (int i = 0; i < n; i++)
        {
            vp1.push_back({a[i], i});
        }

        for (int i = 0; i < n; i++)
        {
            vp2.push_back({b[i], i});
        }

        sort(vp1.begin(), vp1.end());
        sort(vp2.begin(), vp2.end());
        int mini = INT_MAX;
        int anss = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            mini = min(mini, vp1[i].second);
            anss = min(anss, mini + vp2[i].second);
        }
        cout << anss << endl;
    }

    return 0;
}