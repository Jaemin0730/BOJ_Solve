s = ["CU", ":-)", ":-(", ";-)", ":-P", "(~.~)", "TA", "CCC", "CUZ", "TY", "YW", "TTYL"]
t = ["see you", "I’m happy", "I’m unhappy", "wink", "stick out my tongue", "sleepy", "totally awesome", "Canadian Computing Competition", "because", "thank-you", "you’re welcome", "talk to you later"]
while True:
    a = input()
    if a in s : print(t[s.index(a)])
    else : print(a)
    if a == "TTYL" : break
