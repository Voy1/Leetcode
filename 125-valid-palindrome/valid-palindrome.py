class Solution:
    def isPalindrome(self, s: str) -> bool:
        s=s.lower()
        print(s)
        for i in s:
            if i.isalnum()==False:
                s=s.replace(i,"")
        return s==s[::-1]