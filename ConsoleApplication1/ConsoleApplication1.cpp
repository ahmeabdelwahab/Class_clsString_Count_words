#include <iostream>
using namespace std;

#include <iostream>
#include "clstring.h"
using namespace std;



int main()
{
    clstring string1;

    // Assigning a string with 3 words
    string1.setvalue("sherif ssss ahmed A");

    cout << "Text: " << string1.getvalue() << endl;
    cout << "Words Count: " << string1.countofwords() << endl;

    string1.printmethod();
    cout << endl << "___________________"<<endl;
    cout << string1.countofwords();
    cout << endl << "___________________" << endl;
    cout << endl;
    return 0;
}