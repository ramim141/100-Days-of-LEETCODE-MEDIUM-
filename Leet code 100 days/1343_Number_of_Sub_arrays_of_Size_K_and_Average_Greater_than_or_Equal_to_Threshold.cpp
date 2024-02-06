
/*https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/*/

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        long long s = 0;
        long long cnt = 0;

        for (int i = 0; i < k; i++) {
            s += arr[i];
        }
        if (s / k >= threshold) cnt++;

        int i = 0, j = k; 
        while (j < arr.size()) {
            s -= arr[i];
            i++;
            s += arr[j];
            j++;
            if (s / k >= threshold) cnt++;
        }
        return cnt;
    }
};
