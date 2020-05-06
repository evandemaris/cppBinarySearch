//Algorithm for performing a binary search through a sorted array.
//Binary search should provide O(logn) performance.
#include <iostream>
using namespace std;

//Function will require the integer array to search through, the length of the array, and the target value to search for. Optionally take a start value.
int BinarySearch(int myArray[], int arrayLength, int target, int left=0) {
	int midpoint;
	//Loop:
	if (arrayLength > 1) { //If there is more than one element
		midpoint = (arrayLength - 1 ) / 2 + 1;

		cout << midpoint << endl; //testing
		if (myArray[midpoint] == target) { return midpoint; }
		if (myArray[midpoint] < target) { return BinarySearch(myArray, arrayLength, target, midpoint); } //FIXME: midpoint for the recursive algorithm is using the full arraylength instead of [left..arrayLength]/2
		if (myArray[midpoint] > target) { return BinarySearch(myArray, arrayLength/2+1, target, left); }
	}
	return -1; //target is not in array.
}


//testing
int main() {
	int testArray[] = { 1,2,3,4,5 }; 
	int targ = 5; //works on 2,3,4. fails on 1,5
	cout << BinarySearch(testArray, sizeof(testArray) / sizeof(testArray[0]), targ); //sizeof used to find array length
}

