#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
bool containsDuplicate(vector<int>& nums){
    unordered_map<int , int> freq;
    
    for(int num : nums){
        freq[num]++;
        if (freq[num]<1);
        return true;
    }
    return false;

}
int main(){
    vector <int> nums= {1 , 2 , 3 , 4};

    if (containsDuplicate(nums))
    cout<<true;
    else
    cout<<false;



}

