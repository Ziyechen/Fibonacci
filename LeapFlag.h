#pragma once

#include "Fibonacci.h"
//一只青蛙一次可以跳一级台阶，也可以跳两级。求一只青蛙跳上n级台阶总共有多少种跳法

long long LeapFlag(unsigned int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
	{
		//当n>2时，f(n) = f(n-1) + f(n-2)
		return Fibonacci_NonR(n);
	}
}
