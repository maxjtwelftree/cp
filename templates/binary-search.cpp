// Title: Binary Search Function
// Parameters: arr, target
// Returns: Index of the target element if it exists in the array, -1 otherwise
// Description: Performs a binary search on a sorted array to find a given target element
// Example: Finding a word in a dictionary
// Time Complexity = O(nlogn)
// Space Complexity = O(1)

int binarySearch(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Target found at index mid
        } else if (arr[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }
    return -1; // Target not found
}
