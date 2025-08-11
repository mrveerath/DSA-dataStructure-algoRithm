#include<iostream>
#include<stdio.h>
using namespace std;

struct Node{

    int data;
    Node *next;

    Node(int d){
        this -> data= d;
        this ->next = nullptr;
    }
    ~Node(){
        
    }


};



int main(){
    return 0;
}
