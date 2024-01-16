struct RandomizedSet {
    unordered_set<int> random_set;
    mutable default_random_engine engine;
    mutable uniform_int_distribution<size_t> dist;

    RandomizedSet() : engine(random_device{}()) {}

    bool insert(int val) {return random_set.insert(val).second;}
    
    bool remove(int val) {return random_set.erase(val) > 0;}
    
    int getRandom() const {
        dist.param(uniform_int_distribution<size_t>::param_type(0, random_set.size() - 1));
        auto it = next(random_set.cbegin(), dist(engine));
        return *it;
    }
};
