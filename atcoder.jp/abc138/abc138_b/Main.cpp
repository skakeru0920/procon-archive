#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  double sum=0;
  cin >> N;
  rep(i, N){
    double A;
    cin >> A;
    sum = sum + 1 / A;
  }
  cout << 1 / sum << endl;
  
}