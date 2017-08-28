//David Samuel, dms4gt, 8/27/17, xToN.cpp

#include <iostream>
using namespace std;

int xToN(int x, int n){
  int tmp =0;
  if(n==0){
    return 1;
  }
  else{
    return x* xToN(x,n-1);
  }
}

int main(){
  int x, n, z;
  cout<< "What is x? "<<endl;
  cin >> x;
  cout<< "What is n? "<<endl;
  cin >> n;
  z=xToN(x,n);
  cout << x << " to the power of " <<n<< " is "<< z<< endl;
  return 0;
    }
    
      
