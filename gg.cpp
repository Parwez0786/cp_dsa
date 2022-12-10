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
        string ss; cin>>ss;
        vector<char>vv;
        int countt=0;
        if(ss=="ab"){
            cout<<"accepted"<<endl;
            continue;
        }
        for(int i=1; i<ss.size(); i++){
            if(ss[i]=='a'){
                vv.push_back(ss[i]);

            }
            else{
                if(ss[i]=='b'){
                    if(ss[i-1]=='b'){
                      flag=1;
                    }
                    vv.pop_back();
                     countt++;
                }
            }
        }
        if(ss[0]=='a'&&(vv.size()==(countt/2)-1)&&(countt%2!=0)&&(ss[1]!='b')&&(ss[ss.size()-1]=='b')&&flag!=1){
             cout<<"accepted"<<endl;

        }
        else{
            cout<<"NOT accept"<<endl;

        }
    }
    return 0;
}