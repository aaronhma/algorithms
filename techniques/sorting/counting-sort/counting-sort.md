# Counting Sort

## About

Counting sort works by iterating through the input and counting the number of occurences each item occurs then using those counts, calculate the item's index in the sorted list.

1. Get an input array:

![Image](https://www.interviewcake.com/images/svgs/counting_sort__input_list.svg?bust=206)

([Source](https://www.interviewcake.com/concept/python3/counting-sort))

2. Count the number of times an item appears in the array:

![Image](https://www.interviewcake.com/images/svgs/counting_sort__input_list_all_items_are_counted.svg?bust=206)

([Source](https://www.interviewcake.com/concept/python3/counting-sort))

3. Build the final sorted array:

![Image](https://www.interviewcake.com/images/svgs/counting_sort__input_list_items_2_are_sorted.svg?bust=206)

([Source](https://www.interviewcake.com/concept/python3/counting-sort))

4. Return the array.

![Image](https://www.interviewcake.com/images/svgs/counting_sort__input_list_all_items_are_sorted.svg?bust=206)

([Source](https://www.interviewcake.com/concept/python3/counting-sort))

## Pros & Cons of Counting Sort

-   Pros:
    -   Linear time
-   Cons:
    -   Range of input is known before hand
    -   More than O(n) space
