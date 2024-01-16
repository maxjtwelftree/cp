#include <vector>
#include <unordered_map>
#include <random>

class RandomizedSet {
    std::vector<int> vec;
    std::unordered_map<int, int> map;
    std::default_random_engine engine;

public:
    RandomizedSet() : engine(std::random_device{}()) {}

    bool insert(int val) {
        if (map.find(val) != map.end()) {
            return false;
        }
        vec.push_back(val);
        map[val] = vec.size() - 1;
        return true;
    }

    bool remove(int val) {
        if (map.find(val) == map.end()) {
            return false;
        }
        int lastElement = vec.back();
        map[lastElement] = map[val];
        vec[map[val]] = lastElement;
        vec.pop_back();
        map.erase(val);
        return true;
    }

    int getRandom() {
        std::uniform_int_distribution<int> distribution(0, vec.size() - 1);
        return vec[distribution(engine)];
    }
};
