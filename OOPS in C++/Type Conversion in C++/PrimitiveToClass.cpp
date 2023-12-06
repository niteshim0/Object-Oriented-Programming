#include<bits/stdc++.h>
using namespace std;
class Complex{
  private:
    int a,b;
  public:
   Complex(){

   }
   Complex(int a){
       this->a = a;
       this->b = 0;
   }
   void setData(int a,int b){
    this->a = a;
    this->b = b;
   }
   void showData(){
     cout<<"a"<<"-->"<<this->a<<endl;
     cout<<"b"<<"-->"<<this->b<<endl;
   }
};
int main(){
   Complex c1;
   int val = 5;
   c1 = 5;//conversion through constructors
   c1.showData();
}