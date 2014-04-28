#include "stdafx.h"
#include "CppUnitTest.h"
#include "skip_spaces.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace code_playground_tests
{		
	TEST_CLASS(skip_spaces_test)
	{
	public:
		
		TEST_METHOD(general_test)
		{
			// ARRANGE
			std::string str(" aa bb ccc  ");

			// ACT
			std::string result;
			skip_spaces(str, result);

			// ASSERT
			Assert::AreEqual("aabbccc", result.c_str());
		}

	};
}