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
        int n = 0, m = 0, a = 0, b = 0, c = 0, d = 0,  diff = 0, maxN = 0, minN = 0, count = 0, temp = 0;
        bool flag = false;
        cin >> n;
        int odd_sum = 0, even_sum = 0;
        vector<int> vv;
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            int xx;
            cin >> xx;
            vv.push_back(xx);
            sum+=vv[i];
        }


        int sum1=0, sum2=0;
        for(int i=0; i<n; i++){
            if(i%2==0){
                sum1+=1;

            }
            else{
                sum1+=vv[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 1)
            {
                sum2 += 1;
            }
            else
            {
                sum2 += vv[i];
            }
        }

        if (2 * abs(sum - sum1) <= sum){
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    cout<<1<<" ";
                }
                else
                {
                    cout<<vv[i]<<" ";
                }

            }
            cout<<endl;
        }

        else{
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 1)
                {
                    cout << 1 << " ";
                }
                else
                {
                    cout << vv[i] << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}