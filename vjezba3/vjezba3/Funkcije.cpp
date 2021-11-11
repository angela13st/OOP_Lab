
#include <iostream>
#include <vector>
#include<string.h>
#include<algorithm>
#include "funkcije.h"
using namespace std;

void input(vector<int>& niz, int n)
{
	int tmp;
	//vector<int> novi(n);

	{
		cout << "Unesite " << n << " elemenata\n";
		for (int i = 0; i < n; i++)
		{
			cin >> tmp;
			niz.push_back(tmp);
		}
	}

}

void input(vector<int>& niz, int min, int max)
{
	int tmp;

	cout << "Unesite brojeve izmedu " << min << " i " << max << ": \n";
	cin >> tmp;
	while (tmp>=min && tmp<=max)
	{
		niz.push_back(tmp);
		cin >> tmp;
	}
}


void print(vector<int> print)
{
	for (int i = 0; i < print.size(); i++)
	{
		cout << print[i] << " ";

	}
	cout << "\n";

}

void novi(vector <int>& arr, vector <int>& arr2, vector <int>& arr3)
{
	int c;
	int n;
	n = arr.size();
	for (int i = 0; i < n; i++)
	{

		//c = count(arr2.begin(), arr2.end(), arr.at(i));
		
		if (count(arr2.begin(), arr2.end(), arr.at(i)) ==0)
		{
			arr3.push_back(arr.at(i));
		}
	}
	cout << endl;
}

void sortiran(vector <int>& arr)
{
	int n = arr.size();
	int sum = 0;
	sort(arr.begin(), arr.end());
	arr.insert(arr.begin(), 0);
	for (int i=0; i <n; i++)
	{
		sum += arr.at(i);
	}
	arr.push_back(sum);

}

/*void remove(vector <int>& arr)
{
	int n = arr.size();
	for (int i = n; i > 0; i--)
	{
		arr.pop_back();
	}
}
*/

void remove(vector <int>& arr, int n)
{
	arr.erase(arr.begin()+ n);
	
}

int substr(string str, string podstr)
{
	int n = 0;

	string::size_type pos = 0;
	
	while ((pos = str.find(podstr, pos)) != string::npos)
	{
		n++;
		pos += podstr.length();
	}

	return n;
}

void reversed(vector<string>& nizovi)
{
	int n = 0;
	string tmp;
	cout << "Koliko stringova zelite unijeti: ";
	cin >> n;
	cout << "Unesite stringove: ";

	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		reverse(tmp.begin(), tmp.end());
		nizovi.push_back(tmp);
		
	}
	sort(nizovi.begin(), nizovi.end());

}
