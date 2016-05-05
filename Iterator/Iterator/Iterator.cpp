#include "Iterator.h"
#include "Aggregate.h"
#include <iostream>
using namespace std;

Iterator::Iterator()
{

}
Iterator::~Iterator()
{

}
ConcreteIterator::ConcreteIterator(Aggregate* ag, int idx /* = 0 */)
{
	this->_ag = ag;
	this->_idx = idx;
}
ConcreteIterator::~ConcreteIterator()
{

}
Object ConcreteIterator::CurrentItem()
{
	return _ag->getItem(_idx);
}
void ConcreteIterator::First()
{
	_idx = 0;
}
void ConcreteIterator::Next()
{
	if (_idx<_ag->getSize())
	{
		_idx++;
	}
}
bool ConcreteIterator::IsDone()
{
	return  (_idx == _ag->getSize());
}