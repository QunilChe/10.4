#include "pch.h"
#include "CppUnitTest.h"
#include "../10.4/mult.h"
using namespace nsMult;
using namespace nsVar;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			mult(double** x, int n, int m, double** y, double** mt)
		}
	};
}
