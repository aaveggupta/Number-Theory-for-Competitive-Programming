/********************
Author -> Aaveg Gupta
*********************/


#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;
#define int ll
 
 
// Prime Factorization -> decomposition of a composite number into a product of smaller prime numbers
// eg N = 100
// Factorization = (2^2) * (5^2)

// if n is a composite number then there is atleast a one prime divisor of N below sqrt(N);

// Time Complexity -> O(sqrt(n))

void primeFact (int n) {
  
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      int cnt = 0;
      while (n % i == 0) {
        cnt ++;
        n /= i;
      }
      cout << i << "^" << cnt << "\n";
    }
  }
  
  if (n > 1) {
    cout << n << "^" << 1 << "\n";
  }
  
}

// Using sieve we can reduce the time complexity to O(log(n))

vector <int> arr(1000001, -1);

void sieve() {
  int maxN = 1000000;
  
  for (int i = 2; i <= sqrt(maxN); i++) {
    if (arr[i] == -1) {
      for (int j = i; j <= maxN; j++) {
        if (arr[j] == -1) {
          arr[j] = i;
        }
      }
    }
  }
}

signed main()
{
  int n;
  cin >> n;
  
  primeFact(n);
    
}
