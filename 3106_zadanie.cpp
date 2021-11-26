#include <iostream>

auto search(int a[10], int n, int needle) -> int 
{		
	
	for (int i = 0; i < n; i++)
		{
			if (a[i]==needle)
			{
				return i;
			}
			else
				return -1;
			
		}
}

auto main() -> int 
{
int a[10], needle;

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
		
	std::cout << "Podaj liczbe: ";
	std::cin >> needle;
	
	int n = 10;
	int ind = search(a, n, needle);
		
	search(a, n, needle);
	
	if (ind == -1)
	{
		std::cout << "Nie ma takiego elementu.";
	}
	else  
		std::cout << ind << "\n";
		
return 0;
}
