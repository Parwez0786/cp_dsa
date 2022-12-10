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
    int n; cin>>n;
    if(n%2==0){
        cout<<(n/2+1)*(n/2+1)<<endl;
    }

    else{
        cout<<2*(n/2+1)*(n/2+2)<<endl;
    }
    return 0;
}