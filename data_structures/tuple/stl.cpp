#include <iostream>
#include <tuple>
#include <string>

int main()
{
  std::tuple<std::string, int, char> people_at_school;
  people_at_school = std::make_tuple("Old Aaron!", 'A', 11);

  std::get<0>(people_at_school) = "New Aaron!"; // change Old Aaron! -> New Aaron!

  std::string user = std::get<0>(people_at_school); // New Aaron!
  int age = std::get<2>(people_at_school);          // 11
  char grade = std::get<1>(people_at_school);       // 'A'

  std::cout << user << " is " << std::to_string(age) << " years old with a " << grade << " in his school grade!\n"; // New Aaron! is 11 years old with a A in his school grade!

  int size = std::tuple_size<decltype(people_at_school)>::value; // 3

  std::cout << "The size of the tuple is " << size << " elements!"
            << "\n"; // The size of the tuple is 3 elements!
}
