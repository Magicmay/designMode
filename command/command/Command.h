#pragma once
class Reciever;
class Command
{
public:
	virtual ~Command();
	virtual void Excute() = 0;
protected:
	Command();
private:

};
class ConcreteCommand:public Command
{
public:
	ConcreteCommand(Reciever* rev);
	~ConcreteCommand();
	void Excute();
protected:

private:
	Reciever* _rev;
};
//��2���ûص���ֻ�Ǵ���򵥵�����
template <class Reciever>
class SimpleCommand :public Command
{
public:
	typedef void (Reciever:: *Action)();
	SimpleCommand(Reciever* rev, Action act)
	{
		_rev = rev;
		_act = act;
	}
	virtual void Excute()
	{
		(_rev->*_act)();
	}
	~SimpleCommand()
	{
		delete _rev;
	}
protected:

private:
	Reciever* _rev;
	Action _act;
};