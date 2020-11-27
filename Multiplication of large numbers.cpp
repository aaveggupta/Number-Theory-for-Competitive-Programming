/*********************
/Author -> AAVEG GUPTA
*********************/

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define vi vector<int>
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
typedef long long ll;
#define int ll

void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
  cerr << *it << " = " << a << endl;
  err(++it, args...);
}


signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  string a, b;

  while (cin >> a >> b) {

    if (a.length() < b.length())
      swap(a, b);

    int na = a.length(), nb = b.length();

    vector <int> v[nb + 1]; int ind = 0;

    for (int i = nb - 1; i >= 0; i --) {

      for (int j = 0; j < ind; j ++)
        v[ind].push_back(0);

      int carry = 0;

      for (int j = na - 1; j >= 0; j --) {

        int e = b[i] - '0';
        int f = a[j] - '0';

        int num = (e * f + carry) % 10;
        carry = (e * f + carry) / 10;

        v[ind].push_back(num);

      }

      v[ind].push_back(carry);
      ind ++;

    }

    for (int i = 0; i < nb; i ++) {
        for (int j = 0; j < nb - 1 - i; j ++)
          v[i].push_back(0);
      }

      vi ans;

      int len = v[0].size();

      int carry = 0;

      for (int i = 0; i < len; i ++) {
        int sum = 0 + carry;
        for (int j = 0; j < nb; j ++) {
          sum += v[j][i];
        }
        int num = sum % 10;
        carry = sum / 10;
        ans.push_back(num);
      }
      ans.push_back(carry);

      int flag = 0;

      for (int i = ans.size() - 1; i >= 0; i --) {
        if (ans[i] == 0 && flag == 0) {
          continue;
        } else {
          cout << ans[i];
          flag = 1;
        }
      }
    
    if (flag == 0)
        cout << 0;

      cout << "\n";

  }
  
   
   return 0;
}
