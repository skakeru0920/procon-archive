#include <bits/stdc++.h>
using namespace std;

int main() {
  int H,W;
  cin >> H >> W;
  string x="##";
  for(int j=0;j<W;j++)
    x += '#';
  
  cout << x << endl;
  for(int i=0;i<H;i++){
    string a;
    cin >> a;
    cout << '#' << a << '#' << endl;
  }
  cout << x << endl;
  
}