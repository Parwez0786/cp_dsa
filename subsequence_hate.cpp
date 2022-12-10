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
        string ss;
        cin >> ss;
        if (ss.size() == 1)
        {
            cout << 0 << endl;
            continue;
        }
        int total_one = 0, total_zero = 0, current_one = 0, current_zero = 0;
        for (int i = 0; i < ss.size(); i++)
        {
            if (ss[i] == '1')
            {
                total_one++;
            }
            else
            {
                total_zero++;
            }
        }

        int ans1 = INT_MAX, ans2 = INT_MAX;
        // make 0000011111 string
        for (int i = 0; i < ss.size(); i++)
        {
            if (ss[i] == '1')
            {
                current_one++;
            }
            else
            {
                current_zero++;
            }

            int kk1 = current_one + total_zero - current_zero;
            ans1 = min(ans1, kk1);
        }
         int currentt_one=0, currentt_zero=0;
        for (int i = 0; i < ss.size(); i++)
        {
            if (ss[i] == '1')
            {
                currentt_one++;
            }
            else
            {
                currentt_zero++;
            }

            int kk1 = currentt_zero + total_one - currentt_one;
            ans2 = min(ans2, kk1);
        }

        cout << min(ans1, ans2) << endl;

        // make 11110000 string
    }
    return 0;
}