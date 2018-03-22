#pragma once
#include "stdafx.h"
namespace TestMutableParameter
{
	template <typename ... T>
	void DummyWrapper(T... t) {}

	inline void printArg(){}

	template <typename T>
	void printArg(T x)
	{
		std::cout << "arg:" << x << std::endl;
	}

	template <typename ...Args>
	void printArgs_Comma(Args... args)
	{
		int arr[] = { (printArg(args), 0)... };
	}

	template <typename T>
	void printArgs_Recursive(T first)
	{
		std::cout << "arg:" << first << std::endl;
	}
	template <typename T, typename ...Args>
	void printArgs_Recursive(T first, Args... args)
	{
		printArg(first);
		printArgs_Recursive(args...);
	}

	inline void execute()
	{
		std::cout << "printArgs_Recursive:" << std::endl;
		printArgs_Recursive(3, 6, 7.8, 102, 'x', true);
		std::cout << "printArgs_Comma:" << std::endl;
		printArgs_Comma(3, 6, 7.8, 102, 'x', true);
	}
}