import random
import math

n= 10000
l=[]
for i in range(n):
    l.append([random.uniform(0,1),random.uniform(0,1)])

t=0
for el in l:
    if math.sqrt(el[0]**2 + el[1]**2) < 1:
        t+=1

print(t/n * 4)