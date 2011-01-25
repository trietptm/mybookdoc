#include <idc.idc>
static main()
{
	auto addr,file,str,namefun;
	addr = ScreenEA();
	namefun = NameEx(addr,addr);
	Message("%s\n",namefun);
}