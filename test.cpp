#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <stdlib.h>
#include "Fibonacci.h"
#include "LeapFlag.h"
using namespace std;

void TestFibonacci()
{
	//功能测试
	//long long ret1 = Fibonacci_NonR(5);
	//long long ret2 = Fibonacci_NonR(10);

	//cout << "ret1 = " << ret1 << endl;
	//cout << "ret2 = " << ret2 << endl;

	//边界值测试
	long long ret1 = Fibonacci_NonR(0);
	long long ret2 = Fibonacci_NonR(1);
	long long ret3 = Fibonacci_NonR(1);

	cout << "ret1 = " << ret1 << endl;
	cout << "ret2 = " << ret2 << endl;
	cout << "ret3 = " << ret3 << endl;
}

void TestFibonacci_NonR()
{
	//功能测试
	//long long ret1 = Fibonacci_NonR(5);
	//long long ret2 = Fibonacci_NonR(10);

	//cout << "ret1 = " << ret1 << endl;
	//cout << "ret2 = " << ret2 << endl;

	//边界值测试
	//long long ret1 = Fibonacci_NonR(0);
	//long long ret2 = Fibonacci_NonR(1);
	//long long ret3 = Fibonacci_NonR(1);

	//cout << "ret1 = " << ret1 << endl;
	//cout << "ret2 = " << ret2 << endl;
	//cout << "ret3 = " << ret3 << endl;

	//性能测试
	long long ret1 = Fibonacci_NonR(50);
	long long ret2 = Fibonacci_NonR(100);

	cout << "ret1 = " << ret1 << endl;
	cout << "ret2 = " << ret2 << endl;
}

void TestLeapFlag()
{
	//功能测试
	//long long ret1 = Fibonacci_NonR(5);
	//long long ret2 = Fibonacci_NonR(10);

	//cout << "ret1 = " << ret1 << endl;
	//cout << "ret2 = " << ret2 << endl;

	//边界值测试
	long long ret1 = Fibonacci_NonR(0);
	long long ret2 = Fibonacci_NonR(1);
	long long ret3 = Fibonacci_NonR(1);

	cout << "ret1 = " << ret1 << endl;
	cout << "ret2 = " << ret2 << endl;
	cout << "ret3 = " << ret3 << endl;
}

int main()
{
	//TestFibonacci();
	//TestFibonacci_NonR();
	TestLeapFlag();

	system("pause");
	return 0;
}
