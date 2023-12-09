my_set = {10, 20, 5, 15, 30}
is_superset_itself = my_set.issuperset(my_set)
is_superset_other = my_set.issuperset({5, 30})
print("Is a superset of itself:", is_superset_itself)
print("Is a superset of {5, 30}:", is_superset_other)
