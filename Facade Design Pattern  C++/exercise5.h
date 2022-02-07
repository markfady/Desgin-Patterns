#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Sugar
{
public:
    void SugarMethod() { std::  cout<< "Sugar " << std::endl; }
};

class Coffee
{
public:
    void CoffeeMethod() { std::cout  << "Coffee opened" << std::endl; }
};
class Milk
{
public:
    void MilkMethod() { std::cout  << "Milk opened" << std::endl; }
};


class Facade
{
private: 
 Sugar  *Sug;  //Pointer To Class Amplifier &declaration.
 Coffee  *Coff;  //Pointer To Class Amplifier&declaration.
    Milk  *mil;  //Pointer To Class Amplifier &declaration.

 

public:
    Facade()
    {
        Sug = new Sugar(); //object from class Amplifier.
        Coff = new Coffee(); //object from class Projector.
        mil= new Milk();
    }
    void MethodA()
    {
        std::cout << "Calling Two Functions Using one Method" << std::endl;
        Sug->SugarMethod(); //Access Method Amplifier using "->"" Because it is pointer.
        Coff->CoffeeMethod(); //Access Method Projector using "->"" Because it is pointer.
        mil->MilkMethod();

    }


};


