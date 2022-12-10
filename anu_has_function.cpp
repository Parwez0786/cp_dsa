#include <bits/stdc++.h>
#define int long long
#define bte(v) (v).begin(),(v).end()
#define mod 1000000007
#define odd(n) (n&1)
#define pb push_back
#define cv(v) for (int i = 0; i < v.size(); i++) cout << v[i]<<' '
using namespace std;
typedef pair<int, int> pi;

int bit_set(int n){
    int count=0;
    while(n){
        count++;
        n=n>>1;

    }
    return count;
}
signed main()
{
ios_base::sync_with_stdio(false);
 cin.tie(NULL);  
    int n; cin>>n;
    vector<int>vv;
    for(int i=0; i<n; i++){
        int xx; cin>>xx;
        vv.push_back(xx);

    }

    int index=0;
  int maxi=INT_MIN;
     for(int i=0; i<n; i++){
        if(bit_set(vv[i])>maxi){
            maxi=bit_set(vv[i]);
            index=i;

        }
     }

    cout<<vv[index]<<" ";
    int counter=0;
    for(int i=0; i<n; i++){
        if(vv[i]==vv[index]&&counter==0){
            counter++;
            continue;

        }
        else if(vv[i]==vv[index]&&counter!=0){
            cout<<vv[i]<<" ";
        }
        else{
            cout<<vv[i]<<" ";
        }
    }
    cout<<endl;


    

     
   
    return 0;
}