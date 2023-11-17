# Understanding the Need of Inheritance

In object-oriented programming, a class is utilized to describe the properties and behaviors (methods or functions) of an object. Each property is assigned a name, and different instances of classes (objects) contain distinct values for these properties. The properties are modified using the methods of the class.

To illustrate the need for inheritance, consider the representation of a basic car entity:

- **Properties:** 'Price,' 'Engine Type,' 'Colour,' 'Capacity'
- **Methods:** 'setPrice(),' 'setEngineType(),' 'setColour(),' 'setCapacity(),' 'getPrice(),' 'getEngineType(),' 'getColour(),' 'getCapacity()'

This representation encapsulates the characteristics and behaviors of a simple car. Now, let's extend this to represent more advanced car models, such as branded cars like Mercedes, Tesla, or Range Rover, which may have additional features like airbags, a fridge, a sunroof, a navigation system, and a TV.

## Options to Extend the Representation:

1. **Modify the Existing Class:**
   - Add all the properties and methods of the branded car along with those of the simple car in the existing class. However, this would lead to the end of the existence of the simple car.

2. **Create a Separate Class:**
   - Create a separate class exclusively for the branded car, containing only its specific properties and methods. However, this approach results in a problem because, to represent a branded car, we would need to create two separate objects—one for the simple car and one for the branded car. This violates the encapsulation principle as related properties and methods of an entity should be encapsulated within a single unit.

3. **Inheritance:**
   - The most suitable option is to establish a relationship between the simple car and the branded car. We can create a separate class for the branded car, adding only its specific features and methods. The branded car class is then linked (or inherits from) the simple car class. This relationship is unidirectional, meaning the child (branded car) can access the properties and methods of its parent (simple car), but not the other way around.

By using inheritance, we can achieve a structured representation of entities, maintain the integrity of the simple car, and extend it to represent more complex entities without compromising the principles of object-oriented programming.

In summary, inheritance provides a way to build upon existing classes, promoting code reuse, encapsulation, and a hierarchical organization of entities.

# Need for Inheritance in C++ Object-Oriented Programming

Inheritance is a fundamental concept in object-oriented programming (OOP) that allows a class to inherit properties and behaviors from another class. In C++, inheritance is a key feature that provides several benefits, contributing to code organization, reuse, and extensibility. Here are some reasons for the need of inheritance in object-oriented programming in C++:

## Code Reusability

Inheritance allows a new class (derived class or subclass) to reuse the properties and behaviors of an existing class (base class or superclass). This promotes code reusability and helps avoid redundancy.

## Extensibility

Derived classes can extend or modify the behavior of the base class. This allows for incremental development, where new functionality can be added to the program without modifying existing, working code.

## Hierarchy and Classification

Inheritance supports the creation of class hierarchies, allowing developers to model real-world relationships and classifications. For example, a base class "Vehicle" can have derived classes like "Car," "Truck," and "Motorcycle."

## Polymorphism

Inheritance is closely tied to polymorphism, another key OOP concept. Polymorphism enables objects of the derived classes to be treated as objects of the base class. This facilitates flexibility and generic programming.

## Method Overriding

Derived classes can provide their own implementation for the methods inherited from the base class. This is known as method overriding, and it allows customization of behavior in the context of the derived class.

## Code Organization

Inheritance supports a structured and organized approach to code design. By grouping related classes into hierarchies, the code becomes more modular and easier to understand, maintain, and extend.

## Abstraction

Inheritance contributes to abstraction by allowing the creation of abstract base classes that define the common interface and properties shared by multiple derived classes. Instances of these abstract classes can be used in a more general sense.

## Base Class as Interface

In C++, a base class can serve as an interface that defines a contract for derived classes. This contract specifies a set of methods that must be implemented by all derived classes, ensuring a consistent interface.

# Synatx for Inheritance
```cpp 
class BaseClass {
public:
    // Base class members
};

class DerivedClass : Visibility_Mode BaseClass {
public:
    // Derived class members
};

```

# Visbibility Mode and Concept of Availability and Accessibility in Inheritance

- C++ provides access specifiers such as `public`, `private`, and `protected` to control the visibility of class members.
     - `public`: Members are accessible from outside the class.
     - `private`: Members are only accessible within the class.
     - `protected`: Similar to private but allows access to derived classes.

- Types of Users of a Class
     - `user1` will create objects of your class.
     - `user2` will create derived class of your class.

-  Availabilty and Accessibility

     - When we create an object of a class, it occupies space in memory. While we can't directly access private or protected members from that object, it's important to 
       note that these members still consume memory. In other words, when objects of a class are instantiated, the members are available in memory, even though they are 
       not accessible from outside the class.
  
     - It's clear that when creating a derived class, we must specify the visibility mode from which we are deriving from the base class, whether it is `public`, 
       `protected`, or `private`. If no such mention is made, the default visibility mode is set to `private`.

  ## Visibility Modes in Derived Class

Let's explore the impact on data members and methods of the base class when deriving a class with respect to different visibility modes:

- **`private`**: This sets the protected and public members of the base class to `private` in the derived class.

- **`protected`**: It sets the protected and public members of the base class to `protected` in the derived class.

- **`public`**: No changes occur; `protected` remains `protected` in the derived class, and `public` remains `public` in the derived class.

We haven't discussed the fate of `private` members of the base class because no one has the authority to alter their visibility; they will always remain `private` everywhere.

- For understanding its thoroughly one must try different sets of permutations and combination of these diffrent visibilty modes through codes.

![Visibilty Modes](image.png)


