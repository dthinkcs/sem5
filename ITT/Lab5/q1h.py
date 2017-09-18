#!/usr/bin/python3

n=input("Enter number of list items required:")
list1=set()
for i in range(n):
    x=raw_input("Enter item:")
    list1.add(x)

n=input("Enter number of list items required:")
list2=set()
for i in range(n):
    x=raw_input("Enter item:")
    list2.add(x)
print("List1:", list1)
print("List2:", list2)
print("OR:",list1 | list2)
print("AND:",list1.intersection(list2))
print("DIFFERENCE:",list1.difference(list2))
print("SYMMETRIC DIFFERENCE:",list1.symmetric_difference(list2))