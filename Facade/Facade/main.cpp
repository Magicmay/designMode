#include "Facade.h"
#include <iostream>
int main(int argc, char* argv[])
{
	Facade* f = new Facade();
	f->OperationWrapper();
	system("pause");
	return 0;
}