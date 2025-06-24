#pragma once
/**
 * @file	i_UREPONAME.h
 * @brief	REPO_BRIEF
 * @see     [项目工程](https://github.com/OWNER/DesignPatterns)
 * @see     [版本说明](https://xialgorithm.yuque.com/org-wiki-xialgorithm-dlvfmf/version_update/URL)
 * @see     [下载链接](https://xialgorithm.yuque.com/g/tmarbw/3rdparty/folder/URL)
 * @note    调用示例
 * @code{.cpp}
    #include <i_UREPONAME.h>

	xi::IDesignPatterns* p = xi::CreateIDesignPatternsObj();

	// do something ...

	xi::ReleaseIDesignPatternsObj(p);
 * @endcode
 * @author	gendloop
 */

// c++
#include <memory>

// local
#include "xi_export_TARGET.h"

class DesignPatterns;

XI_BEGIN_NAMESPACE

class IDesignPatterns {
public:
    XI_EXPORT_TARGET
	IDesignPatterns();
    XI_EXPORT_TARGET
	~IDesignPatterns();

private:
	std::unique_ptr<DesignPatterns> p_;
};

extern "C" {
	XI_EXPORT_TARGET IDesignPatterns* CreateIDesignPatternsObj();
	XI_EXPORT_TARGET void ReleaseIDesignPatternsObj(IDesignPatterns* obj);
}

XI_END_NAMESPACE
