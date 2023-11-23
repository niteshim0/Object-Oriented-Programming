# Friend Function

A friend function is a function that is not a member of a class but is granted access to its private and protected members. This allows the function to operate on the private or protected data of the class as if it were a member function.

- It is not a member function of a class to which it is a friend.

- To declare a friend function, you use the `friend` keyword in the class declaration.

- It must be defined outside the class to which it is a friend.

- A friend function can access any member of the class to which it is a friend.

- It cannot access members of the class directly.

- It has no caller object as it is not associated with any instance of the class.

- It shouldn't be defined with a membership label since it is not a member function of a class.

- It can be friend to more than one class.

- It can be any section of class be it private,public or protected since it is not member function their will be no any change in overall functionality of friend function.

- It's important to note that using friend functions should be done judiciously, as they can break encapsulation by allowing external functions access to the private members of a class. In general, it's preferable to use member functions to manipulate the internal state of a class, and friend functions are often used in specific cases where access to private members is necessary for some reason.Try to think of some cases , have you found any ?


## Specific Cases where Friend Function can be Used ?

- The ability of a friend function to be associated with more than one class is a feature that can be useful in certain scenarios. If you have multiple classes that need to share access to each other's private or protected members, using a friend function is a way to achieve this without exposing the details to the public. e.g,

