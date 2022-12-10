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
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, m = 0, a = 0, b = 0, c = 0, d = 0, sum = 0, diff = 0, maxN = 0, minN = 0, count = 0, temp = 0;
        bool flag = false;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        int count1 = 0, count2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == s2[i])
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }

        if (count1 != 0 && count2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        int flag22 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] != s2[i])
            {
                flag22 = 1;
                if (s1[i] == '0')
                {
                    s1[i] = '1';
                }
                else
                {
                    s1[i] = '0';
                }
            }
        }
// cout<<s1<<endl;
        vector<pair<int, int>> vp;
        if (s1[0]!=s2[0])
        {
            vp.push_back({1, n});
            s1=s2;
        }

        for (int i = 0; i < n; i++)
        {
            if (s1[i] == '1' && s2[i] == '1')
            {
                if (i == 0)
                {
                    vp.push_back({1, n});
                    vp.push_back({2, n});
                }

                else
                {
                    vp.push_back({1, i + 1});
                    vp.push_back({1, i});
                }
            }
        }


          cout<<"YES"<<endl;
          cout<<vp.size()<<endl;
        for(int i=0; i<vp.size(); i++){
            cout<<vp[i].first<<" "<<vp[i].second<<endl;
        }
    }
    return 0;
}