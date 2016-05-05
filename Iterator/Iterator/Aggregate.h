#pragma once
class Iterator;
typedef int Object;
class Interator;

class Aggregate
{
public:
	virtual ~Aggregate();
	virtual Iterator* createIterator() = 0;
	virtual Object getItem(int idx) = 0;
	virtual int getSize() = 0;
protected:
	Aggregate();
private:

};
class ConcreteAggregate :public Aggregate
{
public:
	enum{SIZE=3};

	ConcreteAggregate();
	~ConcreteAggregate();
	Iterator* createIterator();
	Object getItem(int idx);
	int getSize();
protected:

private:
	Object _objs[SIZE];
};