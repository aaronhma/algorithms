# Big O notation: Quicksort is a tricky case. In the worst case, quicksort takes O(n^2) time.
# In the average case, quicksort takes O(n log(n)) time.
def quicksort(arr):
    if len(arr) < 2:  # Arrays with 0 or 1 are already sorted
        return arr
    else:
        pivot = arr[0]  # Recursive case

        # sub-array of all elements less than the pivot
        less = [i for i in arr[1:] if i <= pivot]

        # sub-array of all elements greater than the pivot
        greater = [i for i in arr[1:] if i > pivot]

        return quicksort(less) + [pivot] + quicksort(greater)

r = quicksort([5, 3, 6, 2, 10])

print(r)
