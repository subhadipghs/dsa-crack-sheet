#include <bits/stdc++.h>
using namespace std;

int
max_profit(vector<int> prices)
{
  int profit = 0;
  for (int i = 1; i < prices.size(); i++) {
    if (prices[i] > prices[i - 1]) {
      profit += (prices[i] - prices[i - 1]);
    }
  }
  return profit;
}

int
main(void)
{
  std::vector<int> v = { 7, 1, 5, 3, 6, 4 };
  cout << max_profit(v) << '\n';
  return 0;
}