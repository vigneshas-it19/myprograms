a=int(input("enter the number:"))
g=0
while(a>0):
  t=a%10
  g=g+t
  a=a//10
print(g)
