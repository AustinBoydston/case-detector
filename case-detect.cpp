#include <iostream>
//#include <string>
using namespace std;

//constexpr unsigned int hash(const char *s, int off = 0);
void lowOut();
void outOther();
void upOut();
int sBlock(char* input);



int main(int num, char** args)
{
  //  int check = (int)_strlen(*args);

char* input = args[2];
//cout << (int)_strlen(*args) << endl;
//cout << input << endl;
//cout << args[2] << endl;
//if(strlen(args) > 3)


//try
{
    

//if(*args[3] == '\0')
{

  
   //outOther();
}
//else
{

}

}
//catch (...)
{
 
return sBlock(input);
}

  //  outOther();
    return 0;
}




void lowOut()
{
cout << "This is a lower case letter." << endl;
}

void upOut()
{
cout << "This is an upper case letter" << endl;
}

void outOther()
{
cout << "Please only input letters for this program." << endl;
}

//constexpr unsigned int hash(const char *s, int off = 0) {                        
 //   return !s[off] ? 5381 : (hash(s, off+1)*33) ^ s[off];                           
//}   


int sBlock(char* input)
{
    switch(*input)
{
case 'a': lowOut();
return -1;
break;
case 'b':lowOut();
return -1;
break;
case 'c':lowOut();
return -1;
break;
case 'd':lowOut();
return -1;
break;
case 'e':lowOut();
return -1;
break;
case 'f':lowOut();
return -1;
break;
case 'g':lowOut();
return -1;
break;
case 'h':lowOut();
return -1;
break;
case 'i':lowOut();
return -1;
break;
case 'j':lowOut();
return -1;
break;
case 'k':lowOut();
return -1;
break;
case 'l':lowOut();
return -1;
break;
case 'm':lowOut();
return -1;
break;
case 'n':lowOut();
return -1;
break;
case 'o':lowOut();
return -1;
break;
case 'p':lowOut();
return -1;
break;
case 'q':lowOut();
return -1;
break;
case 'r':lowOut();
return -1;
break;
case 's':lowOut();
return -1;
break;
case 't':lowOut();
return -1;
break;
case 'u':lowOut();
return -1;
break;
case 'v':lowOut();
return -1;
break;
case 'w':lowOut();
return -1;
break;
case 'x':lowOut();
return -1;
break;
case 'y':lowOut();
return -1;
break;
case 'z':lowOut();
return -1;
break;

case 'A':upOut();
return 1;
break;
case 'B':upOut();
return 1;
break;
case 'C':upOut();
return 1;
break;
case 'D':upOut();
return 1;
break;
case 'E':upOut();
return 1;
break;
case 'F':upOut();
return 1;
break;
case 'G':upOut();
return 1;
break;
case 'H':upOut();
return 1;
break;
case 'I':upOut();
return 1;
break;
case 'J':upOut();
return 1;
break;
case 'K':upOut();
return 1;
break;
case 'L':upOut();
return 1;
break;
case 'M':upOut();
return 1;
break;
case 'N':upOut();
return 1;
break;
case 'O':upOut();
return 1;
break;
case 'P':upOut();
return 1;
break;
case 'Q':upOut();
return 1;
break;
case 'R':upOut();
return 1;
break;
case 'S':upOut();
return 1;
break;
case 'T':upOut();
return 1;
break;
case 'U':upOut();
return 1;
break;
case 'V':upOut();
return 1;
break;
case 'W':upOut();
return 1;
break;
case 'X':upOut();
return 1;
break;
case 'Y':upOut();
return 1;
break;
case 'Z':upOut();
return 1;
break;

default: outOther();
}
}