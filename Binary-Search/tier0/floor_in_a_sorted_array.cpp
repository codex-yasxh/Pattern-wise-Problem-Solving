

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findFloor(vector<int>& arr, int x) {

        int low = 0;
        int high = arr.size() - 1;
        int ans = -1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (arr[mid] <= x) {
                ans = mid;        // possible floor
                low = mid + 1;   // search for a bigger valid one
            }

            else {
                high = mid - 1;
            }
        }

        return ans;
    }
};

int main(){
    int n;
    cout << "Enter size :" << endl;
    cin >> n;
    vector<int> arr(n);


    cout << "Enter total elements of vector" << endl;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    int x;
    cout << "Enter the target element" << endl;
    cin >> x;

    Solution obj;
    int result = obj.findFloor(arr, x);

    cout << "Floor Number is : " << result << endl;

}