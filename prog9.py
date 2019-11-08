a=str(input("Enter a name:"))
b=len(a)
for i in range (b):
  print("%c[%d]=%d"%(a[i],i,id(a[i])))
