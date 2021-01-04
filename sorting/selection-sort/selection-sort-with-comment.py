# Big O notation: O(n^2)
def find_min_index(arr):
    smallest = arr[0]  # Stores the smallest value
    smallest_index = 0 # Stores the index of the smallest value

    for i in range(1, len(arr)): # skip 0 index
        if arr[i] < smallest:
            smallest = arr[i]
            smallest_index = i

    return smallest_index

# print(find_min_index([5, 3, 6, 2, 10])) # 3

def selection_sort(arr):
    new_arr = []

    for i in range(len(arr)):
        min_index = find_min_index(arr)
        new_arr.append(arr.pop(min_index))

    return new_arr

sorted_arr = selection_sort([5, 3, 6, 2, 10])

print(sorted_arr)
