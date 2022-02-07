#include <string>
#include <iostream>
using namespace std;       //Using Decorator Design Pattern
class Beverage
{
private:
    double cost;
    string description;

public:
    Beverage() {}
    virtual string getDescription(){};
    virtual double getCost(){};
};
class Tea : public Beverage                   //5 Beverages As it is mentioned in the question
{
private:
    double cost = 2;
    string description = "Tea";

public:
    Tea() {}
    string getDescription() { return this->description; }
    double getCost() { return this->cost; }
};


class Lemonade : public Beverage
{
private:
    double cost = 2;
    string description = "Lemonade";

public:
    Lemonade() {}
    string getDescription() { return this->description; }
    double getCost() { return this->cost; }
};



class Icedtea : public Beverage
{
private:
    double cost = 2;
    string description = "Icedtea";

public:
    Icedtea() {}
    string getDescription() { return this->description; }
    double getCost() { return this->cost; }
};

class HotChocolate : public Beverage
{
private:
    double cost = 2;
    string description = "HotChocolate";

public:
    HotChocolate() {}
    string getDescription() { return this->description; }
    double getCost() { return this->cost; }
};


class Coffe : public Beverage
{
private:
    double cost = 2;
    string description = "Coffe";

public:
    Coffe() {}
    string getDescription() { return this->description; }
    double getCost() { return this->cost; }
};





class Condiment : public Beverage
{
private:
    Beverage *pbev;
    string description;
    double cost;

public:
    Condiment() {}
    ~Condiment(){};
    virtual string getDescription(){};
    virtual double getCost(){};
};
class Sugar : public Condiment        //This Class For Wraping around the Beverage with Condiment
{ 
private:
    Beverage *pbev;
    double cost = 1;
    string description = "With Sugar";

public:
    Sugar(Beverage *pbeverage1)
    {
        this->pbev = pbeverage1;
    }
    string getDescription() { return pbev->getDescription() +
                                     description; }
    double getCost() { return 1 + pbev->getCost(); }
};
class Milk : public Condiment        //This Class For Wraping around the Beverage with Condiment
{ 
private:
    Beverage *pbev;
    double cost = 1;
    string description = "With Milk";

public:
    Milk(Beverage *pbeverage1)
    {
        this->pbev = pbeverage1;
    }
    string getDescription() { return pbev->getDescription() +
                                     description; }
    double getCost() { return 1 + pbev->getCost(); }
};
class BrownSugar : public Condiment        //This Class For Wraping around the Beverage with Condiment
{ 
private:
    Beverage *pbev;
    double cost = 1;
    string description = "With BrownSugar";

public:
    BrownSugar(Beverage *pbeverage1)
    {
        this->pbev = pbeverage1;
    }
    string getDescription() { return pbev->getDescription() +
                                     description; }
    double getCost() { return 1 + pbev->getCost(); }
};
class Realcream : public Condiment        //This Class For Wraping around the Beverage with Condiment
{ 
private:
    Beverage *pbev;
    double cost = 1;
    string description = "With Realcream";

public:
    Realcream(Beverage *pbeverage1)
    {
        this->pbev = pbeverage1;
    }
    string getDescription() { return pbev->getDescription() +
                                     description; }
    double getCost() { return 1 + pbev->getCost(); }
};