/********************
Author -> Aaveg Gupta
*********************/


#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;
#define int ll
 
 
// Nth element of a recurrence relation in O(log(n))

// Recurrence Relation -> an equation that recursively defines a sequence where the next term is a function of the previous terms
// eg Fibonacci series -> F(n) = F(n - 1) + F(n - 2)   if (n > 2)
//                        F(1) = 1, F(2) = 1


// Relation b/w Recurrence Relation and Matrix Exponentiation

// [F1, F2] * |A  B|  = [F2, F3]
//            |C  D|

// F1A + F2C = F2     POSSIBLE when A = 0 and C = 1
// F2B + F2D = F3     B = 1 and D = 1  as Fibonacci Series

// Transition Matrix is |0  1|
//                      |1  1|

// [1, 1] * |0  1| ^ n - 1  = [F(n), F(n + 1)]    F1 = 1, F2 = 1 as Fib Series
//          |1  1|


// TC is O(8log(n)) ~ O(log(n))


// Problem -> Fibonacci Finding (HackerRank Problem)

void multiply(vector<vector<int>> &im, vector<vector<int>> tm) {
  
  vector <vector<int>> res (2, vector <int>(2));
  
  for (int i = 0; i < 2; i ++) {
    for (int j = 0; j < 2; j ++) {
      res[i][j] = 0;
      for (int k = 0; k < 2; k++) {
        res[i][j] += im[i][k] * tm[k][j];
      }
    }
  }
  
  for (int i = 0; i < 2; i ++) {
    for (int j = 0; j < 2; j ++) {
      im[i][j] = res[i][j];
    }
  }
  
  
  
}

void power (vector<vector<int>> &tm, int n) {
  
  vector <vector<int>> iM (2, vector <int>(2, 0));
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j ++) {
      if (i == j) {
        iM[i][j] = 1;
      }
    }
  }
  
  
  
  while (n) {
    if (n % 2) {
      multiply(iM, tm);
      n--;
    } else {
      multiply(tm, tm);
      n /= 2;
    }
  }
  
  for (int i = 0; i < 2; i ++) {
    for (int j = 0; j < 2; j ++) {
      tm[i][j] = iM[i][j];
    }
  }

  
}


int solve(int a, int b, int n) {
  
  vector <vector<int>> tM (2, vector <int>(2, 1));
  tM[0][0] = 0;
  
  
  power(tM, n - 1);
  
  
  vector <vector<int>> a1 (1, vector <int>(2));
  a1[0][0] = a, a1[0][1] = b;
  
  vector <vector<int>> ans (1, vector <int>(2));
  
  for (int i = 0; i < 1; i ++) {
    for (int j = 0; j < 2; j ++) {
      ans[i][j] = 0;
      for (int k = 0; k < 2; k++) {
        ans[i][j] += a1[i][k] * tM[k][j];
      }
    }
  }
  
  return ans[0][1];
  
  
}

signed main()
{
  
  int t;
  cin >> t;
  
  while (t --) {
    int a, b, n;  // A = F(0), B = F(1), We have to find nth term in relation F(n) = F(n - 1) + F(n - 2);
    cin >> a >> b >> n;
    
    int ans = solve(a, b, n);
    
    cout << ans << "\n";
    
    
  }
    
}
