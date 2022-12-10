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
        int m = 0, a = 0, b = 0, c = 0, d = 0, sum = 0, diff = 0, maxN = 0, minN = 0, count = 0;
        bool flag = false;

        string ss;
        // cin >> ss;
        int xx;
        cin >>ss>>xx;

        int n = ss.size();
        string temp(n, '1');

        for (int i = 0; i < n; i++)
        {

            if (ss[i] == '0')
            {

                if (i - xx >= 0)
                {
                    temp[i - xx] = '0';
                }

                if (i + xx < n)
                {
                    temp[i + xx] = '0';
                }
            }
        }

        int ggg = 0;

        for (int i = 0; i < n; i++)

        {

            bool ff = false;

            ff = ff || (i - xx >= 0 && temp[i - xx] == '1');

            ff = ff || (i + xx < n && temp[i + xx] == '1');

            if (ss[i] != ff + '0')

            {

                cout << -1 << '\n';
                ggg=1;
                break;
            }
        }
        if(ggg==0){
        cout << temp << '\n';
        }
    }

    return 0;
}
