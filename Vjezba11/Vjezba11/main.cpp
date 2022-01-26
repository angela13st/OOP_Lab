#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
using std::copy;

void ReadFromFile(string fileName)
{
	ifstream f;
	f.open(fileName);
	
	try {
		if (!f.is_open())
		{
			string errorMsg = "File not found";
			throw errorMsg;
		}
	}
	catch (string err) {
		cout << "error : " << err << endl;;
	}

	int min, max;
	int greaterThan500 = 0;
	vector<int> numbers;
	istream_iterator<int> is(f), eos;
	copy(is, eos, back_inserter(numbers));
	min = numbers.at(0);
	max = numbers.at(0);
	for (int i = 0; i < numbers.size(); i++)
	{
		if (numbers.at(i) > 500)
			greaterThan500++;
		if (numbers.at(i) > max)
			max = numbers.at(i);
		if (numbers.at(i) < min)
			min = numbers.at(i);
	}
	for (int i = 0; i < numbers.size(); i++)
	{
		if (numbers[i] < 300)
		{
			numbers.erase(numbers.begin() + i);
			i--;
		}
		
	}
	sort(numbers.begin(), numbers.end(), greater<int>());
	cout << "Najmanji broj je: "<<min<<" najveci je: "<<max<<endl;
	cout << "Brojeva vecih od 500 je: " << greaterThan500<<endl;

	ostream_iterator<int> os(cout, " ");
	copy(numbers.begin(), numbers.end(), os);
	

}

int main()
{
	string txtName = "numbers.txt";
	ReadFromFile(txtName);

	return 0;
}