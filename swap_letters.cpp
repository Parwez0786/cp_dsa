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
    int n;
    cin >> n;
    string aa, bb;
    cin >> aa >> bb;
    vector<int> ab;
    vector<int> ba;
    for (int i = 0; i < n; i++)
    {
        if (aa[i] == 'a' && bb[i] == 'b')
        {
            ab.push_back(i + 1);
        }

        else if (aa[i] == 'b' && bb[i] == 'a')
        {
            ba.push_back(i + 1);
        }
    }

    if (ab.size() % 2 == 0 && ba.size() % 2 == 1 || ab.size() % 2 == 1 && ba.size() % 2 == 0)
    {
        cout << -1 << endl;
        return 0;
    }

    if (ab.size() % 2 == 0 && ba.size() % 2 == 0)
    {
        cout << ab.size() / 2 + ba.size() / 2 << endl;
        for (int i = 0; i < ab.size(); i += 2)
        {
            cout << ab[i] << " " << ab[i + 1] << endl;
        }
        for (int i = 0; i < ba.size(); i += 2)
        {
            cout << ba[i] << " " << ba[i + 1] << endl;
        }
    }

    else if (ab.size() % 2 == 1 && ba.size() % 2 == 1)
    {
        cout << ab.size() / 2 + ba.size() / 2 + 2 << endl;

        for(int i=0; i<ab.size()-1; i+=2){
         cout<<ab[i]<<" "<<ab[i+1]<<endl;
        }
        for (int i = 0; i < ba.size() - 1; i += 2)
        {
         cout << ba[i] << " " << ba[i + 1] << endl;
        }

        cout<<ab[ab.size()-1]<<" "<<ab[ab.size()-1]<<endl;
        cout<<ab[ab.size()-1]<<" "<<ba[ba.size()-1]<<endl;
    }
    return 0;
}