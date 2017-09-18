#!usr/bin/python

lower=int(input("Enter Lower Bound: "))
upper=int(input("Enter Upper Bound: "))

for num in range(lower,upper + 1):
   if num > 1:
       for i in range(2,num):
           if (num % i) == 0:
               break
       else:
           print(num)
