// Problem link - https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char, int> map;
       unordered_map<char, int> expected;

       if(s.size() > t.size() || t.size() > s.size())
            return false;

       for(char c : s){
           map[c]++;
       }

       for (char c : t) { 
           map[c]--;
        }

        for (auto& [key, value] : map) {
            if (value != 0) 
                return false;
        }

        return true;
    }
};

/* I can think of two approaches */
/*  -- 1. sort both and compare - (O (n+m) log (n+m))
    -- 2. hash-map O(n+m)
    -- add key-value pair as char and frequency for string s
    -- for string t, decrement for every character
    -- if any value is non-zero, either the char is non-existent
    -- or more so return false (beats Beats 97.86%of users with C++)
*/
