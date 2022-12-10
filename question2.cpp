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
        string ss; cin >>ss;
        vector<char>vv;
        if(ss=="a"){
            cout<<"accepted"<<endl;
            continue;
        }
        if(ss[0]=='a'){
            vv.push_back(ss[0]);

        }
        if(ss[0]=='b'){
            count++;
        }
        for(int i=1;i<ss.size(); i++){
            if(ss[i]=='a'){
                vv.push_back(ss[i]);
                 if(ss[i-1]=='a'){
                    flag=1;
                    break;
                 }
            }
            if(ss[i]=='b'){
            
                if(ss[i-1]=='a'){
                     vv.pop_back();
                     count++;
                }
                else{
                    count++;
                }
            }



        }
        if(count%2==0&&vv.size()==0&&ss[ss.size()-1]!='a'){
            cout<<"accept"<<endl;
        }
        else{
            cout<<"NOT"<<endl;
        }
    }
    return 0;
}