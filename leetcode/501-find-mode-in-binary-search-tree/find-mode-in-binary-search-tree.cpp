class Solution {
public:
    void dfs(TreeNode* root, vector<int>& track) { 
        if (root == NULL) {
            return;
        }
        track.push_back(root->val);
        dfs(root->left, track);
        dfs(root->right, track);
    }

    vector<int> findMode(TreeNode* root) {
        vector<int> track;
        dfs(root, track);
        vector<int> ans;
        if (ans.size() == 1) return ans;

        unordered_map<int, int> map;
        int check = 0;
        for (int i = 0; i < track.size(); i++) {
            map[track[i]]++;
            check = max(check, map[track[i]]);
        }

        for (auto i : map) {
            if (i.second == check) {
                ans.push_back(i.first);
            }
        }
        
        return ans;
    }
};