#include<iostream>
#include<stdio.h>
using namespace std;

// Create a base class Vehicle with properties like speed and methods like accelerate and brake. Create a subclass Car that inherits from Vehicle and adds more attributes like numberOfDoors.
class Vehicle{
    protected:
    int speed;
    public:
    void accelerate(){
        speed = speed + 10;
        std::cout<<"Accelerating...";
        std::cout<<"The Current Speed Is "<<speed<<std::endl;
    }
    void brake(){
        speed = 0;
        std::cout<<"Stopped...";
        std::cout<<"The Current Speed Is "<<speed<<std::endl;
    }

};
class Car:public Vehicle{
    protected:
    string name;
    int numberOfDoors;
    public:
    Car(string name,int speed,int numberOfDoors){
        this -> speed = speed;
        this -> numberOfDoors = numberOfDoors;
        std::cout<<"The Car "<<name<<" Is Created"<<std::endl;
    }
};
void function1(){
    Car lumbergini("Lumbergini",4,120);
    lumbergini.accelerate();
    lumbergini.accelerate();
    lumbergini.brake();
}


// Define a class Shape with methods to calculate the area and perimeter. Inherit Rectangle and Circle classes from it and override the methods for each shape.
class Shape{
    virtual double area = ();
    virtual double perementer = ();
};
class Rectangle:public Shape{
    private:
    int height;
    int width;
    public:
    Rectangle(int height,int width){
        this->height = height;
        this->width = width;
    };
    double area() override{
        return this->height * this->width;
    };
    double area() override{
        return 2 *(this->height * this->width);
    };
};
class Rectangle:public Shape{
    private:
    int radius;
    public:
    Rectangle(int radius){
        this->radius = radius;
    };
    double area() override{
        return M_PI *radius * radius;
    };
    double area() override{
        return 2 * M_PI * radius;
    };
};


int main(){
    function1();
    return 0;
}