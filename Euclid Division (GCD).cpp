/********************
Author -> Aaveg Gupta
*********************/


#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;
#define int ll
 
 
// Euclid Division Lemma
// For positive integer A and B, there exists integer q and r such that
// A = B * q + r        where 0 <= r <= B  ->  B is divisor

// (N1 + N2) % MOD = (N1 % MOD + N2 % MOD) % MOD
// (N1 * N2) % MOD = (N1 % MOD * N2 % MOD) % MOD
// doesn't valid for division



// Euclid division Algorithm -> To calculate GCD(HCF) of A and B
// eg 140 = 12 * 11 + 8
//    12  = 8 * 1 + 4
//    8  =  4 * 2 + 0

// gcd(140, 12) -> gcd(12, 8) -> gcd(8, 4) -> gcd(4, 0)
// 4 is gcd

int gcd(int a, int b) {
  if (b == 0) 
  return a;
  else
  return gcd(b, a % b);
}

//TC -> O(log(max(a,b)))

// OBSERVATIONS
// 1. gcd(a, 0) = gcd(0, a) = a
// 2. gcd(a, b) = gcd(b, a)
// 3. gcd(a, b) = gcd(a - b, b) = gcd(a, b - a)


signed main()
{
  
  cout << gcd(140, 12);
    
}
