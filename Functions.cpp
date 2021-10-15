#include <iostream>
using namespace std;


int largest(int arr[], int n)
{
	int i;

	int max = arr[0];

	for (i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];

	return max;
}

int smallest(int arr[], int n)
{
	int i;

	int min = arr[0];

	for (i = 1; i < n; i++)
		if (arr[i] < min)
			min = arr[i];

	return min;
}

int main()
{
	int array[5];
	cout << "input five elements for your array" << endl;
	for (int i = 0; i < 5; i++) {
		cin >> array[i];
	}
	cout << "inputted array" << endl;
	for (int i = 0; i < 5; i++) {
		cout << array[i] << " ";
	}
	cout << endl << "input 0 for the minimum element, or input 9 for the maximum element" << endl;

	int input;
	cin >> input;
	if (input == 9) {
		cout << largest(array, 5);
	}
	else if (input == 0) {

		cout << smallest(array, 5);
	}
	else {

	}


	return 0;
}