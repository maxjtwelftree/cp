class Solution:
    def buyChoco(self, prices: List[int], money: int) -> int:
        # [1,2,2] choc prices
        # 3 = money
        # need two chocalates without having debt

        # return left over moeny, after buying 2 chocs

        prices.sort()
        new_money = money
        for i in range(2):
          new_money -= prices[i]
        
        if new_money >= 0:
          return new_money

        return money