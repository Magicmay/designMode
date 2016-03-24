#ifndef _FLYWEIGHT_H_
#define _FLYWEIGHT_H_
#include <string>
using namespace std;
class Flyweight
{
public:
	virtual ~Flyweight();
	virtual void operation(const string& extrinsicState);
	string GetIntrinsicsState();
protected:
	Flyweight(string intrinsicState);
private:
	string _intrinsicState;
};
class ConcreteFlyweight :public Flyweight
{
public:
	ConcreteFlyweight(string intrinsicState);
	~ConcreteFlyweight();
	void operation(const string& extrinsicState);
protected:

private:

};
#endif