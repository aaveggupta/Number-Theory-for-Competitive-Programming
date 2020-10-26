/********************
Author -> Aaveg Gupta
*********************/


#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;
#define int ll
 
// Modular Arithmetic

// Congruences -> A and B are congruent under modulo n if they leave the same remainder when divided by n
// A ≅ B (mod N)   -> (A - B) is divisible by N
// 13 ≅ 41 (mod 7)  as  13 mod 7 = 41 mod 7 = 6

// (13 + 35  + 5) % 7 = (53 % 7) = 4
// (41 + 35  + 5) % 7 = (81 % 7) = 4

// if  a * b = c
// then  ((a % N) * (b % N)) % N ≅ c % N
// used when we usually works with very long numbers to avoid overflow condition
// Valid only for Addition, Multiplication and Substraction
// For division there is Modulo Multiplicative Inverse


// Is sum of digits in a number is divisible 9 or 3 that means the number is divisible by 9 or 3
// eg 12345 % 3 = 15 % 3 = 0


// Modular Exponentiation
// if a ≅ b  (mod n)
// then a^k ≅ b^k  (mod n)

// Find (16 ^ 5) % 3 -> (1 ^ 5) % 3 = 1     as 16 ≅ 1 (mod 3)

// Find (2 ^ 123456789) % 7 
// ((2 ^ 3) ^ 41152263) % 7
// (8 ^ 41152263) % 7
// (1 ^ 41152263) % 7 = 1       as 8 ≅ 1 (mod 7)


signed main()
{
  
  // SOLVE AS MANY PROBLEMS AS YOU CAN!
    
}
