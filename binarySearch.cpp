//Algorithm for performing a binary search through a sorted array.
//Binary search should provide O(logn) performance.

using namespace std;

//Function will require the integer array to search through, the length of the array, and the target value to search for. Optionally take a start value.
int BinarySearch(int myArray[], int arrayLength, int target, int left=0) {
	int midpoint;
	//Loop:
	if (arrayLength > 1) { //If there is more than one element
		midpoint = arrayLength / 2 + 1; //Assign the midpoint of the elements as the last index divided by two. Integer division may place this too low, as in 1/2=0, so add 1.
		if (myArray[midpoint] == target) { return midpoint; }
		if (myArray[midpoint] < target) { BinarySearch(myArray, arrayLength, target, midpoint); }
		if (myArray[midpoint] > target) { BinarySearch(myArray, arrayLength/2+1, target, left); }
	}
	return -1; //target is not in array.
}