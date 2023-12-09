import matplotlib.pyplot as plt
import numpy as np

# Sample data for demonstration
x = np.linspace(0, 2 * np.pi, 100)
y_sin = np.sin(x)
y_cos = np.cos(x)

# Line Plot
plt.figure(figsize=(8, 4))
plt.plot(x, y_sin, label='sin(x)')
plt.plot(x, y_cos, label='cos(x)')
plt.title('Line Plot')
plt.xlabel('x-axis')
plt.ylabel('y-axis')
plt.legend()
plt.grid(True)
plt.show()

# Scatter Plot
plt.figure(figsize=(8, 4))
plt.scatter(x, y_sin, label='sin(x)')
plt.scatter(x, y_cos, label='cos(x)')
plt.title('Scatter Plot')
plt.xlabel('x-axis')
plt.ylabel('y-axis')
plt.legend()
plt.grid(True)
plt.show()

# Bar Plot
categories = ['Category A', 'Category B', 'Category C']
values = [25, 40, 30]
plt.figure(figsize=(8, 4))
plt.bar(categories, values)
plt.title('Bar Plot')
plt.xlabel('Categories')
plt.ylabel('Values')
plt.grid(axis='y')
plt.show()

# Histogram
data = np.random.randn(1000)
plt.figure(figsize=(8, 4))
plt.hist(data, bins=30, edgecolor='black')
plt.title('Histogram')
plt.xlabel('Value')
plt.ylabel('Frequency')
plt.grid(axis='y')
plt.show()

# Pie Chart
labels = ['Category A', 'Category B', 'Category C']
sizes = [30, 45, 25]
plt.figure(figsize=(8, 8))
plt.pie(sizes, labels=labels, autopct='%1.1f%%', startangle=90)
plt.title('Pie Chart')
plt.show()

# Box Plot
data_box = np.random.randn(100, 4)
plt.figure(figsize=(8, 4))
plt.boxplot(data_box, labels=['A', 'B', 'C', 'D'])
plt.title('Box Plot')
plt.xlabel('Categories')
plt.ylabel('Values')
plt.show()
