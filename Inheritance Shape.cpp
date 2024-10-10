#include<iostream>
using namespace std;

//Base class shape
class Shape {
    public:
    void shape(){
        cout<<"This is a shape"<<endl;
    }
};

//Derived class polygon (inherits from shape)
class Polygon: public Shape{
    public:
    void polygon (){
        cout<<"Polygon is a shape"<<endl;
    }
};

//Derived class Rectangle (inherits from polygon )
class Rectangle : public Polygon {
    public:
    void rectangle (){
        cout<<"Rectangle is a polygon "<<endl;
    }
};

//Derived class Triangle (inherits from rectangle )
class Triangle : public Rectangle {
    public:
    void triangle (){
        cout<<"Triangle is a polygon"<<endl;
    }
};

//Derived class Square (inherits from triangle )
class Square : public Triangle {
    public:
    void square (){
        cout<<"Square is a rectangle "<<endl;
    }
};

int main(){
    Square mysquare;
    mysquare.square();
    mysquare.triangle ();
    mysquare.rectangle();
    mysquare.polygon();
    mysquare.shape ();
    
    return 0;
}
