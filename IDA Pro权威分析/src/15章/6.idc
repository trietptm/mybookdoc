#include <idc.idc>
static main()
{
	auto addr,addr1;
	
	
	
	addr = ScreenEA();
	addr1 = Rfirst(addr);

	Message("to %x\n",addr1);
	
	addr1 = RfirstB(addr);
	Message("from %x\n",addr1);
	addr1 = RnextB(addr,addr1);
	Message("from %x\n",addr1);
		addr1 = RnextB(addr,addr1);
	Message("from %x\n",addr1);
}