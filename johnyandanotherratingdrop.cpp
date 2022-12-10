#include <bits/stdc++.h>
#define int long long
#define bte(v) (v).begin(),(v).end()
#define mod 1000000007
#define odd(n) (n&1)
#define pb push_back
#define cv(v) for (int i = 0; i < v.size(); i++) cout << v[i]<<' '
using namespace std;
signed main()
{// wherever the bit is set we will add it in sum the 2^(i+1)-1;
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n=0,m=0,a=0,b=0,c=0,d=0,sum=0,diff=0,maxN=0,minN=0,count=0,temp=0;
        bool flag = false;
        cin>>n;

        for(int i=0; i<60; i++){
            if(n&(1ll<<i)){
                sum+=(1ll<<(i+1))-1;

            }
        }
        cout<<sum<<endl;
    }
    return 0;
}