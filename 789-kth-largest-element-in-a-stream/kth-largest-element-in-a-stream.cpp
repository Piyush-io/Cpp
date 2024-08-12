class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> min_heap;
    int k_largest ;
    KthLargest(int k, vector<int>& nums) {
        k_largest = k;
        for (int num : nums) {
            add(num);
        }
    }
    
    int add(int val) {
        if (min_heap.size() < k_largest) {
            min_heap.push(val);
        } else if (val > min_heap.top()) {
            min_heap.pop();
            min_heap.push(val);
        }
        return min_heap.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */