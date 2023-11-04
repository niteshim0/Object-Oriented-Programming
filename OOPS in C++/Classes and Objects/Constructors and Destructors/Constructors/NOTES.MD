# Understanding Constructors in C++

A constructor in C++ is:

1. A non-static member function i.e. it can be only called for the instances of class it can't represent class like static members.
2. Automatically called when an object of a class is created.
3. Primarily used to initialize the object's data members or perform any other setup required before the object is used(Problem of initialization , the primary problem constructor solves).
4. Named exactly the same as the class.
5. Does not have a return type, not even void.