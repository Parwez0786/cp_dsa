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
        int n=0,m=0,a=0,d=0,sum=0,diff=0,maxN=0,minN=0,count=0,temp=0;
        bool flag = false;
        cin>>n;
        vector<int>vv;
        map<int, int>map;
        for(int i=0; i<n; i++){
            int xx; cin>>xx;
            vv.push_back(xx);
             map[vv[i]]++;
        }

        if(n==1){
          cout<<1<<endl;
          continue;
        }
        priority_queue<pair<int, int>>pq;

        for(auto it:map){
            pq.push({it.second, it.first});

        }

        // while(pq.empty()!=true){
        //     cout<<pq.top().first<<" "<<pq.top().second<<" "<<endl;
        //     pq.pop();
        // }


        while(pq.size()>1){
            pair<int, int>p1=pq.top();
            pq.pop();
            pair<int, int>p2=pq.top();
            pq.pop();
            int first_count  =p1.first;
            int second_count   =p2.first;
           
            first_count-=1;
            second_count-=1;
            if(first_count==0&&second_count==0){
                continue;
            }
             else if(first_count!=0&&second_count!=0){
                p1.first=first_count;
                p2.first=second_count;
                pq.push(p1);
                pq.push(p2);

             }
            else{
                if(first_count==0){
                    p2.first=second_count;
                    pq.push(p2);

                }
                else{
                    p1.first = first_count;
                    pq.push(p1);
                }
            }
        }


        if(pq.size()==0){
            cout<<0<<endl;
        }
        else{
            cout<<pq.top().first<<endl;
        }

    }
    return 0;
}