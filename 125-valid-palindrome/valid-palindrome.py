class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        i = 0
        j = len(s) - 1
        while i < j:
            if not s[i].isalpha() and not s[i].isdigit():
                i += 1
            elif not s[j].isalpha() and not s[j].isdigit():
                j -= 1
            else:
                if s[i] != s[j]:
                    return False
                i += 1
                j -= 1
        return True