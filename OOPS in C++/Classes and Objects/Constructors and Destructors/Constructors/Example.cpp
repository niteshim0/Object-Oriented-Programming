#include<bits/stdc++.h>
using namespace std;
class Complex{
  private:
  int a,b;
  public:
  Complex(){
    cout<<"Constructor by default get called when object is initialized"<<endl;
    a = 0;
    b = 0;
  }
};
int main(){
  Complex c1;
}