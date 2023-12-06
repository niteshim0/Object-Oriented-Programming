#include<bits/stdc++.h>
using namespace std;
class Complex{
  private:
    int a,b;
  public:
   void setData(int a,int b){
    this->a = a;
    this->b = b;
   }
   void showData(){
     cout<<"a"<<"-->"<<this->a<<endl;
     cout<<"b"<<"-->"<<this->b<<endl;
   }
   // Conversion operator to Complex to int
    operator int() const {
        return this->a;
    }
};
int main(){
   Complex c1;
   c1.setData(3,4);
   int val = c1;//conversion through operator keyword
   cout<<val<<endl;
   
}