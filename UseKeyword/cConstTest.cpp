#include "pch.h"
#include "cConstTest.h"
#include <iostream>
#include <vector>


cConstTest::cConstTest()
{
}


cConstTest::~cConstTest()
{
}

void cConstTest::ConstTestFunc()
{
	char pointerValueTest[] = "hello";
	char *p = pointerValueTest;

	const char *p1 = pointerValueTest;
	char* const p2 = pointerValueTest;
	const char* const p3 = pointerValueTest;

	int a = 0;
	int aa = 10;
	int* b = &a;
	int* const c = &a;
	const int* d = &a;
	const int* const e = &a;

	//c = &aa; //int* const 는 포인터 주소값을 바꿀수 없다.
	*c = aa; // 포인터 주소가 가르키는 메모리에서 값변경 가능

	//*d = aa; // 포인터 주소가 가르키는 메모리에서 값변경 불가능
	d = &aa; //포인터 주소값 자체는 변경가능

	//e = &aa; // 둘다 불가능
	//*e = aa;

	std::vector<int> vec;
	const std::vector<int>::iterator iter = vec.begin(); //  int* const 와 비슷

	*iter = 10; // 포인터가 가르키는 메모리에서 변형가능
	//++iter; 주소값 변경 불가능

	std::vector<int>::const_iterator citer = vec.begin(); // const int*

	//*citer = 100; // 포인터가 가르키는 메모리 변형 불가능
	++citer; // 주소값 변경가능


	const std::vector<int>::const_iterator cciter = vec.begin();// const int* const

	//변형자체 불가능

}
