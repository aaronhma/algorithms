def quicksort(arr: list) -> list:
    if len(arr) < 2:
        return arr
    else:
        pivot = arr[0]
        low = list()
        high = list()

        for i in arr:
            if i <= pivot:
                low.append(i)
            elif i > pivot:
                high.append(i)

        return quicksort(low[1:]) + [pivot] + quicksort(high)


def test(input):
    test_case = input[0]
    expected = input[1]
    test_case = quicksort(test_case)

    print(test_case)
    if test_case == expected:
        print("Pass")
        return True
    else:
        print("Fail")

    return False


if __name__ == "__main__":
    try:
        assert(test([[3, 2, 1], [1, 2, 3]]))
        assert(test([[], []]))
        assert(test([[1, 2, 3], [1, 2, 3]]))
        print("All tests passed!")
    except:
        print("Wrong answer!")
