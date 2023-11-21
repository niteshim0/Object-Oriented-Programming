#include<bits/stdc++.h>
using namespace std;
class Complex{
  private:
    double a,b;
  public:
    void setData(int a,int b){
      this->a = a;
      this->b = b;
    }
    void showData(){
      cout<<a<<" "<<b<<endl;
    }
    Complex add(Complex& c){
      Complex temp;
      temp.a = a + c.a;
      temp.b = b + c.b;
      return temp;
    }
    Complex operator+(Complex& c){
      Complex temp;
      temp.a = a + c.a;
      temp.b = b + c.b;
      return temp;
    }
};
int main(){
       Complex c1,c2,c3,c4;
       c1.setData(3,4);
       c2.setData(2,6);
      //  c3 = c1 + c2;//gives error because compiler has idead about what to using operator if operands are of primitive types but it has no idea what to do if 
      //operand is of non-primitive type
      c3 = c1.add(c2);//a way to add non-primitve
      c3.showData();//what if we use some operator name as function name
      //but its allowed to use underscore , digits,or operator names in C++ as function name//but there is one thing those operator can be used as function name which are valid operator in c++ in unique way to perform those functionalities which it is used to do on primitive type on non-primitive types as well
      c4 = c3 + c2; // operator is overloaded.
      c4.showData();

}