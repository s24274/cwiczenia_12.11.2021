#include <iostream>

auto quicksort(int a[10], int l, int r) -> void
{
	int i = l; 
	int j = r;
	int x = a[( l + r ) / 2];
	
	do 
	{
		while( a[i] < x )
			i++;
			
		while( a[j] > x )
			j--;
			
		if ( i <= j )
		{
			x = a[i];
			a[i] = a[j];
			a[j] = x;
			i++;
			j--;
		
		} 
		
	}
		while (i <= j);
		
		if (j > l) quicksort(a, l, j);
		
		
		if (i < r) quicksort(a, i, r);
		
	
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
		
		quicksort(a, 0, n-1);
		
		for( i = 0; i < n; i++)
		{
			std::cout << a[i] << " ";
		}
return 0;
}
		
