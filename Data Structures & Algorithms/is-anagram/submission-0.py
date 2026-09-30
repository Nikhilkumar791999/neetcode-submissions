class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        
        arr = [0]*26

        if len(s) != len(t):
            return False
        for char in s:
            index = int(ord(char) - ord('a'))
            arr[index] = arr[index] + 1
        
        for char in t:
            index = int(ord(char) - ord('a'))
            arr[index] = arr[index] - 1

        for i in arr:
            if i !=0:
                return False
        
        return True


            
            
        