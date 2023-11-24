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
   friend Complex operator+(Complex,Complex);
   friend Complex operator-(Complex);
   friend ostream& operator<<(ostream&,Complex);
   friend istream& operator>>(istream&,Complex&);

};
Complex operator+(Complex A,Complex B){//Overloading of Binary Operator
   Complex temp;
   temp.a = A.a + B.a;
   temp.b = A.b + B.b;
   return temp;
}
Complex operator-(Complex C){//Overloading of Unary Operator
   Complex temp;
   temp.a = -C.a;
   temp.b = -C.b;
   return temp;
}
//Overloading of Insertion and Extraction Operator
ostream& operator<<(ostream  &dout,Complex C){
   cout<<C.a<<" "<<C.b<<endl;
   return dout;
}
istream& operator>>(istream &din,Complex& C){
   cin>>C.a>>C.b;
   return din;
}
int main(){
    Complex c1,c2,c3,c4,c5;
    c1.setData(3,4);
    c2.setData(4,7);
    c3 = c1 + c2; // operator + calls with two arguments c1,c2 i.e operator+(c1,c2); unlike operator overloading case where c1 is caller argument and c2 is argument;
    c3.showData();
    c4=-c3;
    c4.showData();
    cout<<"Enter the Complex Number"<<endl;//operator<<(cout,c5)//cout is a object of ostream class and extraction operator is the member function for the same and its already overloaded that's why it can take different types of primitives be  int,char ,float,string and more.
    cin>>c5;
    cout<<"You Entered :->"<<endl;
    cout<<c5<<endl;
}