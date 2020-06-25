// #include <iostream>
// #include <vector>
// #include <cassert>

// using namespace std;

// typedef vector<int> vi;

// vi counting_sort(vi &arr, int max_value)
// {
//   vi counts(max_value + 1);
//   for (int i : arr)
//     counts[i] += 1;

//   int num_items_before = 0;
//   for (int i = 0; i < max_value + 1; i++)
//   {
//     counts[i] = num_items_before;
//     num_items_before += arr[i];
//   }

//   vi sorted_list(arr.size());

//   for (int i : arr)
//   {
//     sorted_list[counts[i]] = i;
//     counts[i] += 1;
//   }

//   return sorted_list;
// }

// bool test_function(vector<vi> input)
// {
//   vi test_case = input[0];
//   vi expected = input[1];
//   int max_value = input[2][0];
//   test_case = counting_sort(test_case, max_value);

//   for (int i : test_case)
//   {
//     cout << i << " ";
//   }

//   cout << "\n";

//   if (test_case == expected)
//   {
//     cout << "Pass"
//          << "\n";

//     return true;
//   }
//   else
//     cout << "Fail"
//          << "\n";

//   return false;
// }

// int main()
// {
//   vector<vi> input_1 = {vi{3, 2, 1}, vi{1, 2, 3}, vi{3}};
//   // assert(test_function(input_1));
//   test_function(input_1);

//   vector<vi> input_2 = {vi{1, 2, 3}, vi{1, 2, 3}, vi{3}};
//   assert(test_function(input_2));

//   vector<vi> input_3 = {vi{}, vi{}, vi{0}};
//   assert(test_function(input_3));

//   return 0;
// }
