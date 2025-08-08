class Solution:
	def getLPSLength(self, s):
		# code here
		n=len(s)
        currLen=0
        lps=[0]*n
        for i in range(1,n):
            if s[i]==s[currLen]:
                currLen+=1
                lps[i]=currLen
            else:
                while(currLen>0 and s[i]!=s[currLen]):
                    currLen=lps[currLen-1]
                if(s[i]==s[currLen]):
                    currLen+=1
                    lps[i]=currLen
        return lps[-1]