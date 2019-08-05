/*********************************

Passing arrays to functions in
c++

**********************************/

// Notes:
  // In order to pass an array as
  // a parameter in c++ we have to pass
  // its size as well.

#include <iostream>
using namespace std;

// Function prototype.
// Takes two parameter,
// myArray in the main function and the size of the array.
void printElements(double myArray[], int size);
// Function prototype.
// Takes two parameters,
// myArray in the main function and the size of the array.
void inputElements(double myArray[], int size);

int main() {

  cout << endl;
  cout << "########################### Running Program ########################" << endl;
  cout << endl;

  // Declares array.
  double myArray[5];

  // Stores elements in the array.
  myArray[0] = 2.3;
  myArray[1] = 0.3;
  myArray[2] = 0.0;
  myArray[3] = 4.1;
  myArray[4] = 0.5;

  // Function call.
  // Takes two parameters,
  // the array and its size.
  printElements(myArray, 5);

  // Function call.
  // Takes two parameters,
  // the array and its size.
  inputElements(myArray, 5);

  // Outputs empty line.
  cout << endl;

  // Function.
  // Takes two parameters,
  // the array and its size.
  printElements(myArray, 5);

  cout << endl;
  cout << "########################## Exiting Program #########################" << endl;
  cout << endl;

  // Exits main function.
  // Returns 0 the operating system.
  return 0;

}

// Builds function.
// Takes two parameter,
// the array and the size of the array.
void printElements(double myArray[], int size) {

  // Builds for loop.
  // Loops through every element of the
  // array.
  for(int i = 0; i < size; i++) {

    // Outputs to the console through each loop iteration.
    cout << "---- index -------" << i << " ----- Element --------" << myArray[i] << endl;

  }

}

// Builds function.
// Takes two parameters,
// the array and the size of the array.
// Allows user to enter integers.
void inputElements(double myArray[], int size) {

  // Builds for loop.
  // Allows user to enter elements in the array
  // through each loop iteration.
  for(int i = 0; i < size; i++) {

    cout << "Enter an element into the array: " << endl;
    // Stores input in the array.
    cin >> myArray[i];
    cout << endl;
    cout << "-------------- Index ----- "  << i << "--------- element --------- " << myArray[i] << endl;

  }

}
