# SOURCE: https://www.interviewcake.com/concept/python3/insertion-sort
import random


def insertion_sort(arr):
    for i in range(len(arr)):
        while i > 0 and arr[i - 1] >= arr[i]:
            arr[i], arr[i - 1] = arr[i - 1], arr[i]
            i -= 1

    return arr


def test(input):
    test_case = input[0]
    expected = input[1]
    test_case = insertion_sort(test_case)

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
