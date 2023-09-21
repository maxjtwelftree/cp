class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> map;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            map[arr[i]]++;
        }

        for (int i = 0; i < arr.size(); i++) {
            if (map[arr[i]] == 1) {
                k--;
                if (k == 0) {
                    return arr[i];
                }
            }
        }    
        return "";
    }
};