#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  int A,B,a,b,c,d;
  cin >> A >> B;
  int sum = 0;
  
 
  rep(i, B-A+1){
    int N = A + i;
    a = N / 10000;
    b = N % 10000 / 1000;
    c = N % 100 / 10;
    d = N % 10;
    
    if(a == d && b == c)
      sum++;
    
  }

  
  cout << sum << endl;
}