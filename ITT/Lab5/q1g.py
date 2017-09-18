num=input("Enter the decimal number: ")

def toBin(n):
	if (n<2):
		print n,
	else:
		toBin(n/2)
		print n%2,

def toOct(n):
	if (n<8):
		print n,
	else:
		toOct(n/8)
		print n%8,

def toHex(n):
	if (n<16):
		if (n>9):
			n=unichr(n+55)
		print n,
	else:
		toHex(n/16)
		x=n%16
		if (x>9):
			x=unichr(n+55)
		print x,

print "Binary: ",
toBin(num)
print "\nOctal: ",
toOct(num)
print "\nHexadecimal: ",
toHex(num)