class Solution:

    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        def return_set(x):
            s = {}
            for i in x:
                s[i] = 1 + s.get(i,0)
            return s

        ans = []
        for i in range(len(strs)):
            if strs[i]==None:
                continue
            temp = strs[i]
            l = []
            print(ans,strs)
            for j in range(len(strs)):
                if strs[j]==None:
                    continue
                if(return_set(temp)==return_set(strs[j])):
                    l.append(strs[j])
                    strs[j]=None
            
            ans.append(l)
        return ans