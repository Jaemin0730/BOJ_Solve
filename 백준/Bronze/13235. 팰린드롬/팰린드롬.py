def palindrome(a):
    return str(a == a[::-1]).lower()
    
print(palindrome(input()))