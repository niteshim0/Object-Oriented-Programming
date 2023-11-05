# Understanding Constructors in C++

A constructor in C++ is:

1. A non-static member function i.e. it can be only called for the instances of class it can't represent class like static members.
2. Automatically called when an object of a class is created.
3. Primarily used to initialize the object's data members or perform any other setup required before the object is used(Problem of initialization , the primary problem constructor solves).
4. Named exactly the same as the class.
5. Does not have a return type, not even void.

# Types of Constructors

 1. **Default Constructor:**
    - A constructor that is called automatically when an object is created without any arguments.
    - It initializes the object with default values. 
    - If no constructor is defined by the programmer, the compiler provides a default constructor it can be so also called as implicit default constructor.
    - Thumb Rule :: If an object is created, a constructor must be called.
 2. **Parametrized Constructor:**
    - A type of constructor that accepts parameters during object creation. 
    - It allows you to initialize the object with specific values provided as arguments to the constructor. 
    - It is useful when you want to initialize the object's data members with values that are passed at the time of object instantiation. 
    - If a parameterized constructor is present in a class, the compiler will not implicitly create a default constructor. If a default constructor is required, it must be created explicitly by the programmer.

3. **Copy Constructor:**
   - If no constructors are explicitly defined in a class, the compiler will implicitly generate two constructors: Default and Copy Constructor.
   - If only default constructor is explicitly definded in a class, the compiler will implcitly generate Copy constructor.
   - If both are explicitly defined in a class,the compiler will not generate any constructor implicitly.
   - A copy constructor is a special type of constructor in C++ that is used to create a new object as a copy of an existing object of the same class. 
   - Its primary purpose is to initialize an object using another object of the same class. 
   - The copy constructor is called in various situations, such as when an object is passed by value as an argument to a function, or when an object is returned from a function by value.
   - Inside the copy constructor, you typically perform a deep copy of the data members of the source object to the newly created object.
   -  It is especially useful for preventing issues related to shallow copying of dynamically allocated memory or complex data structures i.e. that each object has its own independent copy of the dynamically allocated data.

  # Reference Variable in Copy Constructor

In C++, when creating a copy constructor, a reference variable is often used to refer to the original object. This is done for the following reasons:

1. **Avoiding Infinite Recursion**: Using a reference variable prevents an infinite loop of copy constructors calling each other, which would occur if the copy constructor took the object itself as an argument.

2. **Efficiency**: By using a reference variable, unnecessary copying of large data structures is avoided. This allows the copy constructor to access the original data directly, improving the performance of the copy operation.

3. **Consistency**: Passing a reference variable ensures that the original object remains unaltered during the copying process, preserving the integrity of the original data.




