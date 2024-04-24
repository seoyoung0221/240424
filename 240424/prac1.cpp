
#include <iostream>

int Add(int n1, int n2)
{
	return n1 + n2;
}

int Sub(int n1, int n2)
{
	return n1 - n2;
}

int Mul(int n1, int n2)
{
	return n1 * n2;
}

float Divide(int n1, int n2)
{
	float n_1 = n1;
	float n_2 = n2;

	return n_1 / n_2;
}

int main()
{
	std::cout << "2개의 숫자를 입력하세요.";
	int n1, n2;
	std::cin >> n1 >> n2;

	std::cout << Add(n1, n2) << "\n";
	std::cout << Sub(n1, n2) << "\n";
	std::cout << Mul(n1, n2) << "\n";
	std::cout << Divide(n1, n2) << "\n";

	return 0;
}

