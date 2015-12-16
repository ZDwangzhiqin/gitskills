#pragma once

#ifndef DLLPATH_H_
#define DLLPATH_H_

#include <string>
#include <functional>
#include <Windows.h>
#include <vector>
#include <ShlObj.h>

#ifdef DLLPATH_EXPORTS
#	define DLLPATH_API _declspec(dllexport)
#else
#	define DLLPATH_API _declspec(dllimport)
#endif

struct FileParam{
	std::wstring m_fileName;
	std::wstring m_filePath;
};
struct SearchParam{
	std::wstring m_path;
	std::vector<std::wstring> m_fileTypes;
	int m_depth;
};
#endif // END DLLPATH_H_
