#include <idc.idc>
static main()
{
	auto addr,text;
	addr = ScreenEA();
//	MakeComm(addr,"aaaaaaaa");

//	text = GetDisasm(addr);
	text = GetOpnd(addr,0);
	Message(text);
	
	
}