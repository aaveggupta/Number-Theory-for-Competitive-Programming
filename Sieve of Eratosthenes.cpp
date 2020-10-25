/********************
Author -> Aaveg Gupta
*********************/


#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;
#define int ll
 
 
 // Sieve of Eratosthenes
 
 // WHY?
 // Suppose you have more than million(10^6) queries to tell whether a number
 // is prime or not, and number can be upto 10^6
 // Time complexity will be O(Q*sqrt(N)) ~ O(10^9)
 // To reduce this TC, we use Sieve of Eratosthenes
 
vector <int> isPrime(1000001, 1); // Assume all numbers are prime
 
void sieve() {
  int maxN = 1000000;
  isPrime[0] = 0, isPrime[1] = 0; // 0 and 1 are not prime
  
  for (int i = 2; i <= sqrt(maxN); i++) {
    if (isPrime[i]) {
      for (int j = i * i; j <= maxN; j += i) { 
        isPrime[j] = 0; // Multiples of Prime are composite
        // j loop started from i * i  as previous ones are already marked as prime or not prime
      }
    }
  }
  
}

// Preprocessing Time -> O(Nlog(logN))
// Answer Query -> O(1)

// For proof you can refer to CP-Algorithm
 
 
signed main()
{
  int queries;
  cin >> queries;
  
  sieve();
  
  while (queries --) {
    int n;
    cin >> n;
    
    cout << isPrime[n] << "\n";  // Answer Query -> O(1)
  }
    
}
