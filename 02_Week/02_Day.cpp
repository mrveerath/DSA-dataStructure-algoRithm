#include<iostream>
#include<stdio.h>
using namespace std;

// Create a Point class representing a point in 2D space. Use a constructor to initialize the coordinates.
class Point{
    public:
    int x;
    int y;
    Point(){
        x = 0;
        y = 0;
        std::cout<<"The Cordinate X Equal To "<<x<<" And Cordinate Y Equal To "<<y<<" Initialized"<<std::endl;
    }
    Point(int xco,int yco){
        std::cout<<"The Class Point Is Created With Parameter"<<std::endl;
        x = xco;
        y = yco;
        std::cout<<"The Cordinate X Equal To "<<x<<" And Cordinate Y Equal To "<<y<<" Initialized"<<std::endl;
    }
};
void function1(){
    Point p1(10,15);
}
// Define a Triangle class and initialize its three sides using a constructor. Include a method to calculate the perimeter.
class Triangle{
    private:
    int side1;
    int side2;
    int side3;
    public:
    Triangle(int side1,int side2,int side3){
        std::cout<<"The Size Of Triangle Sides Are :"<<std::endl;
        std::cout<<"side 1 :"<<side1<<std::endl;
        std::cout<<"side 2 :"<<side3<<std::endl;
        std::cout<<"side 3 :"<<side3<<std::endl;
        std::cout<<"Created"<<std::endl;
        this -> side1 = side1;
        this -> side2 = side2;
        this -> side3 = side3;
    };
    void getPerimeter(){
        int perimiter = side1 + side2 + side3;
        std::cout<<"The Perimeter Of This Triange Is "<<perimiter<<std::endl;
    }
};
void function2(){
    Triangle t1(40,20,35);
    t1.getPerimeter();
}
// Write a City class with properties like name, population, and area. Use a constructor to initialize them, and a destructor to clean up after the object is deleted.
class City{
    string name;
    int area;
    int population;
    public:
    City(string name, int area,int population){
        std::cout<<"The City "<<name<<" Is Created With Population "<<population<<std::endl;
        std::cout<<"The City "<<name<<" Has Area Of "<<area<<"m2"<<std::endl;
        this -> name = name;
        this -> area = area;
        this -> population = population;
    }
    ~City(){
        std::cout<<"The City "<<this ->name<<" Is Created With Population "<<this ->population<<std::endl;
        std::cout<<"The City "<<this ->name<<" Has Area Of "<<this ->area<<"m2"<<std::endl;
        std::cout<<"The Destructor Is Called Here"<<std::endl;
    }
};
void function3(){
    City birgunj("Birginj",12,500000);
}
// Implement a Robot class that initializes with a name and a purpose. Add a destructor to display a message when the object is deleted.
class Robot{
    string name;
    string purpose;
    public:
    Robot(string name,string purpose){
        this -> name = name;
        this -> purpose = purpose;
        std::cout<<"The "<<name<<" Robot Is Created For "<<purpose<<" Purpose"<<std::endl;
    }
    ~Robot(){
        std::cout<<"Robot Is Destroyed..."<<std::endl;
    }
};

void function4(){
    Robot sofia("Sofia","Destruction Of Humanity");
}

// Create a Player class where each player has a name, health, and attack power. Use a constructor to initialize the player attributes.
class Player{
    string name;
    string health;
    int attackPower;
    public:
    Player(string name,string health,int attackPower){
        std::cout<<"Player : "<<name<<std::endl;
        std::cout<<"Health : "<<health<<std::endl;
        std::cout<<"Attack Power : "<<attackPower<<std::endl;
        this -> name = name;
        this -> health = health;
        this -> attackPower = attackPower;
        std::cout<<"The Player Is Created"<<std::endl;
    }
};
void function5(){
    Player amir("MD Amir","Full",140);
    std::cout<<endl;
    Player bumrah("Jasprit Bumrah","Full",130);
    std::cout<<endl;
    Player starc("Mitchel Starc","Full",135);
}

int main(){
    function5();
    return 0;
}