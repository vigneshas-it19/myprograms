a=int(input("enter a:"))
for i in range(1,a+1):
  for j in range(a,i,-1):
    print(" ",end="")
  for k in range(i,0,-1):
    print(k,end="")
  for l in range(2,i+1):
    print(l,end="")
  print("\r")
for i in range(a-1,0,-1):
  for j in range(a-i,0,-1):
    print(" ",end="")
  for k in range(i,0,-1):
    print(k,end="")
  for l in range(2,i+1):
    print(l,end="")
  print("\r")

