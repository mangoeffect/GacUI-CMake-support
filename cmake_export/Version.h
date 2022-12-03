/**
 * @file Version.h
 * @author mango (2321544362@qq.com)
 * @brief export GacUI version's info
 * @version 0.1
 * @date 2022-12-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef GACUI_EXPORT_VERSION_H
#define GACUI_EXPORT_VERSION_H

#include <string>

namespace vl
{
    std::string GetGacUIGitBranch();

    std::string GetGacUIGitHash();

    std::string GetGacUIVersionMajor();

    std::string GetGacUIVersionMinor();

    std::string GetGacUIVersionPatch();

    std::string GetGacUIVersion();

}//namespace vl

#endif //GACUI_EXPORT_VERSION_H
