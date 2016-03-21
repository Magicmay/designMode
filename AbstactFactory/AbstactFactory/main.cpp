#include "AbstractFactory.h"
#include "Product.h"
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	AbstractFactory* cf1 = new ConcreteFactory1();
	AbstractProductA *pa1=cf1->CreateProductA();
	AbstractProductB *pb1=cf1->CreateProductB();
	

	AbstractFactory* cf2 = new ConcreteFactory2();
	AbstractProductA *pa2=cf2->CreateProductA();
	AbstractProductB* pb2=cf2->CreateProductB();
	system("pause");
	return 0;
}