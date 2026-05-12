//O(logn)

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> nums, int target){
    int left = 0; 
    int right = nums.size() - 1;

    while(left <= right){
        int mid = (left + right) / 2;

        if(target < nums[mid]){
            right = mid -1;
        } 
        else if (target > nums[mid]){
            left = mid +1;
        }
        else {
            return mid;
        }
    }
    return -1; //not found
}

int main() {
    vector<int> nums = {1,3,4,5,6,7,9,9,10};

    cout << binarySearch(nums, 9) << endl;

    return 0;

}