#include <idc.idc>
static main()
{
//auto j;
	auto i,addr;
//	auto s;
//	addr = 0x004010D3;
//	
//	j = 0;
//	i = 0;
//	while(j < 3)
//	{
//		j++;
//		i = Byte(addr);	
//		addr++;
//			Message("%x\n",i);
//	}
//	
//Warning("aaaaaaaaaaaaaaaaaa\n");
//s = AskStr("title","content");
//Message("%s",s);
//s = AskFile(0,"*.idc","111");
//Message("%s\n",s);
//s = AskYN(0,"aaaaaaaaaaa");
//Message("%s\n",s);
addr = ScreenEA();
Message("%x",addr);
addr = addr + 0x20;
Jump(addr);
}