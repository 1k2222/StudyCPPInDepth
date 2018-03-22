#include "stdafx.h"
namespace BracketsOfNew
{
	class TestClass
	{
	public:
		TestClass()
		{
			std::cout << "TestClass ���캯�����ã�" << std::endl;
		}

		~TestClass()
		{
			std::cout << "TestClass �����������ã�" << std::endl;
		}
	};

	struct TestStruct
	{
		TestStruct()
		{
			std::cout << "TestStruct ���캯�����ã�" << std::endl;
		}

		~TestStruct()
		{
			std::cout << "TestStruct �����������ã�" << std::endl;
		}
	};

	inline void execute()
	{
		TestClass *pClass = nullptr;
		TestStruct *pStruct = nullptr;

		std::cout << "�������ţ�pClass = new TestClass" << std::endl;
		pClass = new TestClass;
		delete pClass;
		std::cout << "�����ţ�pClass = new TestClass()" << std::endl;
		pClass = new TestClass();
		delete pClass;

		std::cout << "�������ţ�pStruct = new TestStruct" << std::endl;
		pStruct = new TestStruct;
		delete pClass;
		std::cout << "�����ţ�pStruct = new TestStruct()" << std::endl;
		pStruct = new TestStruct();
		delete pClass;
	}
}