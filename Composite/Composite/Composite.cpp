#include "Component.h"
#include "Composite.h"
#include <iostream>
//#define  NULL 0;

Composite::Composite()
{
//	vector<Component*>::iterator itend = comVec.begin();
}
Composite::~Composite()
{

}
void Composite::Operation()
{
	vector<Component*>::iterator comIter = comVec.begin();
	for (; comIter != comVec.end();++comIter)
	{
		(*comIter)->Operation();
	}
}
void Composite::Add(Component* com)
{
	comVec.push_back(com);
}
void Composite::Remove(Component* com)
{
//	comVec.erase(&com);
	vector<Component*>::iterator comIter = comVec.begin();
	for (; comIter != comVec.end(); ++comIter)
	{
		if (*comIter==com)
		{
			comVec.erase(comIter);
			break;
		}
	}
	std::cout << "delete com" << std::endl;
}
Component* Composite::GetChild(int index)
{
	return comVec[index];
}
