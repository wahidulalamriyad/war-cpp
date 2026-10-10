#include <iostream>

int main() {
  std::cout << "Hello, world!" << std::endl;
  return 0;
}

// #include is preprocessor directive that tells the compiler to include the
// contents of the specified file (in this case, <iostream>) in the program
// before compilation. The <iostream> header file is part of the C++ standard
// library and provides facilities for input and output operations, such as
// reading from the console and writing to the console.

// int main() is the entry point of the program. It is a function that returns
// an integer value. The execution of the program starts from the main function.

// :: The scope resolution operator (::) is used to access members of a
// namespace or class. In this case, it is used to access the cout and endl
// objects from the std namespace.

// std::cout is an object that represents the standard output stream (usually
// the console). It is used to output data to the console. The << operator is
// used to send data to the output stream. In this case, it sends the string
// "Hello, world!" to the console.

// std::cin is an object that represents the standard input stream (usually the
// console). It is used to read data from the console. The >> operator is used
// to extract data from the input stream. In this case, it reads an integer
// value from the console and stores it in the variable n.

// std::endl is a manipulator that inserts a newline character into the output
// stream and flushes the stream. It is used to move the cursor to the next line
// after printing the message.

// return 0; indicates that the program has executed successfully. The value 0
// is returned to the operating system to indicate that the program has
// completed without errors.

// Note: The use of std:: before cout and endl is necessary because they are
// part of the std namespace. The std namespace contains all the standard C++
// library functions and objects. By using std::, we specify that we want to use
// the cout and endl objects from the std namespace. Alternatively, we could use
// the using namespace std; directive at the beginning of the program to avoid
// having to prefix std:: before every standard library object, but it is
// generally considered good practice to avoid using namespace std; in larger
// programs to prevent naming conflicts.
