from scipy.sparse import csr_matrix

# Create a sparse matrix
data = [1, 2, 3]
row = [0, 1, 2]
col = [1, 2, 0]
sparse_matrix = csr_matrix((data, (row, col)), shape=(3, 3))

print("Sparse Matrix:")
print(sparse_matrix)
