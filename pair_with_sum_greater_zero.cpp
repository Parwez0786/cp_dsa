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
    int n;
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

    vector<int> c;

    for (int i = 0; i < n; i++)
    {
        int kk = a[i] - b[i];
        c.push_back(kk);
    }
    sort(c.begin(), c.end());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {   if(c[i]<=0){
        continue;
    }// this will give indices upto which sum >0 
        int j = lower_bound(c.begin(), c.end(), -c[i] + 1) - c.begin();

        //will take the difference so in the range of i  to j i-j pair will be their with sum >0
        ans += i - j;
    }
    cout << ans << endl;

    return 0;
}