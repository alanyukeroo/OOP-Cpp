#include <iostream>
#include <string>
using namespace std;


	string morsetotext(char c)
	{
	string text = "abcdefghijklmnopqrstuvwqyz"; //osv
	string morse[] = {".-","-...","-.-.","-..", ".", "..-.", "--.",
					  "....", "..", ".---", "-.-", ".-..", "--",
				      "-.", "---", ".--.", "--.-", ".-.", "...", "-",
				      "..-", "...-", ".--", "-..-", "-.--", "--.."}; //osv
	  int index = morse.find(c);
	    if(index!=-1)
            return text[index];
         else
            return " ";
	}

int main()
{
	string kod; 
	getline(cin, kod);
	string text="";
		for(int i=0; i<kod.length(); i++)
		{
        text += morsetotext(kod[i]);
		}
		cout << text << endl;

   return 0;
}

