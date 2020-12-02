#include "pch.h"
#include "CppUnitTest.h"
#include "../Program/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(met_formt)
		{
			string str = "a*b+000000.1973- 1.0100";
			formt(str);
			Assert::AreEqual(str.c_str(), "a*b+0.19- 1.0100");
		}
	};
}
