#include <bits/stdc++.h>
#define int long long
#define bte(v) (v).begin(), (v).end()
#define mod 1000000007
#define odd(n) (n & 1)
#define pb push_back
#define cv(v)                          \
    for (int i = 0; i < v.size(); i++) \
    cout << v[i] << ' '
using namespace std;
typedef pair<int, int> pi;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    while (t--)
    {///// doubt
        int n = 0, m = 0, a = 0, b = 0, c = 0, d = 0, sum = 0, diff = 0, maxN = 0, minN = 0, count = 0, temp = 0;
        bool flag = false;
        cin >> n;

        string ss;
        cin >> ss;
      int start=-1, end=-1;
      int cnt=0;
      for(int i=0; i<n; i++){
        if(ss[i]=='*'){
            cnt++;
            if(start==-1){
                start=i;
            }
            else{
                end=i;

            }
        }
      }


 int left_sheep_count=0;
 int answer=0;
      for(int i=start; i<=end; i++){
           if(ss[i]=='*'){
            left_sheep_count++;
           }


           else{
            answer+=min(left_sheep_count,cnt-left_sheep_count );

           }
      }
           cout<<answer<<endl;
      
    }
    return 0;
}