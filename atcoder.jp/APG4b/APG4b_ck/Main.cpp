#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int sum=1;
  for(int i=1; S.size() > i; i=i+2){
    if(S.at(i) == '+')
      sum++;
    else
      sum--;
  }
  cout << sum << endl;
}