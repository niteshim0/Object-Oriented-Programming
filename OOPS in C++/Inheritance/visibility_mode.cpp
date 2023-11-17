#include<bits/stdc++.h>
using namespace std;
class DemoVisibilty{
  private:
    int first;
    void setFirst(int x){
      this->first = x;
    }
    int getFirst(int x){
      return x;
    }
  protected:
    int second;
    void setSecond(int x){
      this->second = x;
    }
    int getSecond(int x){
      return x;
    }
  public:
    int third;
    void setThird(int x){
      this->third = x;
    }
    int getThird(int x){
      return x;
    }
};

//now making the derived or child class

class PrivateVisibilty:private DemoVisibilty{
     private:
       int four;
     public:
       void setFour(int x){
        this->four = x;
       }
       int getFour(int x){
        return x;
       }
};

class ProtectedVisibilty: protected DemoVisibilty{
    private:
       int five;
     public:
       void setFive(int x){
        this->five = x;
       }
       int getFive(int x){
        return x;
       }
};

class PublicVisibilty: protected DemoVisibilty{
    private:
       int six;
     public:
       void setSix(int x){
        this->six = x;
       }
       int getSix(int x){
        return x;
       }
};

int main(){
  
  //different set of permutations and combinations of all these visibility modes
  PrivateVisibilty pri;
  pri.setSecond(8);//it will give error since it can't access protected members of base class
  pri.setThird(4);//it will give error since it can't access public members of base class

  ProtectedVisibilty pro;
  pro.setSecond(8);//it will give error since it can't access protected members of base class
  pro.setThird(4);//it will give error since it can't access public members of base class

  PublicVisibilty pub;
  pub.setSecond(8);//it will give error since it can't access protected members of base class
  pub.setThird(4);//it will doesnt't give error since it can t access public members of base class
 
  //if there is some mistake be kind enough to point out and make the pull request for the same.
}