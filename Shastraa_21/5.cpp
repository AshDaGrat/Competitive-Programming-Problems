//https://www.hackerrank.com/contests/shaastra-junior/challenges/stock-price-1
//solution works for 7/14 test cases

#include <iostream>
using namespace std;

//plagarised this function off the internet
int maxProfit(int price[], int start, int end){
    if (end <= start)
        return 0;
    int profit = 0;
    for (int i = start; i < end; i++) {
        for (int j = i + 1; j <= end; j++) {
            if (price[j] > price[i]) {
                int curr_profit = price[j] - price[i]
                + maxProfit(price, start, i - 1)
                + maxProfit(price, j + 1, end);
                profit = max(profit, curr_profit);
            }
        }
    }
    return profit;
}
 
int main()
{
    int size = 0;
    cin >> size;
    int price[size];
    for(int i = 0; i<size;i++){
        cin >> price[i];
    }
    int n = sizeof(price) / sizeof(price[0]);
    cout << maxProfit(price, 0, n - 1);
}