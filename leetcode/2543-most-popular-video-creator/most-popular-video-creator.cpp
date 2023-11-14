class Solution {
public:
    using i64 = long long;
    struct mynameismaxt{
        i64 cnt = 0;
        string check;
        i64 view = 0;
    };

    vector<vector<string>> mostPopularCreator(vector<string>& creators, vector<string>& ids, vector<int>& views) {
        i64 sum = 0;
        unordered_map<string, mynameismaxt> mapping;

        for (int i = 0; i < creators.size(); ++i) {
            if (!mapping.count(creators[i])) {
                mapping[creators[i]] = {
                    views[i],
                    ids[i],
                    views[i]
                };
                sum = max(sum, mapping[creators[i]].cnt);
                continue;
            }
            mapping[creators[i]].cnt += views[i];
            if (mapping[creators[i]].view < views[i] || mapping[creators[i]].view == views[i] && ids[i] < mapping[creators[i]].check) {
                mapping[creators[i]].view = views[i];
                mapping[creators[i]].check = ids[i];
            }

            sum = max(sum, mapping[creators[i]].cnt);
        }

        vector<vector<string>> out;
        for (auto& i : mapping) {
            if (i.second.cnt == sum) {
                out.push_back({i.first, i.second.check});
            }
        }

        return out;
        
    }
};