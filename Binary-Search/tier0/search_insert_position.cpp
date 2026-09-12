

// lC problem - 35 
// problem link - https://leetcode.com/problems/search-insert-position/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution { 
    public:

    int searchInsertPosition(vector<int> &nums, int target){
        int low = 0, high = nums.size() - 1;

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) return high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};

int main(){
    int n;
    cout << "Enter total size : " << endl;
    cin >> n;
    vector<int> nums(n);


    cout << "Enter total elements of vector" << endl;
    for(int i = 0 ; i < n ; i++){
        cin >> nums[i];
    }

    int target;
    cout << "Enter the target element" << endl;
    cin >> target;

    Solution obj;
    int result = obj.searchInsertPosition(nums, target);
    cout << "Target element search found at " << result << endl;

}