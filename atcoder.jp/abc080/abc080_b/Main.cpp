#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  
  int sum = 0;
  sum = N / 100000000 
    + N % 100000000 / 10000000
    + N % 10000000 / 1000000
    + N % 1000000 / 100000
    + N % 100000 / 10000
    + N % 10000 / 1000
    + N % 1000 / 100
    + N % 100 / 10
    + N % 10 ;
  
  if (N % sum == 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
    
  
  
}