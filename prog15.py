a=[]
flag=1
b=int(input("enter the limit:"))
for i in range(b):
  c=int(input())
  a.append(c)
for i in range(b):
  if(a[i]==23):
    flag=0
    break;
if (flag==0):
  print("the element is present")
else:
  print("The element not present")
