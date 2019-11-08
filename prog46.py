a=[]
flag=1
b=int(input("enter the limit:"))
print("enter the array element")
for i in range(b):
  c=int(input())
  a.append(c)
d=int(input("enter the number to search:"))
for i in range(b):
  if(a[i]==d):
    flag=0
    break;
if(flag==0):
  print("The element present at a[%d]"%i)
else:
  print("Element not present")
