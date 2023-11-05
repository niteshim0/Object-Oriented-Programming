#include<bits/stdc++.h>
using namespace std;
class Complex{
  private:
  int a,b;
  public:
  //These different form of Constructors calling is known as Constructor Overloading
  Complex(){
    cout<<"Defalut Constructor"<<endl;
    a = 0;
    b = 0;
  }
  Complex(int x,int y){
    cout<<"Parametrized Constructor"<<endl;
    a = x;
    b = y;
  }
  Complex(int k){
    a = k;
  }
  //Copy Constructor
  Complex(Complex &c){//reason for reference variable is explained in notes
    a = c.a ;
    b = c.b;
  }
};
int main(){
  Complex c1,c2(3,4),c5=8;
  Complex c6(c2);//deep copy of objects by using copy constructors
}