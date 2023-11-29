# Templates in C++

- In C++, templates are a powerful feature that allows you to write generic code. 
- Templates enable you to create functions and classes that can work with any data type.
- The keyword `template` is used to define `function template` and `class template`.
- It is a way to make your function or class generalize as far as data type is concern.

## Types of Template defined in C++

There are two types of template defined in C++ : -

  1. **Function Template**
  2. **Class Template**

## Function Template (Generic Function)

It is a C++ feature to create generic function which can be used irrespective of data type and always give the desired result.

### Syntax of Function Template

```cpp
template <typename T> func_name(T arg1,T arg2){

}
//yes it is also possible to have more than one type in this generic function placeholder(typename) assumes the same data type as variable that is passed on that place.//like this
template <typename T1,typename T2,typename T3> func_name(T1 arg1,T2 arg2,T3 arg3){

}
```
### Example of Function Template
```cpp
#include<iostream>
using namespace std;
template<typename T> 
T findMax(T arg1,T arg2){//generic function to return max number b/w two numbers
  if(arg1>arg2){
    return arg1;
  }
  return arg2;
}
template<typename T1,typename T2> 
T1 findMax(T1 arg1,T2 arg2){//generice function to return max number b/w int and double
  if(arg1>arg2){
    return arg1;
  }
  return arg2;
}
int main(){
  int a = 5;
  int b = 7;
  cout<<findMax(a,b)<<endl;
  cout<<findMax(5.6,5.5)<<endl;
  cout<<findMax(5.6,5)<<endl;
}
```

## Class Template
- In C++, a class template is a way to define a generic class that can work with different data types. 
- It allows you to write a class once and use it with various data types without having to rewrite the code for each specific type. 
- Class templates are often used to create containers like vectors, lists, and other generic data structures.
- When you use a class template, you provide the actual data type you want to use as an argument inside angle brackets (<>). This is called template specialization. The C++ compiler then generates a specific version of the class for that data type.
- Class templates are widely used in C++ to create generic classes and functions that work with various data types. They provide a powerful tool for creating flexible and reusable code.

### Class template definition
```cpp
template <typename T>
class MyTemplate {
public:
    MyTemplate(T value) : data(value) {}

    void display() {
        cout << "Value: " << data << endl;
    }

private:
    T data;
}
```

### Example of Class Template
```cpp
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
```




