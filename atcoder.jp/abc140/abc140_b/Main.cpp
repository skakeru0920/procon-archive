#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<int> order(N);
  vector<int> satisfy(N);
  vector<int> additional(N-1);
  int sum = 0;
  
  for(int i=0; i<N; i++)
    cin >> order.at(i);
  for(int i=0; i<N; i++)
    cin >> satisfy.at(i);
  for(int i=0; i<N-1; i++)
    cin >> additional.at(i);
  
  for(int i=0; i<N; i++){
    int number = order.at(i)-1;
    sum += satisfy.at(number);
    
    
   if(i+1 < N){
     if(order.at(i) == order.at(i+1) - 1)
       sum += additional.at(number);
   }
    
  }
  cout << sum << endl;
}