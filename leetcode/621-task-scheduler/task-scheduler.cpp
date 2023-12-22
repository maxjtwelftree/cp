class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26, 0);
        for (char task : tasks) {
            freq[task - 'A']++;
        }

        vector<int> last_used(26, -n - 1); // Initialize last used time
        int time = 0;
        
        for (int processed = 0; processed < tasks.size(); ) {
            int taskIndex = -1;
            int maxFreq = 0;

            for (int i = 0; i < 26; ++i) {
                if (freq[i] > maxFreq && time - last_used[i] > n) {
                    taskIndex = i;
                    maxFreq = freq[i];
                }
            }

            if (taskIndex != -1) {
                freq[taskIndex]--;
                last_used[taskIndex] = time;
                processed++;
            }

            time++;
        }

        return time;
    }
};
  