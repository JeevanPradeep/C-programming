a=input()
a,b=a.split(" ")
if(len(a)<=len(b)):
    l=len(a)
else:
    l=len(b)
c=0
for i in range(l):
    if(a[i]==b[i]):
        c+=1
print(len(b)-c)
