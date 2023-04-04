#include <iostream>
#include <vector>
using std::vector;

//from - the start of the range 
//to - the end of the range
int BinarySearch(vector<int> arr, int el)
{
	int from = 0;
	int to = arr.size() - 1;

	while (from <= to)
	{
		unsigned mid = from + (to - from) / 2;

		if (arr[mid] == el)
		{
			return mid;
		}
		else if (arr[mid] > el)
			to = mid - 1;
		else
			from = mid + 1;
	}
	return -1;
}

int main()
{
	vector<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; //sorted array
	int result = BinarySearch(arr, 10);
	std::cout << "The searched number is on position: " << result << std::endl;
}
