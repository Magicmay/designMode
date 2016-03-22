#include "Adapter.h"
#include <iostream>
using namespace std;
int main(int argc, char*argv[])
{
//	Adapter* adt = new Adapter();
	Target* adt = new Adapter();//one
	adt->Request();
/*	Adaptee* ade = new Adaptee;
	Target* adt = new Adapter(ade);//two
	adt->Request();*/
	system("pause");
	return 0;
}