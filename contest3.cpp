par
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
ios_base::sync_with_stdio(false);
 cin.tie(NULL);  
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n=0,m=0,a=0,b=0,c=0,d=0,sum=0,diff=0,maxN=0,minN=0,count=0,temp=0;
        bool flag = false;
        cin>>n;
        
       string ss; cin>>ss;
       int count_1=0, count_0=0;

       for(int i=0; i<ss.size(); i++){
        if(ss[i]=='1'){
          count_1++;
        }
        else{
          count_0++;

        }


       }


       int counter=1;
       int ans=INT_MIN;
      for(int i=1; i<n; i++){
        if(ss[i]==ss[i-1]){
          counter++;
        }

        else{
           ans=max(ans,counter );
           counter=1;
        }
      }

      int ansss=max(ans*ans, count_0*count_1)<<endl;




    }
    return 0;
}