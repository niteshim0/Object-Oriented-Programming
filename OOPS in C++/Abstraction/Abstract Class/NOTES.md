# Concept of Pure Virtual Function and Abstract Classes

## Pure Virtual Function

 1. **Do Nothing Function** :A **Do Nothing Function** refers to a function that doesn't get defined or doesn't have a body either inside the class or outside the class.


## Special Syntax of Do Nothing Function

```cpp
class Person{
  public:
void doNothingFunction() = 0 ; //equated to zero
pure specifier ('= 0') allowed only on virtual functions
//later we will come to know this this is called pure virtual function so correct syntax will be
virtual void doNothingFunction() = 0;
};
```

## What's to know about doNothingFunction or Pure Virtual Function ?

If an object of the Person class were allowed to be instantiated, calling the doNothing() function through that object would be erroneous. Since the Person class itself doesn't define any specific behavior for this function, attempting to execute it would be meaningless. To prevent such scenarios and to ensure that the function is only invoked when meaningful implementations are provided in the derived classes, it is imperative to disallow the instantiation of the Person class altogether.

However, it's important to note that even though the Person class, with its pure virtual function doNothing(), cannot be instantiated, a child class derived from it can be. This is by design, as the child class is expected to provide concrete implementations for the pure virtual functions declared in the base class. The ban on instantiation applies to the abstract base class (Person), ensuring that any class inheriting from it must override the pure virtual functions. Therefore, while the child class can be instantiated, it must first provide meaningful implementations for the abstract functions to be utilized correctly.

As discussed in the Virtual Function module, when a pointer of the type base class is used to point to an object of the child class, early binding can lead to unexpected behavior. This is because the pointer will invoke the function of the base class. To ensure that the overridden function in the child class is correctly called, the virtual keyword must be used. This facilitates late binding, allowing the correct function to be resolved at runtime based on the actual type of the object being pointed to. Therefore, it's essential to use the virtual keyword with functions that are intended to be overridden in derived classes to ensure proper polymorphic behavior.

Now , we will introduce to our concept `Abstract Class`.

## Abstract Class

### In terms of C++

In C++, a class which contains one or more than one pure virtual function is known as an **Abstract Class**. Unlike Java, C++ doesn't have any `abstract` keyword for the creation of an Abstract Class.

```cpp
class AbstractClass {
public:
    // Pure virtual function
    virtual void someFunction() = 0;

    // Other member functions can be defined
};
```
- In C++, an abstract class is defined by having one or more pure virtual functions. A pure virtual function is a virtual function that is set to 0 and has no implementation in the abstract class. 
- Any class containing at least one pure virtual function is considered abstract, and you cannot create an instance of an abstract class. 
- Derived classes must provide implementations for all pure virtual functions to become concrete and be instantiated.
- For accessing those services(function or methods) of Base Class, which are not pure virtual, we must create Child Class for utilizing them.

### In terms of Java

- In Java, an Abstract Class is created using the `abstract` keyword.
- An abstract class can have abstract methods (methods without a body) that must be implemented by its subclasses. 
- You cannot create an instance of an abstract class in Java.

```java
abstract class AbstractClass {
    // Abstract method
    abstract void someFunction();

    // Other methods can be defined
}
```

### General Term

- In general terms, an Abstract Class is one that can't be instantiated or whose object can't be created. 
- Abstract classes provide a way to define a common interface for a group of related classes, ensuring that certain methods are implemented by all subclasses while allowing some methods to be left to the discretion of each individual subclass.

## Why we need Abstract Class ?

In the context of a university system, consider the need for abstract classes through an illustrative example.

## The University Scenario

Let's assume there are two key entities in our university system: `Student` and `Faculty`. When thinking in generalization terms, it becomes apparent that both could be perfect candidates as child classes of a more abstract `Person` class.

So, it makes sense to create a common base class `Person` to alleviate redundancy by inheriting shared methods. This way, both `Student` and `Faculty` classes can inherit and benefit from the common methods provided by the Person class.

Let's consider a scenario where all this information needs to be fed into a system responsible for keeping track of everything. If an instance of Student is created, it indicates a student, and similarly, if an instance of Faculty is created, it signifies a faculty member. This system helps in maintaining a comprehensive record of individuals within the university, providing clarity and organization.

But what if an instance of `Person` is created? In the context of the university, it doesn't refer to any specific entity; instead, it serves as a general term. It could potentially represent various classes within the university, such as `Student`, `Faculty`, or even classes unrelated to the university environment. It might be an `Impostor` (as in the game Among Us), a `Terrorist`, an `Alien`, or any other entity. Allowing direct instantiation of the `Person` class could introduce anomalies or disrupt the system. Therefore, to prevent unintended instances and maintain clarity in our system, it's crucial to designate the `Person` class as abstract, ensuring that it cannot be instantiated directly.

Another crucial consideration is that there are certain aspects common to both `Student` and ``Faculty``, yet the rules governing these commonalities may differ. Take, for example, the eligibilityCriteria() function, which assesses whether an individual is eligible to be either a `Student` or a `Faculty` member. However, the specific criteria for eligibility will vary between the two roles. By declaring eligibilityCriteria() as a pure virtual function in the Person class, we enforce the necessity for each child class (`Student` and `Faculty`) to provide their own unique implementations. This approach ensures that the eligibility criteria are tailored to the specific requirements of each role, fostering a more flexible and adaptable system.

## So these are key takeaways from this example:-

1. **Reducing Redundancy**:Abstract classes help in reducing redundancy by providing a common interface for classes that share common methods. In our example, both `Student` and `Faculty` can inherit common methods from the abstract Person class, avoiding the need to duplicate code.

2. **Generalization and Inheritance**:By having a common base class (Person), you can represent a more general concept that can be inherited by more specific classes (`Student` and ``Faculty``). This reflects the concept of generalization in object-oriented programming.

3. **Preventing Instantiation of Ambiguous Concepts**:Making `Person` an abstract class prevents the instantiation of objects directly from the `Person` class. This is crucial in scenarios where the concept represented by the base class doesn't have a clear identity or could be ambiguous in the context of the application.

4. **Enforcing Overrides for Specific Behavior**:Abstract classes can declare pure virtual functions, which act as placeholders for methods that must be implemented by derived classes. In our example, the eligibilityCriteria() function is a good candidate for a pure virtual function, as it ensures that specific rules for eligibility are implemented by each subclass (`Student` and `Faculty`).



