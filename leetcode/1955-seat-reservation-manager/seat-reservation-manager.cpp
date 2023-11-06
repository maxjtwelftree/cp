class SeatManager {
public:
    priority_queue<int, vector<int>, greater<int>> seats;

    SeatManager(int n) {
        for (auto i = 1; i <= n; ++i) {
            seats.push(i);
        }
    }
    
    int reserve() {
        int number = seats.top();
        seats.pop();
        return number;
    }
    
    void unreserve(int seatNumber) {
        seats.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */