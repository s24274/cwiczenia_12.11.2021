#include <iostream>

auto init(int a[], int n) -> void
{
	for (int i = 0; i <= n-1; i++)
	a[i] = 0;
}
auto main() -> int 
{
	int a[100], n;
	std::cout << "Podaj n:";
	std::cin >> n;
	
	if (n <= 100 && n > 0)
		init(a, n);
		
	for (int i = 0; i <= n - 1; i++)
	std::cout << a[i];
	std::cout << "\n";
	
return 0;
}
