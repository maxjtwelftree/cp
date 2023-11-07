class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        auto ans = 0;
        vector<float> arr;
        for (auto i = 0; i < dist.size(); i++) {
            arr.push_back((float) dist[i]/speed[i]);
        }

        sort(arr.begin(), arr.end());

        for (auto i = 0; i < arr.size(); ++i) {
            if (arr[i] <= i) {
                break;
            }
            ans++;
        }

        return ans;
    }
};