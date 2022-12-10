#include <bits/stdc++.h>
#define int long long
#define bte(v) (v).begin(), (v).end()
#define mod 1000000007
#define odd(n) (n & 1)
#define pb push_back
#define cv(v)                        \
  for (int i = 0; i < v.size(); i++) \
  cout << v[i] << ' '
using namespace std;
signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 0;
  cin >> t;
  while (t--)
  {
    int n = 0, k = 0, a = 0, b = 0, c = 0, d = 0, sum = 0, diff = 0, maxN = 0, minN = 0, count = 0, temp = 0;
    bool flag = false;
    cin >> n >> k;
    vector<int> vv;

    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
      int xx;
      cin >> xx;
      vv.push_back(xx);
      map[vv[i]]++;
    }

  for(auto it:map){
     int kkk=it.second;
     sum+=min(k, kkk);

  }
  int number_time=sum/k;
  number_time*=k;
  int counter=0;
    unordered_map<int, vector<int>> answer;
    int kk = 1;
    for (auto it : map)
    {
      int first = it.first;
      int second = it.second;
      int diff;
      if (it.second > k)
      {
        diff = it.second - k;
        second -= diff;
        while (diff--)
        {
          

          answer[it.first].push_back(0);
        }
      }

      while (second--)
      {
        if(counter<number_time){
        answer[first].push_back(kk);
        kk++;
        if (kk > k)
        {
          kk = 1;
        }
        }else{
          answer[first].push_back(0);
        }
         counter++;
      }
    }

     vector<int>anss;

    for(int i=0; i<n; i++){
      auto it=answer.find(vv[i]);
      if((*it).second.size()!=0){
        anss.push_back((*it).second.back());
        (*it).second.pop_back();



      }
    }

    for(int i=0; i<anss.size(); i++){
      cout<<anss[i]<<" ";

    }
    cout<<endl;
  }
  return 0;
}