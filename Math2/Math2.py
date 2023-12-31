import math

x=-1
dx=0.000001
iters=int((1-(-1))/dx)


A=0.
for i in range(iters):
        A=A+math.sqrt(1-x**2)*dx
        x=x+dx
tpi=2*A

print ("pi is approximately %.16f" % (tpi))
