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
// first remove all leading zeroes
// find the first occurence of zero in modify string
// find the length of the subtring which need to be taken with or operation
// checkk all possible subtring of given length look for maximum possible answer
signed main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int index = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        cout << 0 << endl;
        return 0;
    }
    int zero_pos = n;
    int length = s.size() - index;

    string s1 = s.substr(index, length);

    for (int i = index; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            zero_pos = i;
            break;
        }
    }
    int diff = zero_pos - index;
    string ans = s1;
    int length_of_string2 = length - diff;

    for (int i = index; i < n - length_of_string2; i++)
    {
        string ss1 = s1;
        for (int j = 0; j < length_of_string2; j++)
        {
            ss1[j + diff] = max(ss1[diff + j], s[i + j]);
        }
        ans = max(ans, ss1);
    }
    cout << ans << endl;

    return 0;
}