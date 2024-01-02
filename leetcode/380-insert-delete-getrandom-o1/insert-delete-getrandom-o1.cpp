#include <unordered_set>
#include <random>

struct RandomizedSet {
    std::unordered_set<int> random_set;

    mutable std::default_random_engine engine;
    mutable std::uniform_int_distribution<std::size_t> dist;

    RandomizedSet() : engine(std::random_device{}()) {}

    bool insert(int val) {
        return random_set.insert(val).second;
    }
    
    bool remove(int val) {
        return random_set.erase(val) > 0;
    }
    
    int getRandom() const {
        if (random_set.empty()) {
            throw std::runtime_error("Set is empty");
        }

        dist.param(std::uniform_int_distribution<std::size_t>::param_type(0, random_set.size() - 1));
        auto it = std::next(random_set.cbegin(), dist(engine));
        return *it;
    }
};
