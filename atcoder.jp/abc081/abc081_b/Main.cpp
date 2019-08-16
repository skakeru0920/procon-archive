#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int a,first,i,sum=0;
  cin >> a >> first;
  for(first; first%2 == 0;first=first/2){
    i++;
  }
  
  
  for(a; a > 1; a--){
  	int M,temp=0;
    cin >> M;
    for(M; M%2 ==0;M=M/2){
      temp++;
    }
    if(temp <= i){
      sum = temp;
      i = temp;
    }
  }
  
  cout << sum << endl;
}