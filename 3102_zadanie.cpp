#include <iostream>

auto iota(int a[], int n, int start) -> void
{
	int s;
	s = start;
	
	for (int i = 0; i <= n-1; i++)
		{
			a[i] = s; 
			s++;	
		}
}
auto main() -> int 
{
	int a[100], n, start;
	std::cout << "Podaj n:";
	std::cin >> n;
	std::cout << "Podaj liczbe, od ktorej chcesz zaczac: ";
	std::cin >> start;
	
	if (n <= 100 && n > 0)
		iota(a, n, start);
		
	for (int i = 0; i <= n - 1; i++)
	std::cout << a[i] << " ";
	std::cout << "\n";
	
return 0;
}
