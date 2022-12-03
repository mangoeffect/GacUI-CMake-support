#define GAC_HEADER_USE_NAMESPACE
#include "HelloWorld.h"

using namespace vl::collections;
using namespace vl::stream;

void GuiMain()
{
	{

#ifdef	CPP_XML_BIN
		FileStream fileStream(CPP_XML_BIN, FileStream::ReadOnly);
#else
		FileStream fileStream(L"CppXml.bin", FileStream::ReadOnly);
#endif 
		GetResourceManager()->LoadResourceOrPending(fileStream);
	}
	helloworld::MainWindow window;
	window.MoveToScreenCenter();
	GetApplication()->Run(&window);
}