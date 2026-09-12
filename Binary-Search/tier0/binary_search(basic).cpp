


#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public: 

    int binarySearch(vector<int> &nums, int target, int low, int high){

        //base case
        if(low > high) return -1;


        // amazingly => mid = half of high + low = low + half of the distance b/w high and low. 
        int mid = low + (high - low)/2;

        // Found
        if(nums[mid] == target) return mid;

        // Search Left Space
        else if(nums[mid] > target){
            return binarySearch(nums, target, low, mid - 1);
        }

        // Search Right Space
        else{
            return binarySearch(nums, target, mid + 1, high);
        }
    }

    int Search(vector<int> &nums, int target){
        return binarySearch(nums, target, 0, nums.size() - 1);
    }
};


int main(){
    int n;
    cout << "Enter size of vector" << endl;
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements of vector" << endl;
    for(int i = 0; i < n ; i++){
        cin >> nums[i];
    }
    int target;
    cout << "Enter target element" << endl;
    cin >> target;

    Solution obj;

    int result = obj.Search(nums, target);

    if (result != -1)
    cout << "Target " << target << " found at index: " << result << endl;
    else
    cout << "Target " << target << " not found in the array." << endl;

    return 0;
}