import numpy as np
import matplotlib.pyplot as plt
import fileinput

Q = fileinput.input()
N = []
Time = []
while True:
    try:
        line = Q.next().split()
        line = [float(x) for x in line]
        N.append(line[0]);
        Time.append(line[1]);
    except StopIteration:
        break;



plt.figure(figsize=(8,4))
plt.plot(N,Time,label="$Size-Time$",color="red",linewidth=2)
plt.xlabel("N Size")
plt.ylabel("Running Times")
plt.title("Question 6")
plt.ylim(0,max(Time)+100)
plt.legend()
plt.show()
