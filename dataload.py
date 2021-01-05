import matplotlib.pyplot as plt
import numpy as np

x = np.loadtxt('tempcdata.txt', unpack=True)
plt.plot(x)

plt.xlabel('Time')
plt.ylabel('Temperature C°')
plt.title('Temperature Data')
plt.show()
