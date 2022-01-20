#pragma once
#include <string>
#include <iostream>
#include <algorithm>

template<typename T>
void sort(T arr[], int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = i+1; j<n; j++)
		{
			if (arr[i] > arr[j])
			{
				std::swap(arr[i], arr[j]);
			}
		}
	}
}

template<>
void sort<char>(char arr[], int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (tolower(arr[i]) > tolower(arr[j]))
			{
				std::swap(arr[i], arr[j]);
			}
		}
	}
}


