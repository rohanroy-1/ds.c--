#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
class Solution {
public:
    bool isAnagram( string s , string t ) {

        if (s.length() != t.length ()) {
            return false;
        }
        unordered_map<char, int> freq;
        //count characters in s 
        for (char c : s) {
            freq[c]++;
        }
        //decrease count for characters in t
        for (char c : t) {
            freq[c]--;
            if (freq[c] < 0) {
                return false;
            }
        }
        return true;
    
        
    }
};


