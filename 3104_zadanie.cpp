#include <iostream> 

auto amin(int a[10], int n) -> int 
{
	int min = a[0];
	
		a[0] = 42;
		a[1] = 9;
		a[2] = -1;
		a[3] = 18;
		a[4] = 59;
		a[5] = 3;
		a[6] = 101;
		a[7] = 31;
		a[8] = 72;
		a[9] = 12;

	
	for (int i = 1; i < n; i++)
	{
		if (min > a[i])
		{
				min = a[i];
		}
	}
return min;
}

auto main() -> int 
{
	int a[10], n = 10, min = amin(a, n);
	
	if (n <= 9 && n >= 0)
	{
		amin(a, n);
	}
	
	std::cout << min;
	std::cout << "\n";
	
return 0;
}
