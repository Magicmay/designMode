#ifndef _STATE_H_
#define _STATE_H_

class Context;
class State
{
public:
	State();
	virtual ~State();
	virtual void OperationInterface(Context*) = 0;
	virtual void OperationChangeface(Context*) = 0;
protected:
	bool ChangeState(Context* con, State* st);
private:
	//bool Change(Context* con, State* st);
};
class ConcreteStateA : public State
{
public:
	ConcreteStateA();
	virtual ~ConcreteStateA();
	virtual void  OperationInterface(Context*);
	virtual void OperationChangeface(Context*);
protected:

private:

};
class ConcreteStateB : public State
{
public:
	ConcreteStateB();
	virtual ~ConcreteStateB();
	virtual void OperationInterface(Context*);
	virtual void OperationChangeface(Context*);
protected:

private:

};
#endif