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
#include "Version.h"

namespace vl
{
    const std::string gac_git_branch = "master";
    const std::string gac_git_hash = "cedfc03";
    const std::string gac_version_major = "1";
    const std::string gac_version_minor = "1";
    const std::string gac_version_patch = "3";
    const std::string gac_project_version = "1.1.3.0";


    std::string GetGacUIGitBranch()
    {
        return gac_git_branch;
    }

    
    std::string GetGacUIGitHash()
    {
        return gac_git_hash;
    }

    std::string GetGacUIVersionMajor()
    {
        return gac_version_major;
    }

    
    std::string GetGacUIVersionMinor()
    {
        return gac_version_minor;
    }

    std::string GetGacUIVersionPatch()
    {
        return gac_version_patch;
    }

    std::string GetGacUIVersion()
    {
        return gac_project_version;
    }
}//namespace vl

