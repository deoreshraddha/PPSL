#include <iostream>

using namespace std;

// Base class

class Animal {

public:

// Virtual function for run-time polymorphism

virtual void sound() {

cout << "This is a generic animal sound." << endl;

}

};

// Derived class for Dog

class Dog : public Animal {

public:

void sound() override { // Override the sound function for Dog

cout << "The dog barks." << endl;

}

};

// Derived class for Cat

class Cat : public Animal {

public:

void sound() override { // Override the sound function for Cat

cout << "The cat meows." << endl;

}

};

// Example of compile-time polymorphism through function overloading

void display(int n) {

cout << "Integer: " << n << endl;

}

void display(double d) {

cout << "Double: " << d << endl;

}

int main() {

// Run-time polymorphism with virtual functions

Animal *animal1 = new Dog();

Animal *animal2 = new Cat();

animal1->sound(); // Output: The dog barks.

animal2->sound(); // Output: The cat meows.

// Compile-time polymorphism with function overloading

display(5); // Output: Integer: 5

display(3.14); // Output: Double: 3.14

// Clean up

delete animal1;

delete animal2;

return 0;
}
