# Given a string fint eh lenght of the longest substring without repeating characters

s = input("")
max_length = 0
temp_storage = ''

for i in range(len(s)):
    if s[i] not in temp_storage:
        temp_storage += s[i]
    else:
        max_length = max(max_length, len(temp_storage))
        temp_storage = s[i]
        
print(max(len(temp_storage), max_length))
        
    