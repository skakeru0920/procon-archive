#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main () {
  int N,K;
  cin >> N >> K;
  
  int sum = 1;
  
  rep(i, N) {
    if(sum > K )
      sum += K;
    else 
      sum *= 2;
    
  }
  
  cout << sum << endl;
    
}