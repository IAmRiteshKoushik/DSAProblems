# Problem
# Chef and his girlfriend go on a date. Chef took XX dollars with him, and was quite sure that this would be enough to pay the bill. At the end, the waiter brought a bill of YY dollars. Print "YES" if Chef has enough money to pay the bill, or "NO" if he has to borrow from his girlfriend and leave a bad impression on her.

# Input Format
# The first line of input will contain a single integer TT, denoting the number of test cases.
# Each test case consists of a single line of input, containing two space-separated integers XX and YY.
# Output Format
# For each test case, output on a new line "YES" if Chef has enough money to pay the bill and "NO" otherwise.

# You may print each character of the string in either uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

# Constraints
# 1 <= T <= 100
# 1 <= X, Y <= 100


# Solution
t = int(input(""))
for i in range(t):
    X, Y = map(int, input().split())
    if X >= Y:
        print("YES")
    else:
        print("NO")