#include <iostream>

int main()
{
	int lucky_numbers[] = { 4,7,47,74,44,444,447,474,477,777,774,744 };
	int n, count = 0;
	std::cin >> n;
	for (int i = 0; i < sizeof(lucky_numbers)/sizeof(lucky_numbers[0]); i++)
		if(n % lucky_numbers[i] == 0)
            count++;
	if(count > 0)
        std::cout << "YES" << std::endl;
	else
        std::cout << "NO" << std::endl;

	return 0;
}