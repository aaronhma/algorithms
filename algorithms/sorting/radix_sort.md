# Radix Sort

## About

Radix sort sorts the input array one _digit_ at a time. Given this array, let's see how we will sort this:

![Image](https://www.interviewcake.com/images/svgs/radix_sort__input_list.svg?bust=206)

([Source](https://www.interviewcake.com/concept/python3/radix-sort))

1. Sort the ones place:

![Image](https://www.interviewcake.com/images/svgs/radix_sort__input_unsorted_list_with_highlighted_the_ones_digits.svg?bust=206)

([Source](https://www.interviewcake.com/concept/python3/radix-sort))

after sorting the ones place, here's what our array would look like:

![Image](https://www.interviewcake.com/images/svgs/radix_sort__input_list_with_sorted_numbers_by_first_digits.svg?bust=206)

([Source](https://www.interviewcake.com/concept/python3/radix-sort))

2. Then, we sort the tens place:

![Image](https://www.interviewcake.com/images/svgs/radix_sort__input_list_with_sorted_numbers_by_tens_digits.svg?bust=206)

([Source](https://www.interviewcake.com/concept/python3/radix-sort))

3. And finally the hundreds place:

![Image](https://www.interviewcake.com/images/svgs/radix_sort__input_list_with_sorted_numbers_by_hundreds_digits.svg?bust=206)

([Source](https://www.interviewcake.com/concept/python3/radix-sort))

4. Return the sorted array:

![Image](https://www.interviewcake.com/images/svgs/radix_sort__input_sorted_list.svg?bust=206)

([Source](https://www.interviewcake.com/concept/python3/radix-sort))

**NOTE: The number of steps taken depends on the max value in the array.**
