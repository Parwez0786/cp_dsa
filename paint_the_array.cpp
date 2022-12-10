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
typedef pair<int, int> pi;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
        int gcd1 = vv[0];
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                gcd1 = __gcd(gcd1, vv[i]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (i % 2 != 0)
            {
                if (vv[i] % gcd1 == 0)
                {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 0)
        {
            cout << gcd1 << endl;
        }

        else
        {
            int flag2 = 0;
            int gcd2 = vv[1];
            for (int i = 0; i < n; i++)
            {
                if (i % 2 != 0)
                {
                    gcd2 = __gcd(gcd2, vv[i]);
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    if (vv[i] % gcd2== 0)
                    {
                        flag2 = 1;
                        break;
                    }
                }
            }

            if (flag2 == 1)
            {
                cout << 0 << endl;
            }

            else
            {
                cout << gcd2 << endl;
            }
        }
    }
    return 0;
}