//Algorithm for performing a binary search through a sorted array.
//Binary search should provide O(logn) performance.

using namespace std;

//Function will require the integer array to search through, the length of the array, and the target value to search for
int BinarySearch(int myArray[], int arrayLength, int target) {
	int left = 0; //Smallest value to search through, initialized to start of array
	int right = arrayLength-1; //Largest value to search through, initialized to end of array
	int midpoint;
	//Loop:
	if (right > 0) { //If there is more than one element
		midpoint = right / 2 + 1; //Assign the midpoint of the elements as the last index divided by two. Integer division may place this too low, as in 1/2=0, so add 1.
	}
	return -1; //target is not in array.
}