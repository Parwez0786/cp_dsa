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
        int n = 0, m = 0, x = 0, b = 0, c = 0, d = 0, sum = 0, diff = 0, maxN = 0, minN = 0, count = 0, temp = 0;
        int flag = 0;
        cin >> n >> m >> x;
        vector<pi> vp;
        for (int i = 0; i < n; i++)
        {
            int xx;
            cin >> xx;
            vp.push_back({xx, i + 1});
        }

        if (m == 1)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
            continue;
        }
        sort(vp.begin(), vp.end());
        vector<pi> ans;
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        for (int i = 0; i < m; i++)
        {
            pq.push({vp[i].first, i + 1});
            ans.push_back({vp[i].second, i + 1});
        }

        for (int i = m; i < n; i++)
        {
            int initial = pq.top().first + vp[i].first;
            int index = pq.top().second;
            // cout<<index<<" "<<initial<<endl;
            if (pq.size() > 1)
            {
                pq.pop();
                int secondlargest = pq.top().first;
                int diff = abs(initial - secondlargest);

                if (diff <= x)
                {
                    pq.push({initial, index});

                    ans.push_back({vp[i].second, index});
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 1)
        {
            cout << "NO" << endl;
        }

        else
        {
            cout << "YES" << endl;
            sort(ans.begin(), ans.end());

            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i].second << " ";
            }

            cout << endl;
        }
    }
    return 0;
}