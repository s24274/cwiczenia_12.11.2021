#include <iostream>

auto asum(int a[10], int n) -> int 
{
	int suma = 0;
	
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
			for (int i = 0; i < n; i++)

				suma = suma + a[i];
return suma;
}
auto main() -> int 
{
	int a[10], n = 10, suma = asum(a,n);
	
	if (n <= 9 && n >= 0)
	{
		asum(a, n);
	}
		std::cout << suma; 
		std::cout << "\n";	
	
	
return 0;
}
