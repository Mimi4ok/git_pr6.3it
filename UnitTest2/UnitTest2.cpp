#include "pch.h"
#include "CppUnitTest.h"
#include "../gitpr6.3it/gitpr6.3it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestSumSquaresIter
{
    TEST_CLASS(UnitTestSumSquaresIter)
    {
    public:

        TEST_METHOD(TestSumSquaresInt)
        {
            int a[] = { 1, 2, 3, 4, 5 };
            const int n = 5;

            int expected = 1 * 1 + 2 * 2 + 3 * 3 + 4 * 4 + 5 * 5;
            int result = SumSquares(a, n);

            Assert::AreEqual(expected, result);
        }

        TEST_METHOD(TestSumSquaresDouble)
        {
            double a[] = { 1.1, 2.2, 3.3 };
            const int n = 3;

            double expected = 1.1 * 1.1 + 2.2 * 2.2 + 3.3 * 3.3;
            double result = SumSquares<double>(a, n);

            Assert::AreEqual(expected, result, 1e-9);
        }
    };
}
