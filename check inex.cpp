#include <iostream>
#include <string>
 #include <algorithm>
using namespace std;

template <typename T, size_t size>
int getposition(T const (&array)[size], T const & c)
{
    T const * found = std::find(&array[0], &array[size], c);
    return found == &array[size] ? -1 : found - array;
}
int main (){

const char myarray[5] = {'0', 'a', 'e', 'f', 'c'}; // Create array of char
int number=0; // Create variable
number = getposition(myarray, 'f'); // Now number equals to 3
cout<<number;
number = getposition(myarray, 'a'); // -1, because array doesn't have this char
cout<<number;
	return 0;
}

