class Solution:
    def isPalindrome(self, x: int) -> bool:
        return str(x) == str(x) [::-1] # this reverses it 