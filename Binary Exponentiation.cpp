/********************
Author -> Aaveg Gupta
*********************/


#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;
#define int ll
 
 
// Binary Exponentition -> Calculate a^n in O(log(n)) time

// Find 2 ^ 13 using BE
// using brute force TC is O(n)

// res    base    power
// 1      2       13
// 2      2       12
// 2      4       6
// 2      16      3
// 32     16      2
// 32     256     1
// 8192   256     0

// TC reduced from O(13) to O(7)

int power(int a, int n) {
  int res = 1;
  while (n) {
    if (n % 2) {
      res = (res *a) % MOD;
      n --;
    } else {
      a = (a * a) % MOD;
      n /= 2;
    }
  }
  return res;
}


signed main()
{
  
  cout << power(2, 13);
    
}
