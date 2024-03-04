struct Solution {
    [[nodiscard]] int bagOfTokensScore(vector<int>& tokens, int power) {
        int scoring_updater = 0, final_score = 0;
        int start = 0, back = tokens.size() - 1;
        sort(tokens.begin(), tokens.end());

        while (start <= back) {
            if (power >= tokens[start]) {
                power -= tokens[start++];
                scoring_updater++;
                final_score = max(final_score, scoring_updater);
            } else if (scoring_updater > 0) {
                power += tokens[back--];
                scoring_updater--;
            } else {
                break;
            }
        }

        return final_score;
    }
};