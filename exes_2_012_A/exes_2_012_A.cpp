#include <iostream>
using namespace std;

int nadila[18];
int low;
int high;

void BinarySearch()
{
	while (low <= high)
	{
		int mid = low + (high - low) / 2;
		if (nadila[18] == mid)
			return;
		if (nadila[18] > mid) {
			low = mid = 1;
		}
		if (nadila[18] < mid) {
			high = mid - 1;
		}
	}
	return -1;
}

int main()
{
	int nadila[] = { 6,5,9,10,8,20,18 };
	int n = 18;
	int result = (18, 0, n - 1, 20);
	if (result == -1) {
		cout << "nilai diterima";
	else
		cout << "nilai tidak ditemukan";
	return 0;
}


