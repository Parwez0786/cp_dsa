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
        cin >> n >> a >> b;

        if (a + b + 2 > n || abs(a - b) > 1)
        {
            cout << -1 << endl;
            continue;
        }

        vector<int> vv;
        for (int i = 1; i <= n; i++)
        {
            vv.push_back(i);
        }

        if (a == 0 && b == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << vv[i] << " ";
            }
            cout << endl;
            continue;
        }
        if (a == b)
        {   int ll=0;
            int kk = (a + b) / 2;
            for (int i = 0; i < kk; i++)
            {
                swap(vv[ll], vv[ll+ 1]);
                ll+=2;
            }
            swap(vv[n - 1], vv[n - 2]);
            for (int i = 0; i < n; i++)
            {
                cout << vv[i] << " ";
            }
            cout << endl;
        }

        else if (a < b)
        {
            int kk = (a + b + 1) / 2;
            int ll=0;
            for (int i = 0; i < kk; i ++)
            {
                swap(vv[ll], vv[ll + 1]);
                ll+=2;
            }

            for (int i = 0; i < n; i++)
            {
                cout << vv[i] << " ";
            }
            cout << endl;
        }

        else if (a > b)
        {   int ll=n-1;
            int kk = (a + b + 1) / 2;
            for (int i = 0; i < kk; i ++)
            {
                swap(vv[ll], vv[ll-1]);
                ll-=2;
            }
            for (int i = 0; i < n; i++)
            {
                cout << vv[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}