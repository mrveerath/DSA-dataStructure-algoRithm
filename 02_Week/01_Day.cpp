#include <iostream>
#include <stdio.h>
#include <string>
#include <iomanip>
using namespace std;
// Create a Person class with properties like name, age, and address, and create a method to display this informationCreate a Person class with properties like name, age, and address, and create a method to display this information
class Person
{
public:
    string name;
    int age;
    string address;

    void displayInformation()
    {
        std::cout << "The Name Of The Person Is " << name << std::endl;
        std::cout << "The Person Is " << name << " Years Old" << std::endl;
        std::cout << "The Person Is From " << name << std::endl;
    }
};

int function1()
{
    Person p1;
    p1.name = "Pawan Kumar";
    p1.age = 23;
    p1.address = "Birgunj Parsa Nepal";
    p1.displayInformation();
    return 0;
}

// Write a Car class with attributes brand, model, and year, and a method to start the car.

class Car
{
public:
    string brand;
    string model;
    int year;
    void startCar()
    {
        std::cout << "The Car Is Starting..." << std::endl;
        std::cout << "The Car Is Starting..." << std::endl;
        std::cout << "The Car " << brand << " Model " << model << std::endl;
        std::cout << "The Car Is Running" << std::endl;
    }
};

void function2()
{
    Car car1;
    car1.brand = "Audi";
    car1.model = "Q1";
    car1.year = 2014;
    car1.startCar();
}

// Define a Book class with properties title, author, and price, and a method to print the details of the book.
class Book
{
public:
    string title;
    string author;
    double price;

    void showDetails()
    {
        std::cout << std::setw(30) << std::left << "Title"
                  << std::setw(20) << "Author"
                  << std::setw(15) << "Price"
                  << std::endl;
        std::cout << std::string(60, '-') << std::endl;
        std::cout << std::setw(30) << std::left << title
                  << std::setw(20) << author
                  << std::setw(15) << price
                  << std::endl;
    }
};

void function3()
{
    Book book1;
    book1.title = "The Alchemist";
    book1.author = "Paulo Coehlo";
    book1.price = 150;
    book1.showDetails();
}

// Create an Animal class with methods for basic actions like eat, sleep, and move.
class Animal
{
public:
    string name;
    void eat(string Food)
    {
        std::cout << "The " << name << " Is Eating...." << Food << std::endl;
    }
    void sleep()
    {
        std::cout << "The " << name << " Is Sleeping...." << std::endl;
    }
    void move()
    {
        std::cout << "The " << name << " Is Walking...." << std::endl;
    }
};

void function4()
{
    Animal A1;
    string food = "Padegree";
    A1.name = "Dog";
    A1.eat(food);
    A1.sleep();
    A1.move();
}

// Write a class Rectangle that has two attributes: length and width. Include methods to calculate the area and perimeter.
class Rectangle
{
public:
    int height;
    int breadth;
    int area()
    {
        return height * breadth;
    }
    int parameter()
    {
        return 2 * (height + breadth);
    }
};
void function5()
{
    Rectangle rect;
    rect.height = 15;
    rect.breadth = 40;
    int areaOfrect = rect.area();
    int parameterOfrect = rect.parameter();
    std::cout << "The Area Of The Rect Is " << areaOfrect << std::endl;
    std::cout << "The Parameter Of The Rect Is " << parameterOfrect << std::endl;
}

// Create a Student class with attributes for storing student information (name, roll number, etc.) and a method to calculate the average marks from a list of marks
class Student
{
    int totalmarks = 0;

public:
    string name;
    int rollNumber;
    int averageMarks = 0;
    int calculateAveragemarks(int arr[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            totalmarks = totalmarks + arr[i];
        }
        averageMarks = totalmarks / size;
        return 0;
    }
};

void function6()
{
    Student s1;
    s1.name = "Pawan Kumar";
    s1.rollNumber = 19087836;
    int arr[8]{78, 65, 89, 94, 97, 55, 88, 2};
    s1.calculateAveragemarks(arr, 8);
    int averageMarks = s1.averageMarks;
    std::cout << "The Average Marks Of " << s1.name << " is " << averageMarks << std::endl;
}

