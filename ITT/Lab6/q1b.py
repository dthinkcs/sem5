string = raw_input("input string : ")
punctuations = '''!()-[]{};:'"\,<>./?@#$%^&*_~'''

res = ""
for char in string:
	if char not in punctuations:
		res = res + char

print("modified string")
print(res)