num=input("Enter n: ")

def rFib(n):
	if (n<=1):
		return n
	return rFib(n-2)+rFib(n-1)

print "The Fibonacci number at position", num, "is", rFib(num)