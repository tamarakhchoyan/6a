#include <iostream>
int main()
{
	const int n = 5;
	int i, a[n];
	for (i = 0; i < n; ++i)
		std::cin >> a[i];
	for(i=0;i<n;++i)
		if(a[i]>=0 && a[i]<10)
		{
			std::cout << a[i];
			break;
		}
	return 0;
}