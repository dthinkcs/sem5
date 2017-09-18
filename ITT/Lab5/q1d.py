import sys

m1=input("Enter rows of matrix1: ")
n1=input("Enter columns of matrix1: ")

m2=input("Enter rows of matrix2: ")
n2=input("Enter columns of matrix2: ")

if (m1!=m2 or n1!=n2):
	sys.exit("\nOrders of the matrices must match")

a=[[0 for x in range(n1)] for y in range(m1)]
print "Enter the matrix1 elements:\n"
for i in range(0,m1):
	for j in range(0,n1):
		a[i][j]=input()

b=[[0 for x in range(n2)] for y in range(m2)]
print "Enter the matrix2 elements:\n"
for i in range(0,m2):
	for j in range(0,n2):
		b[i][j]=input()


c=[[0 for x in range(m1)] for y in range(m2)]

for i in range(0,m1):
	for j in range(0,n1):
		c[i][j]=a[i][j]+b[i][j]

print "\nResult matrix is:\n"
for i in range(0,m1):
	for j in range(0,n1):
		print c[i][j],
	print "\n"
