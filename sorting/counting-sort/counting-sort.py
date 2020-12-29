# Source: https://www.interviewcake.com/concept/python3/counting-sort
import random


def counting_sort(the_list, max_value):
    counts = [0] * (max_value + 1)
    for item in the_list:
        counts[item] += 1
    num_items_before = 0
    for i, count in enumerate(counts):
        counts[i] = num_items_before
        num_items_before += count

    sorted_list = [None] * len(the_list)

    for i in the_list:
        sorted_list[counts[i]] = i
        counts[i] += 1

    return sorted_list


def test(input):
    test_case = input[0]
    expected = input[1]
    max_value = input[2][0]
    test_case = counting_sort(test_case, max_value)

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
        assert(test([[3, 2, 1], [1, 2, 3], [3]]))
        assert(test([[], [], [0]]))
        assert(test([[1, 2, 3], [1, 2, 3], [3]]))
        assert(test([test_case_4_in, test_case_4_expect, [10]]))
        print("All tests passed!")
    except:
        print("Wrong answer!")
