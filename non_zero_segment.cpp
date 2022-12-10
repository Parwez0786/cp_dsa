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
   int n;
   cin>>n;
   vector<int>vv;
   for(int i=0; i<n; i++){
    int xx; cin>>xx;
    vv.push_back(xx);
   }

   int count=0;
   unordered_set<int>set;

   int prefix_sum=0;
     set.insert(prefix_sum);
 for(int i=0;i<n; i++){
    prefix_sum+=vv[i];
    if(set.find(prefix_sum)!=set.end()){
        prefix_sum=0;
        count++;
        set.clear();        //clear the set    -1 1 -1 1 -1 1 1 -1 -1


        
        set.insert(prefix_sum);

        prefix_sum+=vv[i];
    }
    set.insert(prefix_sum);
 }
  cout<<count<<endl;
    return 0;
}