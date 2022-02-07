#include "exercise1.h"
int main() {
 Beverage *pbeverage1;         //As it mentioned in the problem 5 Beverages , 4 Condiments
                            //First Drink
 pbeverage1 = new Tea();           
 pbeverage1 = new Sugar(pbeverage1);
 cout << pbeverage1->getDescription()<<endl;
 cout << pbeverage1->getCost()<< endl;
                            //Second Drink
 pbeverage1 = new Coffe();           
 pbeverage1 = new Milk(pbeverage1);
 cout << pbeverage1->getDescription()<<endl;
 cout << pbeverage1->getCost()<< endl;
 return 0;
}