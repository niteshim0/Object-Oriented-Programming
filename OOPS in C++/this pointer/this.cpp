#include<bits/stdc++.h>
using namespace std;
class Box{
  private:
   int l,b,h;
  public:
   void setDimension(int l,int b,int h){
    //rightSide here is a local variable
    //leftSide is an instance variable
    this->l = l;
    this->b = b;
    this->h = h;
  }
  void showDimension(){
    cout<<"length:--> "<<l<<endl;
    cout<<"breadth:--> "<<b<<endl;
    cout<<"height:--> "<<h<<endl;
   }
};
int main(){
  Box smallBox;
  Box *p; // Object Pointer
  p = &smallBox;//Object Pointer pointing to the smallBox object
  //Accessing class methods through objects by dot operator
  smallBox.setDimension(9,8,7);
  smallBox.showDimension();
  //Accessing class methods through object pointer by Arrow operator
  p->setDimension(6,7,8);
  p->showDimension();
}