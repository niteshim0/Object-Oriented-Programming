#include<bits/stdc++.h>
using namespace std;
class Complex {
  private:
  int a,b;
  public:
  Complex(){
    cout<<"Object created"<<endl;
  }
  ~Complex(){
    cout<<"Object Destroyed"<<endl;
  }
};
int main(){
  Complex c1;
}