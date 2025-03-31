#User function Template for python3
class Solution:
    def getSecondLargest(self, arr):
        # Code Here
        large= arr[0]
        second_large = -1
        for i in range(len(arr)):
            if arr[i] > large:
                second_large = large
                large = arr[i]
            elif arr[i] > second_large and large!= arr[i]:
                second_large = arr[i]
        return second_large    

#{ 
 # Driver Code Starts
# Initial Template for Python 3

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        arr = list(map(int, input().split()))
        ob = Solution()
        ans = ob.getSecondLargest(arr)
        print(ans)
        print("~")
# } Driver Code Ends