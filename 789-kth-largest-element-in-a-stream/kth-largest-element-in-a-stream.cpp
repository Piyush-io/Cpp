class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> buffer;
    int k_largest;
    
    KthLargest(int k, vector<int>& nums) {
        k_largest = k;
        for (int num : nums) {
            add(num);
        }
    }
    
    int add(int val) {
        if (buffer.size() < k_largest) {
            buffer.push(val);
        } else if (val > buffer.top()) {
            buffer.pop();
            buffer.push(val);
        }
        return buffer.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */