#include <iostream>

auto sort_desc(int a[10], int n) -> void
{
	int temp, j;
	n = 10;
	
	for( int i = 1; i < n; i++)
	{
		temp = a[i];
		
		for( j = i - 1; j >= 0 && a[j] < temp; j--)
		{	
			a[j + 1] = a[j];
			a[j] = temp;
		}
	}
}				
auto main() -> int 
{
	int a[10], i, n = 10;
		
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
		
		sort_desc(a, n);
		
		for( i = 0; i < n; i++)
		{
			std::cout << a[i] << " ";
		}
return 0;
}
