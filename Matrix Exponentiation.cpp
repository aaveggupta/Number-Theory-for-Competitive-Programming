/********************
Author -> Aaveg Gupta
*********************/


#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;
#define int ll
 
 
// Binary Exponentiation -> Matrix(A) ^ n



void multiply(vector<vector<int>> &a, vector<vector<int>> &b, int dim) {
  vector<vector<int>> res (dim, vector<int>(dim));
  
  for (int i = 0; i < dim; i ++) {
    for (int j = 0; j < dim; j++) {
      res[i][j] = 0;
      for (int k = 0; k < dim; k ++) {
        res[i][j] += a[i][k] * b[k][j];
      }
    }
  }
  
  for (int i = 0; i < dim; i++) {
    for (int j = 0; j < dim; j++) {
      a[i][j] = res[i][j];
    }
  }
  
}

void printMat (vector <vector<int>> a, int dim) {
  for (int i = 0; i < dim; i++) {
    for (int j = 0; j < dim; j++) {
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }
}


// Using Naive or brute force approach -> TC is O(dim^3 * n) -> dim is dimension of matrix

void powerNaive (vector<vector<int>> &a, int n, int dim) {
  vector<vector<int>> im (dim, vector<int>(dim)); // Identity Matrix
  
  for (int i = 0; i < dim; i++) {
      for (int j = 0; j < dim; j++) {
        if (i == j) {
          im[i][j] = 1;
        }
      }
  }
  
  for (int i = 0; i < n; i++)
  multiply(im, a, dim);
  
  for (int i = 0; i < dim; i++) {
    for (int j = 0; j < dim; j++) {
      a[i][j] = im[i][j];
    }
  }
  
}

// Using Matrix Exponentiation similar to binary exponentiation -> TC is O(dim^3 * log(n)) -> dim is dimension of matrix

void powerME (vector<vector<int>> &a, int n, int dim) {
  vector<vector<int>> im (dim, vector<int>(dim)); // Identity Matrix
  
  for (int i = 0; i < dim; i++) {
      for (int j = 0; j < dim; j++) {
        if (i == j) {
          im[i][j] = 1;
        }
      }
  }
  
  // Similar to Binary Exponentiation
  while (n) {
    if (n % 2) {
      multiply(im, a, dim);
      n --;
    } else {
      multiply(a, a, dim);
      n /= 2;
    }
    
  }
  
  for (int i = 0; i < dim; i++) {
    for (int j = 0; j < dim; j++) {
      a[i][j] = im[i][j];
    }
  }
  
}

signed main()
{
  
  int t;
  cin >> t;
  
  while (t --) {
    int dim, n;
    cin >> dim >> n;
    
    vector<vector<int>> a (dim, vector<int>(dim));
    for (int i = 0; i < dim; i++) {
      for (int j = 0; j < dim; j++) {
        cin >> a[i][j];
      }
    }
    
    //powerNaive(a, n, dim);
    powerME(a, n, dim);
    
    printMat(a, dim);
    
    
  }
    
}
