#include <idc.idc>
static main(void)
{
	auto addr,addr_end,funname;
	addr = ScreenEA();
	Message("%x\n",addr);
//	addr_end = GetFunctionAttr(addr,FUNCATTR_END);
//	Message("%x\n",addr_end);
//	Jump(addr_end);
	addr = addr + 3;
	funname = GetFunctionName(addr);
	Message("%s\n",funname);
}