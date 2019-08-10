#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N,K;
  cin >> N >> K;
  
  int r = 0;
  
  rep(i, N){
    int x;
    cin >> x;
    
    if(x < K-x){
      r = r + x*2;
    }else{
      r = r + (K-x)*2;
    }
  }
  cout << r << endl;

}