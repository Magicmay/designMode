#include "memento.h"
#include <iostream>
using namespace std;
int main()
{
	Originator* o = new Originator();
	o->SetState("old");
	o->PrintState();
	Memento* m = o->CreateMemento();
	o->SetState("new");
	o->PrintState();
	o->RestoreToMemento(m);
	o->PrintState();
	system("pause");
	return 0;
}