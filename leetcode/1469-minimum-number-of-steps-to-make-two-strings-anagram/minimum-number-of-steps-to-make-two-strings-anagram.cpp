struct Solution {
    [[nodiscard]] int minSteps(string s, string t) {
        array<int, 26> freqDiff{}; 

        for (char ch : s) freqDiff[ch - 'a']++;
        for (char ch : t) freqDiff[ch - 'a']--;

        int tracking = 0;

        for (int diff : freqDiff) {
            if (diff > 0) tracking += diff;
        }

        return tracking;
    }
};
