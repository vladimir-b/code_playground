#include "stdafx.h"
#include "CppUnitTest.h"
#include "maximum_subarray_problem.hpp"

#include <vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace code_playground_tests
{
	TEST_CLASS(maximum_subarray_problem_tests)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// arrange
			std::vector<int> data = { 1, 2, -2, 10};

			// act 
			int result = maximum_subarray_problem(data.begin(), data.end());

			// assert
			Assert::AreEqual(11, result);
		}

	};
}