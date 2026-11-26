/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();

        // 1. Binary search for the peak index
        int low = 0, high = n - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (mountainArr.get(mid) < mountainArr.get(mid + 1)) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        int peak = low;

        // 2. Search the strictly increasing left half (returns minimum index first)
        int leftIdx = binarySearchAsc(mountainArr, target, 0, peak);
        if (leftIdx != -1) {
            return leftIdx;
        }

        // 3. Search the strictly decreasing right half
        return binarySearchDesc(mountainArr, target, peak + 1, n - 1);
    }

private:
    int binarySearchAsc(MountainArray &arr, int target, int low, int high) {
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int val = arr.get(mid);
            if (val == target) return mid;
            if (val < target) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }

    int binarySearchDesc(MountainArray &arr, int target, int low, int high) {
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int val = arr.get(mid);
            if (val == target) return mid;
            if (val > target) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }
};