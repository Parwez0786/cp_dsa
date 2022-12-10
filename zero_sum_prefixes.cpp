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
        int n = 0, m = 0, a = 0, b = 0, c = 0, d = 0, sum = 0, diff = 0, maxN = 0, minN = 0, temp = 0;
        bool flag = false;
        cin >> n;
        vector<int> vv;
        for (int i = 0; i < n; i++)
        {
            int xx;
            cin >> xx;
            vv.push_back(xx);
        }

        int count = 0;
        // unordered_map<int, int> mp;
        int flag1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (vv[i] == 0)
            {
                flag1 = 1;
                break;
            }
        }

        int prefix_sum[n];
        prefix_sum[0] = vv[0];
        for (int i = 1; i < n; i++)
        {
            prefix_sum[i] = vv[i] + prefix_sum[i - 1];
        }
        if (flag1 == 1)
        {
            int flag2 = 0;
            int counter = 0;
            for (int i = 0; i < n; i++)
            {
                if (flag2 == 0 && vv[i] != 0)
                {
                    if (prefix_sum[i] == 0)
                    {
                        counter++;
                    }
                }

                if (vv[i] == 0)
                {
                    flag2 = 1;
                    break;
                }
            }

            vector<int> vv1;
            for (int i = 0; i < n; i++)
            {
                if (vv[i] == 0)
                {
                    vv1.push_back(i);
                }
            }

            int answers = 0;
            for (int i = 0; i < vv1.size(); i++)
            {
                int first_index = vv1[i];
                int last_index;
                if (i == vv1.size() - 1)
                {
                    last_index = n - 1;
                }
                else
                {
                    last_index = vv1[i + 1] - 1;
                }

                int sum = 0;
                int mx = 0;
                map<int, int> mm;
                for (int j = first_index; j <= last_index; j++)
                {
                    sum += vv[j];
                    mm[sum]++;
                    mx = max(mx, mm[sum]);
                }
                answers += mx;
            }

            cout << answers + counter << endl;
        }

        else
        {
            int counter = 0;
            for (int i = 0; i < n; i++)
            {
                if (prefix_sum[i] == 0)
                {
                    counter++;
                }
            }
            cout << counter << endl;
        }
    }
    return 0;
}