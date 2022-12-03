/**
 * @file HelloWorldsCpp.cpp
 * @author mango (2321544362@qq.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

//命名空间以及头文件
#define GAC_HEADER_USE_NAMESPACE
#include <GacUI.h>


void GuiMain()
{
    //新建程序窗口
	auto window = new GuiWindow(theme::ThemeName::Window);

    //设置属性
	window->SetText(L"Hello, world!");
	window->SetClientSize(Size(480, 320));
	window->GetBoundsComposition()->SetPreferredMinSize(Size(480, 320));
	window->MoveToScreenCenter();

	//添加label显示文本
	auto label = new GuiLabel(theme::ThemeName::Label);
	label->SetText(L"Welcome to GacUI Library!");
	{
		FontProperties font;
		font.fontFamily = L"Segoe UI";
		font.size = 32;
		font.antialias = true;
		label->SetFont(font);
	}
	window->AddChild(label);
    
    //运行
	GetApplication()->Run(window);
	delete window;
}