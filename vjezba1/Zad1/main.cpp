#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	bool flag;
	std::cout << "unesi " << true << " - " << false << std::endl;
	std::cin >> flag;
	std::cout << std::noboolalpha << flag << std::endl;
	int a = 222;
	std::cout << "hex " << std::uppercase << std::hex << a << std::endl;
	std::cout << "dec " << std::right << std::dec << a << std::endl;
	std::cout << "oct " << std::oct << a << std::endl;
	double pi = 3.141592;
	std::cout << "pi = " << std::fixed << std::uppercase;
	std::cout << std::setprecision(17) << std::setw(20);
	std::cout << pi << std::endl;
}