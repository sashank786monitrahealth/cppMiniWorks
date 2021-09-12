#include <iostream>

using namespace std;

float findSum(int n){

  return n*(n+1)*0.5;

}


int main(){

  int n;
  float op;
  cout<<"Enter a number: ";
  cin>>n;
  op = findSum(n);
  cout<<"Sum of first "<<n<<" numbers = "<<op<<endl;
  
  return 0;

}
