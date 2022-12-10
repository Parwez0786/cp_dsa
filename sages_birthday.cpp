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

    int n = 0, m = 0, a = 0, b = 0, c = 0, d = 0, sum = 0, diff = 0, maxN = 0, minN = 0, count = 0, temp = 0;
    bool flag = false;
    cin >> n;
    vector<int> vv;
    for (int i = 0; i < n; i++)
    {
        int xx;
        cin >> xx;
        vv.push_back(xx);
    }

    if (n == 1 || n == 2)
    {
        cout << 0 << endl;
        for (int i = 0; i < n; i++)
        {
            cout << vv[i] << " ";
        }
        cout << endl;

        return 0;
    }
    sort(vv.begin(), vv.end());

    
    int arr[n];
     int kk=0;
    for(int i=0; i<n; i++){
        if(i%2==1){
            arr[i]=vv[kk++];

        }
       
    }

    for(int i=0; i<n; i++){
        if(i%2==0){
            arr[i]=vv[kk++];

        }
    }

    int counter=0;
   for(int i=1; i<n-1; i++){
    if(arr[i-1]>arr[i]&&arr[i+1]>arr[i]){
        counter++;
    }
   }

   cout<<counter<<endl;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   

    return 0;
}