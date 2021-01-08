def selection_sort(arr: list) -> list:
    for i in range(len(arr)):
        smallest_index = i

        for j in range(i + 1, len(arr)):
            if arr[j] < arr[smallest_index]:
                smallest_index = j

            arr[i], arr[smallest_index] = arr[smallest_index], arr[i]


def test(input):
    test_case = input[0]
    expected = input[1]
    selection_sort(test_case)

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
