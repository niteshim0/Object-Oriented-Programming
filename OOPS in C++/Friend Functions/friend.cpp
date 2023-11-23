#include<bits/stdc++.h>
using namespace std;
class Complex{
  private:
   double a,b;
  public:
   void setData(double a,double b){
    this->a = a;
    this->b = b;
   }
   void showData(){
    cout<<a<<" "<<b<<endl;
   }
   friend void fun(Complex c);
};
void fun(Complex c){
  cout<<"Sum of imaginary and real is  "<<c.a+c.b<<endl;//accessing private members
}
int main(){
   Complex c1,c2,c3;
   c1.setData(3,4);
   c2.setData(4,5);
   c3.setData(5,6);
   fun(c1);
   fun(c2);
   fun(c3);
}