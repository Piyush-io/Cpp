    class Solution {
    public:
        int leastInterval(vector<char>& tasks, int n) 
        {   
            std::ios::sync_with_stdio(false);
            std::cin.tie(nullptr);
            std::cout.tie(nullptr);
            if(n == 0) return tasks.size();
            unordered_map<char , int> count;
            int max_count = 0;
            int max_occurances = 0;
            for(auto x : tasks)
            {
                count[x]++;
                max_count = max(count[x] , max_count);
            }
            for(auto x : count)
            {
                if(x.second == max_count)
                    max_occurances++;
            }
            int empty_slots = (max_count-1) * (n - (max_occurances - 1));
            int remaining_tasks = tasks.size() - max_count * max_occurances;
            int idles = max(0 , empty_slots - remaining_tasks);
            return tasks.size() + idles;
        }
    };