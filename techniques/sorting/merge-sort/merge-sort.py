# Source: https://github.com/SebasSujeen/Merge_sort/blob/master/merge_sort/merge_sort.py

import random  # for testing


def merge(left: list, right: list) -> list:
    sorted = list()
    left_index = 0
    right_index = 0

    while left_index < len(left) and right_index < len(right):
        if left[left_index] < right[right_index]:
            sorted.append(left[left_index])
            left_index += 1

        else:
            sorted.append(right[right_index])
            right_index += 1

    sorted += left[left_index:]
    sorted += right[right_index:]

    return sorted


def merge_sort(arr: list) -> list:
    if len(arr) < 2:
        return arr

    mid = len(arr) // 2

    return merge(merge_sort(arr[:mid]), merge_sort(arr[mid:]))


def test(input):
    test_case = input[0]
    expected = input[1]
    test_case = merge_sort(test_case)

    print(test_case)
    if test_case == expected:
        print("Pass")
        return True
    else:
        print("Fail")

    return False


test_case_4_in = [i for i in range(1, 10)]
test_case_4_expect = [i for i in range(1, 10)]
random.shuffle(test_case_4_in)

if __name__ == "__main__":
    try:
        assert(test([[3, 2, 1], [1, 2, 3]]))
        assert(test([[], []]))
        assert(test([[1, 2, 3], [1, 2, 3]]))
        assert(test([test_case_4_in, test_case_4_expect]))
        print("All tests passed!")
    except:
        print("Wrong answer!")
