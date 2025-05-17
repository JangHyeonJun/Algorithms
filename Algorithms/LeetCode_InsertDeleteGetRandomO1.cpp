#include <unordered_map>
#include <vector>
using namespace std;

class RandomizedSet {
    vector<int> values;
    unordered_map<int, int> indexMap;
public:
    RandomizedSet() {
    }

    bool insert(int val) {
        if (indexMap.contains(val))
            return false;

        values.push_back(val);
        indexMap[val] = values.size() - 1;
        return true;
    }

    bool remove(int val) {
        if (!indexMap.contains(val))
            return false;

        auto index = indexMap[val];
        auto last = values[values.size() - 1];

        values[index] = last;
        indexMap[last] = index;

        indexMap.erase(val);
        values.pop_back();
        return true;
    }

    int getRandom() {
        auto index = rand() % values.size();
        return values[index];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */