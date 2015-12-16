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

#endif // END DLLPATH_H_
