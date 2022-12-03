/**
 * @file GetVersionInfo.cpp
 * @author mango (2321544362@qq.com)
 * @brief get version infomation demo
 * @version 0.1
 * @date 2022-12-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "Version.h"

#include <iostream>

int main(int argc, char** argv)
{
    std::cout << "Git hash: " << vl::GetGacUIGitHash() << std::endl;
    std::cout << "Git branch: " << vl::GetGacUIGitBranch() << std::endl;
    std::cout << "GacUI version: " << vl::GetGacUIVersion() << std::endl;
    std::cout << "GacUI version major: " << vl::GetGacUIVersionMajor() << std::endl;
    std::cout << "GacUI version minor: " << vl::GetGacUIVersionMinor() << std::endl;
    std::cout << "GacUI version patch: " << vl::GetGacUIVersionPatch() << std::endl;

    return 0;    
}
