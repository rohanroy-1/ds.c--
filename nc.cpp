//dublicate return true , else false 
#include <vector>
#include <unordered_map>
using namespace std;
class solution {
    public:
    bool containsdublicate(vector<int>&nums){
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
            if(freq[num]>1){
                return true;
            }
        }
        return false;
    }
};


