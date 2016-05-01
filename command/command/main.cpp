#include "Command.h"
#include "Invoker.h"
#include "Reciever.h"
#include <iostream>
int main()
{
/*	Reciever* rev = new Reciever();
	Command* cmd = new ConcreteCommand(rev);
	Invoker* inv = new Invoker(cmd);
	inv->Invoke();*/
	//·½·¨2
	Reciever* rev = new Reciever();
	Command* cmd = new SimpleCommand<Reciever>(rev, &Reciever::Action);
	cmd->Excute();
	system("pause");
	return 0;
}