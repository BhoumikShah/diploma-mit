from scipy.optimize import minimize

# Define a simple quadratic function
def quadratic(x):
    return (x - 2) ** 2 + 3

# Minimize the function starting from an initial guess
result = minimize(quadratic, x0=0)

print("Optimal solution:")
print(result)
