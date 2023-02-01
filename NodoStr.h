#ifndef NODOSTR_H
#define NODOSTR_H
#include <string>

class NodoStr
{
	public:
		NodoStr();
		NodoStr(std::string,NodoStr*);

		std::string val;
		NodoStr *nex;
};
#endif  //NODOSTR_H
