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
  int n, m;
  cin >> n >> m;
  vector<int> vv;
  for (int i = 0; i < n; i++)
  {
    int xx;
    cin >> xx;
    vv.push_back(xx);
  }
  int low = 0, high = 0;
  int sum = 0;
  int result = INT_MIN;

  while (high < n)
  {
    if (sum < m && (m - sum) >= vv[high])
    {
      sum += vv[high];
      high++;
    }
    else
    {
      result = max(result, high - low);
      sum -= vv[low];
      low++;
    }
  }
  result = max(result, high - low);
  cout << result << endl;
  return 0;
}