#pragma once
#include "stdafx.h"
namespace TestTemplateStruct
{
	template <typename T>
	struct TestStruct
	{
		T data;
	};


	inline void execute()
	{
		TestStruct<double> s;
		s.data = 8.88;
		std::cout << "s.data = " << s.data << std::endl;
	}
}
