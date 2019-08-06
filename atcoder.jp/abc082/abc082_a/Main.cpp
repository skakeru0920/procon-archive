#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b;
  cin >> a >> b;
  int x = 0;
  if( (a+b)%2 == 1){
    x = (a+b)/2 + 1;
  }else{
    x = (a+b)/2;
  }
  
  cout << x <<endl;
}