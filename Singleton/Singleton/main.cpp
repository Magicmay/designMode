#include "Singleton.h"
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	Singleton* sgn = Singleton::Instance();
	Singleton* s = Singleton::Instance();
	system("pause");
	return 0;
}