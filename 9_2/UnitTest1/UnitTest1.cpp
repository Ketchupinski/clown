#include "pch.h"
#include "CppUnitTest.h"
#include "../9_2/9_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Student* f = new Student[1];
			f->prizv = "John";
			f->mat = 5;
			f->fiz = 5;
			f->spec = KN;
			f->kurs = 5;
			f->prog = 5;
			f->avarage = 5;
			string prizv = "John";
			int ispec = 0;
			Specialnist special = (Specialnist)ispec;
			int res = BinSearch(f, 1, prizv, special, 5);
			Assert::AreEqual(0, res);
		}
	};
}
