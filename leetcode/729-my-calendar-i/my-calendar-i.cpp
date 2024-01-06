struct MyCalendar {    
    map<int, int> pairings{};
    bool book(int start, int end) {
        auto first = pairings.upper_bound(start);
        if (first == pairings.end() || end <= first->second) {
            pairings[end] = start;
            return true;
        }
        return false;
    }
};