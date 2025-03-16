#include<iostream>
using namespace std;

template<typename A, typename B>
void selectionSort(A* arr, B size) {

	for (B i = 0; i < size - 1; ++i) {
		for (B j = i + 1; j < size; ++j) {
			if (arr[i] > arr[j]) {
				A temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

template<typename A, typename B>
void printArray(A* arr, B size) {

	for (B i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}

	cout << endl;

}

int main() {

	// Test with an integer array of size 5
	int intArray[5] = { 64, 25, 12, 22, 11 };

	cout << "Original integer array: ";
	printArray<int, int>(intArray, 5);

	selectionSort<int, int>(intArray, 5);

	cout << "Sorted integer array: ";
	printArray<int, int>(intArray, 5);


	// Test with a string array of size 4
	string stringArray[4] = { "apple", "orange", "banana", "grape" };

	cout << "\nOriginal string array: ";
	printArray<string, int>(stringArray, 4);

	selectionSort<string, int>(stringArray, 4);

	cout << "Sorted string array: ";
	printArray<string, int>(stringArray, 4);


	system("pause");
	return 0;
}