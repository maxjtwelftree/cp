class MyHashMap {
private:
    vector<int> mapping;
public:
    MyHashMap() {mapping = vector<int>(1e6 + 1, -1);}   

    void put(int key, int value) {
        mapping[key] = value;
    }
    
    int get(int key) {
        return mapping[key];
    }
    
    void remove(int key) {
        mapping[key] = -1;
    }
};