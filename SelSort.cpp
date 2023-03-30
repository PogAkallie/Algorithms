#include <iostream>
#include <vector>
#include <cstdlib>
using std::cout;
using std::vector;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

//Gets the position of the smallest element in a vector range.
//Returns the position of the smallest element in the range a[from]...a[to]
int minPosition(vector<int>& arr, int from, int to)
{
	int minPos = from;
	for (int i = from + 1; i <= to; i++)
	{
		if (arr[i] < arr[minPos])
			minPos = i;
	}
	return minPos;
}

//Sorts the vector
void SelectionSort(vector<int>& arr)
{
	/*int counter = 0;*/
	for (int nextPos = 0; nextPos < arr.size() - 1; nextPos++)
	{
		//finding the position of the minimum
		int minPos = minPosition(arr, nextPos, arr.size() - 1);
		if (minPos != nextPos)
		{
			swap(arr[minPos], arr[nextPos]);
			/*cout << "Swapped " << ++counter << " times";
			cout << "\n";*/
		}
	}
}

void print(vector<int> arr)
{
	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << " ";
	cout << "\n";
}

int main()
{
	vector<int> arr = { 2, 4, 1, 3, 5 };
	print(arr);
	SelectionSort(arr);
	print(arr);

	return 0;
}