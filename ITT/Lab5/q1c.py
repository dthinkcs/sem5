import sys

m1=input("Enter rows of matrix1: ")
n1=input("Enter columns of matrix1: ")

m2=input("Enter rows of matrix2: ")
n2=input("Enter columns of matrix2: ")

if (m1!=n2):
	sys.exit("\nRows of matrix1 should be equal to columns of matrix2")


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


c=[[0 for x in range(n1)] for y in range(m2)]

for i in range(0,m2):
	for j in range(0,n1):
		for k in range(0,m1):
			c[i][j]+=a[i][k]*b[k][j]

print "\nResult matrix is:\n"
for i in range(0,m2):
	for j in range(0,n1):
		print c[i][j],
	print "\n"