class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int> set{};

        for (int i = 0; i < arr.size(); i++) {
            set.insert(arr[i]);
            for (int j = i - 1; j >= 0; j--) {
                if ((arr[i] | arr[j]) == arr[j]) break;
                arr[j] |= arr[i];
                set.insert(arr[j]);
            }
        }
        return set.size();

    }
};