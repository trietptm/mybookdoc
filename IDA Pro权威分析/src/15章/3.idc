#include <idc.idc>//用来将当前光标地址放到文件中
static main(void)
{
	auto filename;
	auto addr;
	auto str;
	auto handlefile;
	filename = AskFile(1,"*.txt","请选择要存放代码的文件");
	if(filename == -1)
	{
		Message("cccccccc");
	}
	else
	{
		addr = ScreenEA();
		str = ltoa(addr,16);
		handlefile = fopen(filename,"a+");
		writestr(handlefile,str);
		fclose(handlefile);
	}
}