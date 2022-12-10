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
        string ss;
        cin >> ss;

        int answer = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            int count_a = 0, count_b = 0, count_c = 0;
            if (ss[i] == 'a')
            {
                count_a++;
            }
            else if (ss[i] == 'b')
            {
                count_b++;
            }
            else
            {
                count_c++;
            }
            for (int j = i+1; j < min(i + 7, n); j++)
            {
                if (ss[j] == 'a')
                {
                    count_a++;
                }
                else if (ss[j] == 'b')
                {
                    count_b++;
                }
                else
                {
                    count_c++;
                }
                if (count_a > count_b && count_a > count_c)
                {
                    answer = min(answer, j - i + 1);
                    
                }
            }
        }
        if (answer == INT_MAX)
        {
            cout << -1 << endl;
        }

        else
        {

            cout << answer << endl;
        }
    }
    return 0;
}