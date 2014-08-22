#include "stdafx.h"
#include "CppUnitTest.h"
#include "string_manipulations.h"

#include <vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace code_playground_tests
{
	TEST_CLASS(string_manipulations_tests)
	{
	public:
		
		TEST_METHOD(reverse_test)
		{
			// ARRANGE
			const char * str = "abcde";
			std::vector<char> buffer(str, end(str) + 1);

			// ACT
			reverse(&buffer[0]);

			// ASSERT
			Assert::AreEqual("edcba", &buffer[0]);
		}

		TEST_METHOD(reverse_empty)
		{
			// ARRANGE
			const char * str = "";
			std::vector<char> buffer(str, end(str) + 1);

			// ACT
			reverse(&buffer[0]);

			// ASSERT
			Assert::AreEqual("", &buffer[0]);
		}

		TEST_METHOD(reverse_single)
		{
			// ARRANGE
			const char * str = "a";
			std::vector<char> buffer(str, end(str) + 1);

			// ACT
			reverse(&buffer[0]);

			// ASSERT
			Assert::AreEqual("a", &buffer[0]);
		}

	};
}