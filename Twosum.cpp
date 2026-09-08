#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main() {
    vector<int> nums = {4, 3, 5, 7};
    int target = 12;

    Solution test;
    vector<int> resultado = test.twoSum(nums, target);

    // Imprimir el resultado
    if (!resultado.empty()) {
        cout << "Índices: [" << resultado[0] << ", " << resultado[1] << "]" << endl;
    } else {
        cout << "No se encontró solución." << endl;
    }

    return 0;
}