//it is little bit tough example to understand //take your time //have some patience
#include<bits/stdc++.h>
using namespace std;
//instead of class in pointy brackets one can also use typename

template<typename T> class ArrayList{
   private:
    struct ControlBlock
    {
      int capacity;
      T *arr_ptr;
    };
    ControlBlock *s;
    public:
    ArrayList(int capacity){
      s = new ControlBlock;
      s->capacity = capacity;
      s->arr_ptr = new T[s->capacity];
    }
    void addElement(int index,T data){
      if(index>=0&&index<s->capacity){
        s->arr_ptr[index] = data;
      }else{
        cout<<"Index is out of bound"<<endl;
      }
    }

    void viewElement(int index,T &data){
       if(index>=0&&index<s->capacity){
        data = s->arr_ptr[index];
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
  ArrayList<int> list1(4);//while creating object we must define what does the placeholder contains
  list1.addElement(0,32);
  list1.addElement(1,52);
  list1.addElement(3,890);
  list1.addElement(2,2);
  list1.printList();
  int data = -1;
  list1.viewElement(3,data);
  cout<<data<<endl;

  ArrayList<double> list2(4);//while creating object we must define what does the placeholder contains
  list2.addElement(0,3.2);
  list2.addElement(1,5.2);
  list2.addElement(3,8.90);
  list2.addElement(2,2.2);
  list2.printList();
  double need = 0.0;
  list2.viewElement(3,need);
  cout<<need<<endl;
  
}