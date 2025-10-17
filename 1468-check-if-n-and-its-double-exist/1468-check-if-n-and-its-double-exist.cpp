#include <vector>
#include <unordered_set>

class Solution {
public:
    bool checkIfExist(std::vector<int>& arr) {
        std::unordered_set<int> seen;
        for (const int& x : arr) {
            if (seen.count(x * 2)) {
                return true;
            }
            if (x % 2 == 0 && seen.count(x / 2)) {
                return true;
            }
            seen.insert(x);
        }
        return false;
    }
};
