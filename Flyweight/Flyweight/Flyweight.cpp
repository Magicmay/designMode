#include "Flyweight.h"
#include <iostream>
using namespace std;
Flyweight::Flyweight(string intrinsicState)
{
	this->_intrinsicState = intrinsicState;
}
Flyweight::~Flyweight()
{

}
void Flyweight::operation(const string& extrinsicState)
{

}
string Flyweight::GetIntrinsicsState()
{
	return this->_intrinsicState;
}
ConcreteFlyweight::ConcreteFlyweight(string intrinsicState) :Flyweight(intrinsicState)
{
	cout << "ConcreteFlyweight Build...." << intrinsicState << endl;
}
ConcreteFlyweight::~ConcreteFlyweight()
{

}
void ConcreteFlyweight::operation(const string& extrinsicState)
{
	cout << "ConcreteFlyweight:ÄÚº¬[" << this << GetIntrinsicsState() << "] Íâº¬[" << extrinsicState << "]" << endl;
}