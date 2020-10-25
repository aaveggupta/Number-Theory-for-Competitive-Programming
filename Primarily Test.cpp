/********************
Author -> Aaveg Gupta
*********************/


#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;
#define int ll
 
 
 // PRIMARILY TEST - To check whether a number is prime or not
 // All divisors of number occur in pair
 // eg. 12 -> {1, 2, 3, 4, 6, 12} -> (1, 12) , (2, 6), (3, 4)
 // Half of divisor lie above sqrt(N) and half lies below
 // therefor, to reduce time complexity just iterate over upto sqrt(N)
 // If any number till sqrt(N) divided it that means its not Prime
 
 // Time Complexity -> O(sqrt(N))
 
 bool isPrime (int n) {
   if (n == 1) {
     return false;
   }
   
   for (int i = 2; i <= sqrt(n); i++) {
     if (n % i == 0) {
       return false;
     }
   }
   
   return true;
 }
 
signed main()
{
  int n;
  cin >> n;
  
  cout << isPrime(n);
    
}
