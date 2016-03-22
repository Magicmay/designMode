#include "Prototype.h"
#include <iostream>
using namespace std;

Prototype::Prototype()
{

}
Prototype::~Prototype()
{

}
Prototype* Prototype::Clone() const
{
	return 0;
}
ConcretePrototype::ConcretePrototype()
{
	cout << "consrtuct..." << endl;
}
ConcretePrototype::ConcretePrototype(const ConcretePrototype& cp)
{
	cout << "ConcretePrototype copy..." << endl;
}
Prototype* ConcretePrototype::Clone() const
{
	return new ConcretePrototype(*this);
}
ConcretePrototype::~ConcretePrototype()
{

}