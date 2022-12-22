# Problem
# You are given an array A = [A1, A2, .. , An]
# Is it  possible ot partition A into two non-empty subsequences S1 and S2 such that sum(S1) x (S2) is odd? 
# Note : S1 and S2 must partition A, that is 
# 1. S1 and S2 must be non-empty
# 2. Every element of A must be in either S1 or S2
# 3. S1 and S2 must be disjoint (in terms of which indices their subsequences represent)

# Solution
# We need an odd number of "odd number" elements for the sum of both the sets to be odd. Only is S1 and S2 are odd, can we have their product as odd. 
testC = int(input())
for i in range(0,testC):
    n1 = int(input())
    Arr = list(map(int,input().split()))
    oddCount = 0
    for i in range(0,n1):
        if(Arr[i]%2):
            oddCount = oddCount+1
    if(oddCount>0 and oddCount%2 == 0):
        print("Yes")
    else:
        print("No")