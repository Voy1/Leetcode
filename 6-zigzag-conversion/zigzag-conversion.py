class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows == 1:
            return s

        c = 2*(numRows - 1)

        o = ""
        for i in range(numRows):
            j = i

            x = c - 2*i if i != numRows-1 else c
            y = c - x if x != c else c
            count = 0
            while j < len(s):
                o = o + s[j]
                if count % 2 == 0:
                    j = j + x
                else:
                    j = j + y
                count += 1

        return o
