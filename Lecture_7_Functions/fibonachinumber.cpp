#include<iostream>
using namespace std;

bool checkMember(int n){
  int a = 0;
  int b = 1;
  int c;
  while(a < n){
      c = a + b;
      a = b;
      b = c;
  }
  return a == c;
}

int main(){

  int n; 
  cin >> n ;
  if(checkMember(n)){
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }

}
