#include<bits/stdc++.h>
using namespace std;
class B;//Forward decalration so that function in class A knows what is the type of B;
class A{
  private:
    int a;
  public:
    void setData(int a){
      this->a = a;
    }
  friend void sum(A,B);
};
class B{
  private:
    int b;
  public:
    void setData(int b){
      this->b = b;
    }
  friend void sum(A,B);
};
void sum(A obj1,B obj2){
  cout<<"Sum of private members of Class A and Class B,yes that's can be done using friend function  "<<obj1.a+obj2.b<<endl;
}
int main(){
   A obj1;
   B obj2;
   obj1.setData(4);
   obj2.setData(5);
   sum(obj1,obj2);
}