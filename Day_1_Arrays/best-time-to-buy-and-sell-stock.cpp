
// Link : https://takeuforward.org/data-structure/stock-buy-and-sell/

int maxProfit(vector<int> &arr) {
    int maxPro = 0;
    int n = arr.size();
    int minPrice = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        minPrice = min(minPrice, arr[i]);
        maxPro = max(maxPro, arr[i] - minPrice);
    }
    
    return maxPro;
}


Intuition: We will linearly travel the array. We can maintain a minimum from the starting of the array and compare it with every element of the array, 
if it is greater than the minimum then take the difference and maintain it in max, otherwise update the minimum.

Approach:

* Create a variable maxPro and store 0 initially.
* Create a variable minPrice and store some larger value(ex: MAX_VALUE) value initially.
* Run a for loop from 0 to n.
* Update the minPrice if it is greater than the current element of the array
* Take the difference of the minPrice with the current element of the array and compare and maintain it in maxPro.
* Return the maxPro.
