#include <iostream> 

auto amax(int a[10], int n) -> int 
{
	int max = a[0];
	
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
		if (max < a[i])
		{
				max = a[i];
		}
	}
return max;
}

auto main() -> int 
{
	int a[10], n = 10, max = amax(a, n);

		amax(a, n);
	
	std::cout << max;
	std::cout << "\n";
	
return 0;
}
