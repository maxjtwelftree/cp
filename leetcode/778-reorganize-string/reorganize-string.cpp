class Solution {
public:
    string reorganizeString(string s) {
// Count character in hash by using for loop.
// Try to place most occurant in one go. If not return "".
// place other character with index gap. i=i+2

        unordered_map<char, int> map;
        for (char ch : s) {
            map[ch]++;
        }
        
        priority_queue<pair<int, char>> pq;
        for (auto pair : map) {
            pq.push({pair.second, pair.first});
        }
        
        int length = s.length();
        if (pq.top().first > (length + 1) / 2) {
            return "";
        }
       
        string result = "";
        while (!pq.empty()) {
            auto current = pq.top();
            pq.pop();
            
            result += current.second;
            length--;
            if (pq.empty()) {
                break;
            }
            
            auto next = pq.top();
            pq.pop();
            
            result += next.second;
            length--;
            
            if (current.first > 1) {
                pq.push({current.first - 1, current.second});
            }
            if (next.first > 1) {
                pq.push({next.first - 1, next.second});
            }
        }
        
        return result;
    }
};
