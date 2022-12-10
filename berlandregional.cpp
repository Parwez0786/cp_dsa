/*#include <bits/stdc++.h>
#define int long long
#define bte(v) (v).begin(), (v).end()
#define mod 1000000007
#define odd(n) (n & 1)
#define pb push_back
#define cv(v)                          \
    for (int i = 0; i < v.size(); i++) \
    cout << v[i] << ' '
using namespace std;

bool comparator(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }

    else
    {
        return a.first < b.first;
    }
}
signed main()
{
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

        vector<int> skill;
        for (int i = 0; i < n; i++)
        {
            int xx;
            cin >> xx;
            skill.push_back(xx);
        }

        map<int, vector<int>> map;
        for (int i = 0; i < n; i++)
        {
            map[vv[i]].push_back(skill[i]);
        }
        vector<vector<int>> vp;

        for (auto it : map)
        {
            vector<int> temp = map[it.first];
            sort(temp.begin(), temp.end());
            vp.push_back(temp);
        }
        vector<vector<int>>vp1;
        for (auto it : vp)
        {         vector<int>tt;

            for (int i = 0; i < it.size(); i++)
            {
                if(i==0){
                    tt.push_back(it[i]);
                }
                else{
                    tt.push_back(tt.back()+it[i]);
                }
            }
            vp1.push_back(tt);

        }

        // for(auto it:vp1){
        //     for(int i=0; i<it.size(); i++){
        //         cout<<it[i]<<" ";
        //     }
        //     cout<<endl;
        // }

        vector<int> ans(n, 0);
        for (auto it : vp1)
        {
            for (int j = 1; j <= it.size(); j++)
            {
                int left = it.size() % j;

                if (left == 0)
                {
                    ans[j - 1] += it[it.size() - 1];
                }
                else
                {
                    ans[j - 1] += it[it.size() - 1] - it[left - 1];
                }
            }
        }
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}*/
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

bool comparator(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }

    else
    {
        return a.first < b.first;
    }
}
signed main()
{
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

        vector<int> skill;
        for (int i = 0; i < n; i++)
        {
            int xx;
            cin >> xx;
            skill.push_back(xx);
        }

        vector<pair<int, int>> vp;
        for (int i = 0; i < n; i++)
        {
            vp.push_back({vv[i], skill[i]});
        }

        sort(vp.begin(), vp.end(), comparator);

        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            mp[vp[i].first].push_back(vp[i].second);
        }
        // for (auto it : mp)
        // {     vector<int>bb=it.second;
        //     sort(bb.begin(), bb.end());

        //     mp[it.first]=bb;

        // }
        //   for (auto it : mp)
        //  {
        //      for(int i=0; i<mp[it.first].size(); i++){
        //          cout<<mp[it.first][i]<<" ";

        //       }
        //  cout<<endl;
        //  }

        for (auto it : mp)
        {
            for (int i = 1; i < mp[it.first].size(); i++)
            {
                mp[it.first][i] += mp[it.first][i - 1];
            }
        }
        // for (auto it : mp)
        // {
        //     for (int i = 0; i < mp[it.first].size(); i++)
        //     {
        //         cout << mp[it.first][i] << " ";
        //     }
        //     cout << endl;
        // }
        vector<int> answer(n, 0);
        for (auto it : mp)
        {
            for(int j=1; j<=mp[it.first].size(); j++){
                int left=mp[it.first].size()%j;
                if(left==0){
                    answer[j-1]+=mp[it.first][it.second.size()-1];

                }
                else{
                    answer[j-1]+=mp[it.first][it.second.size()-1]-mp[it.first][left-1];
                }
            }
        }

        for (int i = 0; i < answer.size(); i++)
        {
            cout << answer[i] << " ";
        }
        cout << endl;
    }
    return 0;
}