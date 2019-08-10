#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  
  int flag = 0;
  rep(i, N){
    string color;
    cin >> color;
    if (color == "Y")
      flag = 1;
  }
  
  if(flag == 1){
    cout << "Four" << endl;
  }else{
    cout << "Three" << endl;
  }
}