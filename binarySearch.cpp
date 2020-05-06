//Algorithm for performing a binary search through a sorted array.
//Binary search should provide O(logn) performance.
#include <iostream>
using namespace std;

//Function will require the integer array to search through, the length of the array, and the target value to search for. Optionally take a start value.
int BinarySearch(int myArray[], int left, int right, int target) {
	//Loop:
	if (right >= 1) { //If there is more than one element
		int midpoint = (right - left ) / 2 + left; // midpoint is half of the given array length (right minus left), starting at the given leftmost value

		cout << midpoint << endl; //testing
		if (myArray[midpoint] == target) { return midpoint; }
		if (myArray[midpoint] < target) { return BinarySearch(myArray, midpoint, right, target); }
		if (myArray[midpoint] > target) { return BinarySearch(myArray, left, midpoint, target); }
	}
	return -1; //target is not in array.
}


//testing
int main() {
	int testArray[] = { 1,2,3,4,5 }; 
	int targ = 16; //fails for target too high
	cout << BinarySearch(testArray, 0, sizeof(testArray) / sizeof(testArray[0]), targ); //sizeof used to find array length - size of full array divided by size of each index
}

