a=1000
b=[]
c=[]
count=0
for i in range (1,a+1):
  b.append(i)
for i in range (a):
  d=b[i]
  for j in range (1,a+1):
    if(d%j==0):
      count=count+1
  if(count==2):
    c.append(d)
  count=0
print(c)
