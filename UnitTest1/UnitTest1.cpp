#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_1/Lab_05_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double a = 0.0;
			double expected = 1.0; // для a = 0: sin^2(0) + 0^2 + 1 = 1.0
			double actual = f(a);

			Assert::AreEqual(expected, actual, 1e-5);
		}
	};
}