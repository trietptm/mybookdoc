#include <idc.idc>
static main()
{
	auto str;
	str = "aaaaa";
	str = form("%s %s",str,"bb\n");
	Message(str);
	AskFile(0,"*.*","22");
}