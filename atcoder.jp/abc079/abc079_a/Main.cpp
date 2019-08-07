#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  int thou = N/1000;
  int hand = N%1000/100;
  int ten = N%100/10;
  int one = N%10;
  
 
  if(thou == hand && hand == ten){
    cout << "Yes" << endl;
  }else if(hand == ten && ten == one){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

  
}