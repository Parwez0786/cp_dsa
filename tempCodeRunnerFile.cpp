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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string ss;
    cin >> ss;
    int count1 = 0, count2 = 0;
    int count3 = 0, count4 = 0;

    for (int i = 0; i < ss.size() - 1;)
    {
        if (ss[i] == 'A' && ss[i + 1] == 'B' && count1 == 0)
        {
            count1++;
            i += 2;
        }

        if (count1 != 0 && count2 == 0)
        {
            if (ss[i] == 'B' && ss[i + 1] == 'A')
            {
                count2++;
                i += 2;
            }
            else{
                i++;
            }
        }

        else
        {
            i++;
        }
    }

for (int i = 0; i < ss.size() - 1;)
{
    if (ss[i] == 'B' && ss[i + 1] == 'A' && count2 == 0)
    {
        count2++;
        i += 2;
    }

    if (count2 != 0 && count1 == 0)
    {
        if (ss[i] == 'A' && ss[i + 1] == 'B')
        {
            count1++;
            i += 2;
        }
        else{
            i++;
        }
    }

    else
    {
        i++;
    }
}

if (count1 != 0 && count2 != 0)
{
    cout << "YES" << endl;
}
else
{
    cout << "NO" << endl;
}

return 0;
}