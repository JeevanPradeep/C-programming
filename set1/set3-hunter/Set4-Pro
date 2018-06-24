n=int(input())
a=[]
l=[]
for i in range(n):
    a.append(input())
    l.append(len(a[i]))
m=min(l)
s=a[0]
c=0
for i in range(m):
    for j in range(n):
        if(s[i]==a[j][i]):
            c+=1
    if(c!=n):
        print("NULL")
        break
    else:
        print(s[i],end="")
        c=0

