a=10
b=[]
print("enter 10 numbers:")
for i in range(a):
  c=int(input())
  b.append(c)
for i in range(a):
    if(b[i]>b[0]):
      b[0]=b[i]
print("%d is the greatest"%b[0])
