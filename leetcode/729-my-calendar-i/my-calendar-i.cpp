struct MyCalendar {    
    vector<pair<int, int>> pairings{};
    bool book(int start, int end) {
        for (const auto& i : pairings) 
            if (max(i.first, start) < min(i.second, end)) 
                return false;
                
        pairings.emplace_back(start, end);
        return true;
    }
};