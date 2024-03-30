class NumberContainers {
public:
    unordered_map<int, int> map;
    unordered_map<int, set<int>> indexs;

    NumberContainers() {}
    
    void change(int index, int number) {
        if (map.find(index) != map.end())
            indexs[map[index]].erase(index);
        map[index] = number;
        indexs[number].insert(index);
    }
    
    int find(int number) {
        if (indexs.find(number) != indexs.end()) {
            if (*indexs[number].begin() != 0) return *indexs[number].begin();
        }
        return -1;
    }
};