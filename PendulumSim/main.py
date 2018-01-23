#import
from math import sin
from matplotlib import pyplot

#basic variables and starting values
x=0
x1 =0
dt=0.05
theta = 90
theta1 = 0
g = 9.98
oTime = 10
l=0.5

#solution arrays
tabX=[]
tabTheta=[]
tabTime=[]

#number of iterations
iteration = oTime/dt
iteration = int(iteration)


time = 0
#iterating loop
for i in range(iteration):
    tabTime.append(time)
    time+=dt
    x1 = (-1*g*sin(theta)*dt)/l + x
    theta1 = x*dt + theta
    tabX.append(x1)
    tabTheta.append(theta1)
    x= x1
    theta = theta1

#for i in range(iteration):
#    print(tabX[i])
#    print("   ")
#    print(tabTheta[i])
#    print("\n")

pyplot.plot(tabTime,tabX)
pyplot.show()

pyplot.plot(tabTime,tabTheta)
pyplot.show()

pyplot.plot(tabX,tabTheta)
pyplot.show()