#pragma once

//写一个函数，输入n，求菲波那切数列(Fibonacci)数列的第n项。
//菲波那切数列定义如下:
//				0		  ,n = 0
//	f(n) = {	1		  ,n = 1
//			f(n-1)+f(n-2) ,n > 1


//效率很低的写法，使用递归
long long Fibonacci(unsigned int n)
{
	if (n <= 0)
	{
		return 0;
	}

	if (n == 1)
	{
		return 1;
	}

	return Fibonacci(n - 1) + Fibonacci(n - 2);
}

//使用非递归
long long Fibonacci_NonR(unsigned int n)
{
	if (n == 0)
		return 0;
	else if (n <= 2)
		return 1;
	else
	{
		long long first = 1;
		long long second = 1;
		
		//num为返回值
		long long ret = 0;

		for (size_t i = 2; i < n; i++)
		{
			ret = first + second;
			first = second;
			second = ret;
		}

		return ret;
	}
}
