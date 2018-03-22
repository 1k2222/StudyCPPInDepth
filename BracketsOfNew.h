#include "stdafx.h"
namespace BracketsOfNew
{
	class TestClass
	{
	public:
		TestClass()
		{
			std::cout << "TestClass 构造函数调用！" << std::endl;
		}

		~TestClass()
		{
			std::cout << "TestClass 析构函数调用！" << std::endl;
		}
	};

	struct TestStruct
	{
		TestStruct()
		{
			std::cout << "TestStruct 构造函数调用！" << std::endl;
		}

		~TestStruct()
		{
			std::cout << "TestStruct 析构函数调用！" << std::endl;
		}
	};

	inline void execute()
	{
		TestClass *pClass = nullptr;
		TestStruct *pStruct = nullptr;

		std::cout << "不带括号：pClass = new TestClass" << std::endl;
		pClass = new TestClass;
		delete pClass;
		std::cout << "带括号：pClass = new TestClass()" << std::endl;
		pClass = new TestClass();
		delete pClass;

		std::cout << "不带括号：pStruct = new TestStruct" << std::endl;
		pStruct = new TestStruct;
		delete pClass;
		std::cout << "带括号：pStruct = new TestStruct()" << std::endl;
		pStruct = new TestStruct();
		delete pClass;
	}
}