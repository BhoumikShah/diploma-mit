from scipy.sparse import csr_matrix
from scipy.sparse.csgraph import shortest_path

# Create a graph represented as a sparse matrix
graph = csr_matrix([[0, 1, 2], [1, 0, 3], [2, 3, 0]])

# Find the shortest path
distances, predecessors = shortest_path(graph, return_predecessors=True)

print("Shortest Distances:")
print(distances)
print("Predecessors:")
print(predecessors)
