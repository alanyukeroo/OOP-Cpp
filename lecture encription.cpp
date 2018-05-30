#include <iostream>
#include <string>
 #include <algorithm>
 using namespace std;
 template <typename T,size_t size>
int getposition(T const (&array)[size], T const & c)
{
    T const * found = find(&array[0], &array[size], c);
    return found == &array[size] ? -1 : found - array;
}

string decrypt(int leng, string input, string const morse[],string const huruf[] );
int main (){
	string const morseCode[] = {"0",".-", "-...", "-.-.", "-..", ".", "..-.",
    "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-",
    ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
   	const char  huruf[26] = {'0','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	string input;
	
	int number=0; // Create variable

//	getline(cin,input);	
	int leng;
	number = getposition(morseCode, ".-"); // Now number equals to 3
	cout<<number;
	leng = sizeof(huruf)/sizeof(huruf[0]);
//	cout<< decrypt(leng,input,morseCode,huruf);
	
	return 0;
}
string decrypt(int leng, string input, string const morse[],string const huruf[]){
	
}
