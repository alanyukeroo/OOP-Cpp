#include <iostream>
#include <string>
#include <sstream>

using namespace std;
string convert( string morse,  string const morseCode[]);

int main()
{
     string input = "";
     cout << "Please enter a string in morse code: ";
     getline( cin, input);
    
     string const morseCode[] = {".--", "-..-", "-.--", "--..",".-", "-...", "-.-.", "-..", ".", "..-.","--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-",".-.", "...", "-", "..-", "...-"};
    
     cout << convert(input, morseCode) <<  endl;
    

    return 0;
}

 string convert( string morse,  string const morseCode[])
{
     string output = "";
     string currentLetter = "";
     istringstream ss(morse);
    const char  characters[26] = {'x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w'};

    
    while(ss >> currentLetter)
    {
         size_t index = 0;
        while(currentLetter != morseCode[index] && index < 26)
        {
            ++index;
        }
        
        output += 'a' + index;
    }
    
    return output;
}
