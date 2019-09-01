#include <bits/stdc++.h>
using namespace std;

int main() {
  int A,B;
  cin >> A >> B;
  
  int i = 0;
  
  while(A*i-i+1 < B){
    i++;
  }
  
  
  
  cout << i << endl;
}