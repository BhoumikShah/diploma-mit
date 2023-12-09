t = (2,34,45,6,7,2,4,5,78,34,2)
print(t)
count = t.count(34)
print(count)
tup=(1,3,4,32,1,1,1,31,32,12,21,2,3)  
for i in tup:
    if tup.count(i) > 1:
        print("repeated elements is:",i)
        