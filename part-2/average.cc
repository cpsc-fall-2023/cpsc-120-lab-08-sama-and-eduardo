// Samatrah Burroughs
// svmasama@csu.fullerton.edu
// @sxmasghxst
// Partners: @EduardoHG-197

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // XTODO: Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one argument\n";
    return 1;
  }

  // XTODO: Write a for-each loop to sum (add up) all of the command line
  // arguments.
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  std::vector<std::string> nums{arguments.begin() + 1, arguments.end()};
  double total{0};
  for (std::string element : nums) {
    total += std::stod(element);
  }
  // XTODO: After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.
  double average{0};
  average = total / (arguments.size() - 1);

  // XTODO: Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.
  std::cout << "average = " << average << "\n";

  return 0;
}
