#!/usr/bin/python3

string=raw_input("Enter string:")
key=input("Enter key:")
cipher=""
for i in range(len(string)):
    char=string[i]
    if(char.isupper()):
        cipher += chr((ord(char) + key - 65) % 26 + 65)
    else:
        cipher += chr((ord(char) + key - 97) % 26 + 79)
print(cipher)
