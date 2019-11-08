a=[]
sum=0
b=int(input("enter the limit:"))
for i in range(b):
  c=int(input())
  a.append(c)
for i in range(b):
  sum=sum+a[i]
print("The sum of the element in set is %d "%sum)
