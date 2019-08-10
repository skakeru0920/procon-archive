#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, A;
  cin >> N >> A;
  
  rep(i, N) {
    string hugou;
    int B;
    cin >> hugou >> B;
    int count = i + 1;
    
    if(hugou == "+"){
      A += B;
      
    }else if(hugou == "-"){
      A -= B;
      
    }else if(hugou == "*"){
      A *= B;
      
    }else if(hugou == "/"){
      if(B == 0){
        cout << "error" << endl;
        break;
      }else{
        A /= B;
      }
      
    }
    cout << count << ":"<< A << endl;
      
  }  
  
}
