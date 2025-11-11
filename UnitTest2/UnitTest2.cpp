#include "pch.h"
#include "CppUnitTest.h"
#include "../gitpr6.3it/gitpr6.3it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestSumSquaresInt)
        {
            int a[5] = { 1, 2, 3, 4, 5 };
            int result = SumSquares(a, 5);
            Assert::AreEqual(55, result);
        }

        TEST_METHOD(TestSumSquaresTemplateInt)
        {
            int a[3] = { 2, 3, 4 };
            int result = SumSquares<int>(a, 3);
            Assert::AreEqual(29, result);
        }

        TEST_METHOD(TestSumSquaresTemplateDouble)
        {
            double a[3] = { 1.0, 2.0, 3.0 };
            double result = SumSquares<double>(a, 3);
            Assert::AreEqual(14.0, result, 1e-9);
        }
    };
}
