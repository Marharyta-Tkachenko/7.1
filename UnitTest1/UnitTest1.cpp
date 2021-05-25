#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Student\ Tkachenko.Marharyta.IK11\Lab_7.1\Lab_7.1\7.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			vector<int> a = { 3, -5, 23, 0, 4 };
			auto min = *std::min_element(a.begin(), a.end(), myfn);
			Assert::AreEqual(min, -5);
		}
	};
}
