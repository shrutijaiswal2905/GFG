from collections import Counter
from itertools import combinations

class Solution:
    def countSubset(self, arr, k):
        n = len(arr)
        mid = n // 2
        left = arr[:mid]
        right = arr[mid:]

        # Function to generate all subset sums
        def subset_sums(nums):
            sums = []
            for r in range(len(nums) + 1):
                for comb in combinations(nums, r):
                    sums.append(sum(comb))
            return sums

        left_sums = subset_sums(left)
        right_sums = subset_sums(right)

        # Count frequency of sums in right half
        right_count = Counter(right_sums)

        # For each sum in left, see how many in right complete to k
        total = 0
        for s in left_sums:
            total += right_count[k - s]

        return total