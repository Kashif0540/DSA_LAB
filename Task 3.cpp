#include<iostream>
using namespace std;

template<typename A,typename B>
int linearSearch(A* arr, A key, B size) {
	for (B i = 0; i < size; ++i) {
		if (arr[i] == key)
			return i;
	}
	return -1;
}


template<typename A,typename B>
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
	int intArray[5] = { 64, 25, 12, 22, 11 };
	int intKey = 12;
	int intIndex = linearSearch<int,int>(intArray, intKey,5);
	printArray<int, int>(intArray, 5);
	printSearchResult<int,int>(intIndex, intKey);
	cout << endl << endl;

	// Test with a double array of size 4
	double floatArray[4] = { 3.14, 2.71, 1.62, 0.57 };
	double floatKey = 1.63;
	int floatIndex = linearSearch<double,int>(floatArray, floatKey,4);
	printArray<double, int>(floatArray, 4);
	printSearchResult<int,double>(floatIndex, floatKey);
	cout << endl << endl;

	// Test with a string array of size 4
	string stringArray[4] = { "apple", "orange", "banana", "grape" };
	string stringKey = "banana";
	int stringIndex = linearSearch<string,int>(stringArray, stringKey,4);
	printArray<string, int>(stringArray, 4);
	printSearchResult<int,string>(stringIndex, stringKey);

	cout << endl << endl;

	return 0;
}