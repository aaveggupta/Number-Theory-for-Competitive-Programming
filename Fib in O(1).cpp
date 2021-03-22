#include <bits/stdc++.h>
#define int long long
#define MOD 1000000007
#define PI 3.141592653
using namespace std;

signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  // Evaluate n'th fibonacci Number in O(1) time
  // (pow((1 + sqrt(5)), n) - pow((1 - sqrt(5)), n)) / (pow(2, n) * sqrt(5))
  // Only yields correct result for n < 70, due to floating-point rounding errors.
  
  for (int i = 1; i < 70; ++ i) {
    int num = (pow((1 + sqrt(5)), i) - pow((1 - sqrt(5)), i)) / (pow(2, i) * sqrt(5));
    cout << num << "\n";
  }

}
