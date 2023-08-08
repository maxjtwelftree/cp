class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // initalizing a hashmap
        // <element, frequenct >
        unordered_map<int, int> freq;

        // iterating over the nums array
        for (int i = 0; i < nums.size(); i++) {
            // incremeting the elements count
            freq[nums[i]]++;
        }

        // initalize our array we can sort
        // array of pairs <frequency, element>
        vector<pair<int,int>> temp;
        for(auto [element, frequency] : freq) {
            temp.push_back({frequency, element});
        }

        // sort in descending order (highest freq to lowest)
        sort(temp.begin(), temp.end());
        reverse(temp.begin(),temp.end());

        // final store just of element
        vector<int> out;
        for(int i = 0; i < k; i++) {
            out.push_back(temp[i].second);
        }

        return out;
         
        
    }
};