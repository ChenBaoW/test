#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int maxSales(vector<int>& sales) {
        int sales_size = sales.size();
//        if(sales_size == 0){
//            return 0;
//        }
        int maxSales = sales[0];
        int sum = 0;
        for(int i = 0; i < sales_size; i++) {
            sum += sales[i];
            if(sum > maxSales){
                maxSales = sum;
                if(sum < 0){
                    sum = 0;
                }
            }else if(sum < 0){
                sum = 0;
            }
        }
        return maxSales;
    }
};

int main() {
    class Solution solution;
    vector<int> sales = {-3,-2,0,-1};
    cout << solution.maxSales(sales) << endl;
    return 0;
}
