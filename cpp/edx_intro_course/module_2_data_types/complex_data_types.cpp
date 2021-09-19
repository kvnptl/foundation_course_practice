#include <iostream>

int main(){
    int a;

    std::cout << "Hello world!" << std::endl;

    // The compiler will initialize the remaining elements to the default value for the data type the array holds. 
    // In this case, int data type, the remaining values are initialized to 0.
    int int_array[10] = {1, 2, 3};
    double double_ary[10] = {1.0, 2.1, 3};
}