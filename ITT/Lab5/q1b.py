m=input("Enter number of rows: ")
n=input("Enter number of columns: ")
a=[[0 for x in range(n)] for y in range(m)]
print "Enter the matrix elements:\n"
for i in range(0,m):
	for j in range(0,n):
		a[i][j]=input()

print "\nThe input matrix is:\n"
for i in range(0,m):
	for j in range(0,n):
		print a[i][j],
	print "\n"

print "\nThe transpose is:\n"
for i in range(0,n):
	for j in range(0,m):
		print a[j][i],
	print "\n"