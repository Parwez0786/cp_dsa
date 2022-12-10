#include <bits/stdc++.h>
#define int long long
#define bte(v) (v).begin(),(v).end()
#define mod 1000000007
#define odd(n) (n&1)
#define pb push_back
#define cv(v) for (int i = 0; i < v.size(); i++) cout << v[i]<<' '
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
        int n=0,m=0,a=0,b=0,c=0,d=0,diff=0,maxN=0,minN=0,count=0,temp=0;
        bool flag = false;
        cin>>n;

        vector<int>vv;
        for(int i=0; i<n; i++){
            int xx; cin>>xx;
            vv.push_back(xx);
        }

        int sum=0;
        for(int i=0;i<n; i++){
            sum+=vv[i];
        }

        if(sum%n!=0){
            cout<<-1<<endl;

        }

        else{
            int kk=sum/n;

            int counter=0;
            for(int i=0; i<n; i++){
               if(vv[i]>kk)
                counter++;
               
            }
            cout<<counter<<endl;

        }
    }
    return 0;
}