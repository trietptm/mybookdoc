#include <idc.idc>//��������ǰ����ַ�ŵ��ļ���
static main(void)
{
	auto filename;
	auto addr;
	auto str;
	auto handlefile;
	filename = AskFile(1,"*.txt","��ѡ��Ҫ��Ŵ�����ļ�");
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