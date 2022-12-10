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
        int n = 0, m = 0, k = 0, b = 0, c = 0, d = 0, sum = 0, diff = 0, maxN = 0, minN = 0, count = 0, temp = 0;
        int flag = 0;
        cin >> k >> n >> m;
        vector<int> aa;
        vector<int> bb;

        for (int i = 0; i < n; i++)
        {
            int xx;
            cin >> xx;

            aa.push_back(xx);
        }

        for (int i = 0; i < m; i++)
        {
            int xx;
            cin >> xx;

            bb.push_back(xx);
        }
        int pointer_a = 0;
        int pointer_b = 0;
        vector<int> answer;
        int anss = k;
        int ii = 0;
        while (ii < n + m)
        {
            if (aa[pointer_a] != 0&&pointer_a<n&&aa[pointer_a]<=anss)
            {
                if (aa[pointer_a] <= anss)
                {
                    answer.push_back(aa[pointer_a]);
                    pointer_a++;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }

            else if (aa[pointer_a] == 0 && pointer_a < n && aa[pointer_a] <= anss)
            {
                answer.push_back(aa[pointer_a++]);
                anss++;
            }

            else if (bb[pointer_b] != 0 && pointer_b < m && bb[pointer_b] <= anss)
            {
                if (bb[pointer_b] <= anss)
                {
                    answer.push_back(bb[pointer_b]);
                    pointer_b++;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
            else if (bb[pointer_b] == 0 && pointer_b < m && bb[pointer_b] <= anss)
            {
                answer.push_back(bb[pointer_b++]);
                anss++;
            }
            else{
                flag=1;
            }

            ii++;
        }

        if (flag == 1)
        {
            cout << -1 << endl;
        }

        else
        {
            for (int i = 0; i < answer.size(); i++)
            {
                cout << answer[i] << " ";
            }

            cout << endl;
        }
    }
}