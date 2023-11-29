//it is little bit tough example to understand //take your time //have some patience
#include<bits/stdc++.h>
using namespace std;
class ArrayList{
   private:
    struct ControlBlock
    {
      int capacity;
      int *arr_ptr;
    };
    ControlBlock *s;
    public:
    ArrayList(int capacity){
      s = new ControlBlock;
      s->capacity = capacity;
      s->arr_ptr = new int[s->capacity];
    }
    void addElement(int index,int data){
      if(index>=0&&index<s->capacity){
        s->arr_ptr[index] = data;
      }else{
        cout<<"Index is out of bound"<<endl;
      }
    }

    int viewElement(int index){
      int temp = -1;
       if(index>=0&&index<s->capacity){
        int temp = s->arr_ptr[index];
      }else{
        cout<<"Index is out of bound"<<endl;
      }
    }  
    void printList(){
      for(int i = 0;i<s->capacity;i++){
        cout<<s->arr_ptr[i]<<" ";
      }
      cout<<endl;
    } 
};
int main(){
  ArrayList list1(4);
  list1.addElement(0,32);
  list1.addElement(1,52);
  list1.addElement(3,890);
  list1.addElement(2,2);
  list1.printList();
  cout<<list1.viewElement(3)<<endl;
  //Well enough,this works well for int datatype what if we need to expand these some functionalities for different datatypes float,double,long long ,long ,some for string and some custom type//it is not wise to create class for all those//so we must make a generic class which will incorporate all these data types.
  //so in the next example
}