#include "NodoStr.h"

NodoStr::NodoStr()
{
    val="";
	nex=nullptr;
	//ctor
}

NodoStr::NodoStr(std::string val,NodoStr *nex)
{
	this->val=val;
	this->nex=nex;
}
