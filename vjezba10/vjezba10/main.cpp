#include <iostream>
#include "sortTemplate.h"
#include "stack.h"
using namespace std;

/*int main()
{
	int arr[] = {3,76,24,152,33,-5,9};
	char arr1[] = { 'A', 'a', 'b','z','r','F','a','l','N'};
	int n = sizeof(arr) / sizeof(arr[0]);
	sort(arr, n);
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << "\n\n";
	int m = sizeof(arr1) / sizeof(arr1[0]);
	sort(arr1, m);
	for (int i = 0; i < m; ++i)
	{
		cout << arr1[i] << " ";
	}

	return 0;
}
*/

int main()
{

	Stog<int> stog(10);

	stog.push(1);
	stog.push(10);
	stog.push(20);
	stog.push(30);
	stog.push(40);
	stog.push(50);


	std::cout << stog.pop() << "\n";
	std::cout << stog.pop() << "\n";
	std::cout << stog.pop() << "\n";
	std::cout << stog.pop() << "\n";
	std::cout << stog.pop() << "\n";
	stog.push(5);
	std::cout << stog.pop() << "\n";
	std::cout << stog.pop() << "\n";
	std::cout << stog.pop() << "\n";

	return 0;
}
