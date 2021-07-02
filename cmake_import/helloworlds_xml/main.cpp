#define GAC_HEADER_USE_NAMESPACE
#include "HelloWorld.h"

using namespace vl::collections;
using namespace vl::stream;

void GuiMain()
{
	{
		FileStream fileStream(L"CppXml.bin", FileStream::ReadOnly);
		GetResourceManager()->LoadResourceOrPending(fileStream);
	}
	helloworld::MainWindow window;
	window.MoveToScreenCenter();
	GetApplication()->Run(&window);
}