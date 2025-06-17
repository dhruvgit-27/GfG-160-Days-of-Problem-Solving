

// User function template in C++
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        unordered_set<int> unionSet;
        
        for (int num : a) {
            unionSet.insert(num);
        }
        
        for (int num : b) {
            unionSet.insert(num);
        }
        
        return unionSet.size();
        
    }
};