class Solution {
public:
    int countCharacters(vector<string>& words, string chars) 
    {
       unordered_map<char,int> mp;
       for(auto x : chars)
       {
           mp[x]++;
       } 


        int res = 0;
       for(int i = 0 ; i < words.size() ; i++)
       {     
           string curr = words[i];
           unordered_map<char,int> currcount;
           bool good = true;
           for(int j = 0 ; j < curr.length() ; j++)
           {
               currcount[curr[j]]++;
               if(currcount[curr[j]] > mp[curr[j]])
                {
                    good = false;
                    break;
                }
           }

           if(good == true) res += curr.length();
       }

       return res;
    }
};