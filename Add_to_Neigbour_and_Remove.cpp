#include <bits/stdc++.h>
#define int long long
#define bte(v) (v).begin(),(v).end()
#define mod 1000000007
#define odd(n) (n&1)
#define pb push_back
#define cv(v) for (int i = 0; i < v.size(); i++) cout << v[i]<<' '
using namespace std;
signed main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n=0,m=0,a=0,b=0,c=0,d=0,sum=0,diff=0,maxN=0,minN=0,count=0,temp=0;
        bool flag = false;
        cin>>n;
        vector<int>vv;
        for(int i=0; i<n; i++){
            int xx; cin>>xx;
            vv.push_back(xx);
        }

        sort(vv.begin(), vv.end());
        int ans=INT_MIN;
        for(int i=n-1; i>=2; i--){
            ans=max(ans,abs(vv[i]-vv[0])+abs(vv[i]-vv[i-1]));


        }

        int ans2=INT_MIN;
        for(int i=0; i<n-2; i++){
            ans2=max(ans2,abs(vv[n-1]-vv[i]) +abs(vv[i]-vv[i+1]));
        }
        cout<<max(ans, ans2)<<endl;

    }
    return 0;
}