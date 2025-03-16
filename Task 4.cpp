#include<iostream>
using namespace std;

template<typename A, typename B>
int binarySearch(A* arr, A key, B size) {

	B low = 0;
	B high = size - 1;
	B mid;

		while (low <= high) {
			mid = high + low / 2;
			if (arr[mid] == key)
				return mid;
			else if (arr[mid] < key)
				low = mid + 1;
			else
				high = mid - 1;
		}
	
	return -1;
	
}


template<typename A, typename B>
void printSearchResult(A index, B key) {
	if (index == -1)
		cout << "The element " << key << " is not present in the array." << endl;
	else
		cout << "The element " << key << " is found at index " << index << " ." << endl;
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
	int intArray[5] = { 11,12,22,25,64, };
	int intKey = 12;
	int intIndex = binarySearch<int, int>(intArray, intKey, 5);
	printArray<int, int>(intArray, 5);
	printSearchResult<int, int>(intIndex, intKey);
	cout << endl << endl;

	// Test with a double array of size 4
	double floatArray[4] = {  0.57,1.62,2.11,3.14, };
	double floatKey = 1.63;
	int floatIndex = binarySearch<double, int>(floatArray, floatKey, 4);
	printArray<double, int>(floatArray, 4);
	printSearchResult<int, double>(floatIndex, floatKey);
	cout << endl << endl;

	// Test with a string array of size 4
	string stringArray[4] = { "apple", "banana", "grape", "orange" };
	string stringKey = "banana";
	int stringIndex = binarySearch<string, int>(stringArray, stringKey, 4);
	printArray<string, int>(stringArray, 4);
	printSearchResult<int, string>(stringIndex, stringKey);


	return 0;
}