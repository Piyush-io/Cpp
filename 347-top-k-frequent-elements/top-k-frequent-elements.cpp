class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int, int> frequencyMap;

        for (int num : nums) {
            frequencyMap[num]++;
        }
        auto comparator = [](pair<int, int>& a, pair<int, int>& b) {
            return a.second > b.second;
        };
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(comparator)> pq(comparator);
        for (auto& pair : frequencyMap) {
            pq.push(pair);
            if (pq.size() > k) {
                pq.pop();
            }
        }
        while (!pq.empty()) {
            result.push_back(pq.top().first);
            pq.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};