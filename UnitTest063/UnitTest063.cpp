#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06.3/Lab_06.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        // ���������� ������� Create
        TEST_METHOD(TestMethodCreate)
        {
            const int SIZE = 10;
            int arr[SIZE];
            int Low = -10;
            int High = 10;
            Create(arr, SIZE, Low, High);  // �������� �����

            bool all_within_range = true;
            for (int i = 0; i < SIZE; i++) {
                if (arr[i] < Low || arr[i] > High) {
                    all_within_range = false;
                    break;
                }
            }
            Assert::IsTrue(all_within_range);  // ����������, �� �� �������� � ����� ��������
        }
    }
    ;
}