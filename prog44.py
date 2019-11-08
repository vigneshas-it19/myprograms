a=[]
b=int(input("enter a limit:"))
print("enter elements:")
for i in range (b):
  c=int(input())
  a.append(c)
for i in range(b):
  for j in range(i+1,b):
    if(a[i]>a[j]):
      temp=a[i]
      a[i]=a[j]
      a[j]=temp
print(a)