// Design a BankAccount class with properties for the account number, balance, and methods for deposit, withdrawal, and checking the balance.
class BankAccount
{
    string accountHolderName;
    int accountNumber;
    int startingBalance;
    int pinNum;
    int mainBalance;
    
public:
    void createBankAccount(string accountHolderName,
                           int accountNumber,
                           int startingBalance,
                           int pinNum)
    {
        this->accountHolderName = accountHolderName;
        this->accountNumber = accountNumber;
        this->startingBalance = startingBalance;
        this->pinNum = pinNum;
        this->mainBalance = startingBalance;
    }
    void checkBalance(int accountNumber, int pinNum)
    {
        if (this->accountNumber == accountNumber && this->pinNum == pinNum)
        {
            std::cout << "Your Main Balance Is " << mainBalance << std::endl;
        }
        else
        {
            std::cout << " Invalid Account Number Or Pin Number" << std::endl;
            return;
        }
    }
    void withdrawBalance(int accountNumber, int pinNumber, int withdrawAmount)
    {
        if (this->accountNumber == accountNumber && this->pinNum == pinNum)
        {
            std::cout << "Withdrawing Amount From The Main Balance" << std::endl;
            mainBalance = mainBalance - withdrawAmount;
            std::cout << "You Have Withdrawed " << withdrawAmount << " Amount" << std::endl;
        }
        else
        {
            std::cout << " Invalid Account Number Or Pin Number" << std::endl;
            return;
        }
    }
    void depositBalance(int accountNumber, int pinNumber, int depositAmount)
    {
        if (this->accountNumber == accountNumber && this->pinNum == pinNum)
        {
            std::cout << "Depositing Amount To The Main Balance" << std::endl;
            mainBalance = mainBalance + depositAmount;
            std::cout << "You Have Deposited " << depositAmount << " Amount" << std::endl;
        }
        else
        {
            std::cout << " Invalid Account Number Or Pin Number" << std::endl;
            return;
        }
    }
    void showAccountDetail(int accounNum, int pinNum){
        if (this->accountNumber == accountNumber && this->pinNum == pinNum){
            std::cout << std::setw(20) << std::left << "Account Number"
                  << std::setw(30) << "Holder Name"
                  << std::setw(15) << "Main Balance"
                  << std::setw(15) << "Starting Balance"
                  << std::endl;
        std::cout << std::string(60, '-') << std::endl;
        std::cout << std::setw(20) << std::left << accountNumber
                  << std::setw(30) << accountHolderName
                  << std::setw(15) << mainBalance
                  << std::setw(15) << startingBalance
                  << std::endl;
        }
    }
};

void function7(){
    string accountHolderName = "Pawan Kumar";
    int accountNumber = 1450;
    int startingBalance = 150000;
    int pinNum = 7296;
    BankAccount pawan;
    pawan.createBankAccount(accountHolderName,accountNumber,startingBalance,pinNum);
    pawan.showAccountDetail(accountNumber,pinNum);
    pawan.checkBalance(accountNumber,pinNum);
    int withdrawAmount = 40000;
    pawan.withdrawBalance(accountNumber,pinNum,withdrawAmount);
    pawan.checkBalance(accountNumber,pinNum);
    int depositAmount = 30000;
    pawan.depositBalance(accountNumber,pinNum,depositAmount);
    pawan.checkBalance(accountNumber,pinNum);
}

// Define a Laptop class with attributes for brand, model, RAM, and storage. Add methods to upgrade RAM and display laptop details.
class Laptop{
    public:
    string brand;
    string model;
    int ram;
    int storage;
    void upgradeLaptop(int ram){
        std::cout<<"This Is "<<brand<<" Laptop"
        <<" And Model Is "<<model
        <<" Having "<<ram<<" GB Ram And "
        <<storage<<" TB Sorage"<<std::endl;
        this -> ram = ram;
        std::cout<<"Now After Upgrade, This Is "<<brand<<" Laptop"
        <<" And Model Is "<<model
        <<" Having "<<ram<<" GB Ram And "
        <<storage<<" TB Sorage";
    }
};
void function8(){
    Laptop ios;
    ios.brand = "Apple";
    ios.model = "Mac Book";
    ios.ram = 16;
    ios.storage = 5;
    ios.upgradeLaptop(32);
}

// Write a Movie class with properties like title, genre, rating, and a method to print the movie details.
class Movie{
    public:
    string title;
    string genre;
    float rating;
    void pringMovieDetail(){
        std::cout<<"The Movie's Title Is "<<title<<std::endl;
        std::cout<<"The Movie's Genre Is "<<genre<<std::endl;
        std::cout<<"The Movie's Rating Is "<<rating<<std::endl;
    }
};

void function9(){
    Movie avengers;
    avengers.title = "Avengers:Endgame";
    avengers.genre = "Science Fiction";
    avengers.rating = 7.4;
    avengers.pringMovieDetail();
}

// Create a Bike class with methods to start and stop the bike. Add a method to check the current speed.
class Bike{
    public:
    int curSpeed = 0;
    void accelerate(int speed){
        std::cout<<"Speeding Up..."<<std::endl;
        curSpeed += speed;
    }
    void start(){
        curSpeed = 15;
        std::cout<<"The Bike Is Started Running"<<std::endl;
        std::cout<<"At Speed Of "<<curSpeed<<std::endl;
    }
    void stop(){
        curSpeed = 0;
        std::cout<<"The Bike Is Stopped"<<std::endl;
    }
    void currentSpeed(){
        if(curSpeed > 0){
            std::cout<<"Your Bike Is Running Smoothly..."<<std::endl;
            std::cout<<"Your Current Speed Is "<<curSpeed<<std::endl;
        }
        else{
            std::cout<<"Your Bike Is Not Running "<<std::endl;
        }
    }
};

void function10(){
    Bike yamaha;
    yamaha.start();
    yamaha.accelerate(10);
    yamaha.currentSpeed();
    yamaha.accelerate(10);
    yamaha.currentSpeed();
    yamaha.accelerate(10);
    yamaha.currentSpeed();
    yamaha.accelerate(10);
    yamaha.currentSpeed();
    yamaha.stop();
    yamaha.currentSpeed();
}

int main()
{
    function1();
    function2();
    function3();
    function4();
    function5();
    function6();
    function7();
    function8();
    function9();
    function10();
}
