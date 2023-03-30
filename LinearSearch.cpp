#include <iostream>
#include <vector>
#include <cstdlib>
using std::cout;
using std::cin;
using std::vector;

int LinearSearch(vector<int> arr, int n)
{
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] == n)
			return i;
	}
	return -1;
}

void print(vector<int> arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int main()
{
	vector<int> arr = { 1,2,3,4,5,6 };
	print(arr);
	int num;
	cin >> num;
	int result = LinearSearch(arr, num);
	cout << "Found on position " << result << "\n";
	return 0;
}