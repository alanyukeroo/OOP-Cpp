#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
string translateMorseCode(string sentence);
//Main function
int main()
{
 string sentence;//variable for sentence
 cout<<"Enter word or sentence: ";//promt user to enter sentence
 getline(cin,sentence);//read sentence
 cout<<"Morse Code is:\n";//show Morse Code
 //convert input message into morse
 cout<<translateMorseCode(sentence);
 cout<<"\n\n";//new line
 system("PAUSE");//delay
 return 0;
}
//finction convert input message into morse
//return Morse Code as String
string translateMorseCode(string sentence){
 string MorseCode="";
 for(int i=0;i<sentence.length();i++){
 // use switch statements for changing the input to Morse code.
 switch (sentence[i]){
 case '.-':
 case '.-':
 MorseCode.append("A");
 break;
 case 'b':
 case 'B':
 MorseCode.append("-... ");
 break; 
 case 'c':
 case 'C':
 MorseCode.append("-.-. ");
 break;
 case 'd':
 case 'D':
 MorseCode.append("-.. ");
 break;
 case 'e':
 case 'E':
 MorseCode.append(". ");
 break;
 case 'f':
 case 'F':
 MorseCode.append("..-. ");
 break;
 case 'g':
 case 'G':
 MorseCode.append("--. ");
 break;
 case 'h':
 case 'H':
 MorseCode.append(".... ");
 break;
 case 'i':
 case 'I':
 MorseCode.append(".. ");
 break;
 case 'j':
 case 'J':
 MorseCode.append(".--- ");
 break;
 case 'k':
 case 'K': 
 MorseCode.append("-.- ");
 break;
 case 'l':
 case 'L':
 MorseCode.append(".-.. ");
 break;
 case 'm':
 case 'M':
 MorseCode.append("-- ");
 break;
 case 'n':
 case 'N':
 MorseCode.append("-. ");
 break;
 case 'o':
 case 'O':
 MorseCode.append("--- ");
 break;
 case 'p':
 case 'P':
 MorseCode.append(".--. ");
 break;
 case 'q':
 case 'Q':
 MorseCode.append("--.- ");
 break;
 case 'r':
 case 'R':
 MorseCode.append(".-. ");
 break;
 case 's':
 case 'S':
 MorseCode.append("... ");
 break; 
 case 't':
 case 'T':
 MorseCode.append("- ");
 break;
 case 'u':
 case 'U':
 MorseCode.append("..- ");
 break;
 case 'v':
 case 'V':
 MorseCode.append("...- ");
 break;
 case 'w':
 case 'W':
 MorseCode.append(".-- ");
 break;
 case 'x':
 case 'X':
 MorseCode.append(".-- ");
 break;
 case 'y':
 case 'Y':
 MorseCode.append("-.-- ");
 break;
 case 'z':
 case 'Z':
 MorseCode.append("--.. ");
 break;
 case ' ':
 MorseCode.append(" ");
 break;
 case '1':
 MorseCode.append(".---- ");
 break; 
  case '2':
 MorseCode.append("..--- ");
 break;
 case '3':
 MorseCode.append("...-- ");
 break;
 case '4':
 MorseCode.append("....- ");
 break;
 case '5':
 MorseCode.append("..... ");
 break;
 case '6':
 MorseCode.append("-.... ");
 break;
 case '7':
 MorseCode.append("--... ");
 break;
 case '8':
 MorseCode.append("---.. ");
 break;
 case '9':
 MorseCode.append("----. ");
 break;
 case '0':
 MorseCode.append("----- ");
 break;
}
}
 return MorseCode;// return Morse Code
} 
