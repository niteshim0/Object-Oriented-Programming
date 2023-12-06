# Type Conversion in C++

In C++, type conversion refers to converting a value from one data type to another. There are two main types of type conversion: implicit (automatic) and explicit (manual).

## Implicit Type Conversion (Automatic Conversion)

- This type of conversion is performed by the compiler without any explicit request from the programmer.
- It occurs when values are assigned or passed between compatible data types.
- For example, converting an integer to a float or promoting a char to an int.

```cpp
int intValue = 10;
float floatValue = intValue; // Implicit conversion from int to float
```

## Explicit Type Conversion (Manual Conversion)

This type of conversion is performed explicitly by the programmer using casting. C++ provides two ways for explicit type conversion:

1. **C-Style Casting:**

    C-style casting involves using the traditional C-style syntax for casting.

    ```cpp
    float floatValue = 3.14;
    int intValue = (int)floatValue; // C-style casting from float to int
    ```

2. **C++ Casting Operators:**

    C++ provides several casting operators for explicit type conversion:

    - **`static_cast`:** Used for simple conversions between compatible types at compile-time.

        ```cpp
        double doubleValue = 2.71828;
        int intValue = static_cast<int>(doubleValue); // static_cast from double to int
        ```

    - **`dynamic_cast`:** Primarily used for handling polymorphism in class hierarchies.

    - **`const_cast`:** Adds or removes the const qualifier.

    - **`reinterpret_cast`:** Performs low-level casting and is generally not recommended unless absolutely necessary.

It's important to use explicit type conversions judiciously, as improper or unnecessary conversions can lead to loss of data or unexpected behavior.

## Type Conversion Functions

Some data types in C++ provide member functions or constructors for explicit conversion. For instance:

- **`std::string` Conversion:**

  The `std::string` class in C++ provides a constructor that takes a `const char*` as an argument for string conversion.

  ```cpp
  int intValue = 42;
  std::string strValue = std::to_string(intValue); // Convert int to string
  ```

## Primitive Type to Class Type Conversion

 In C++, you can convert a primitive type to a class type using constructors in the class. Essentially, you provide a constructor in the class that takes the primitive type as an argument and initializes the class object.

 ```cpp
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
 ```

## Class Type to Primitive Type Conversion

In C++, converting a class type to a primitive type often involves defining a conversion operator in the class. A conversion operator is a special member function that specifies how an object of the class can be converted to another type.

```cpp
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
    /*Additionally, you might want to consider defining a conversion operator as explicit to avoid implicit conversions if that's the desired behavior:
    ```cpp
    explicit operator int() const {
    return intValue;
    ``` /*
     }This way, the conversion will only occur when explicitly requested, reducing the risk of accidental conversions.*/

};
int main(){
   Complex c1;
   c1.setData(3,4);
   int val = c1;//conversion through operator keyword
   cout<<val<<endl;
}
```
## Class type to Other Class type
 
Two ways are possible :
  1. **Conversion through Constructor**
  2. **Conversion through `operator` keyword**

### Conversion through Constructor

Same concept we will use which we have used for conversion of primitive type to user-defined type

```cpp
#include<bits/stdc++.h>
using namespace std;
class Product{
  private:
   int a,b;
  public:
  void setData(int a,int b){
    this->a = a;
    this->b = b;
  }
  void showData(){
    cout<<this->a<<" "<<this->b<<endl;
  }
  int getA(){
    return this->a;
  }
  int getB(){
    return this->b;
  }
};
class Item{
 private:
   int m,n;
  public:
  Item(){

  }
  Item(Product p){
    this->m = p.getA();
    this->n = p.getB();
  }
  void setData(int m,int n){
    this->m = m;
    this->n = n;
  }
  void showData(){
    cout<<this->m<<" "<<this->n<<endl;
  }
};
int main(){
  Item i1;
  Product p1;
  p1.setData(6,7);
  i1 = p1;
  i1.showData();
  
}
```

## Conversion through `operator` keyword

Same concept we will use which we used to convert user-defined type to primitive type.

```cpp
#include <iostream>
using namespace std;
class Item {
private:
    int m, n;

public:
    void setData(int m, int n) {
        this->m = m;
        this->n = n;
    }

    void showData() {
        cout << this->m << " " << this->n << endl;
    }
};
class Product {
private:
    int a, b;
public:
    void setData(int a, int b) {
        this->a = a;
        this->b = b;
    }

    void showData() {
        cout << this->a << " " << this->b << endl;
    }

    // Conversion operator from Product to Item
    operator Item() {
        Item temp;
        temp.setData(this->a, this->b);
        return temp;
    }
};
int main() {
    Item i1;
    Product p1;
    p1.setData(6, 7);
    // Using the conversion operator to convert Product to Item
    i1 = p1;
    i1.showData();

    return 0;
}
```