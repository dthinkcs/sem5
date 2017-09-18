num=input("Enter n: ")

def rSum(n):
	if (n<=1):
		return n
	return n+rSum(n-1)

print "Sum of first n numbers: ",rSum(num)
