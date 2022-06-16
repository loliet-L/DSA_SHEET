class Solution {
public:
    int findMin(vector<int> &num) {
    if(num.empty()) return 0;
    int low = 0;
    int high = num.size() - 1;
    int mid;

    while(low < high) {
        mid = (low + high)/2;
        if(num[low]>num[mid]) {
            low++;
            high=mid;
        }
        else if(num[mid] > num[high]) {
            low = ++mid; 
        }
        else
            high = mid; 
    }

    return num[low];
}
};
