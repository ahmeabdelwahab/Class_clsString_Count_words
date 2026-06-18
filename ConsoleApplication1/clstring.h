#pragma once
#include <iostream>
#include <string>

using namespace std;

class clstring {
private:
    string _value;
    int _wordcount = 0; // Private data member to hold the count

  
public:
    void _calculateWords() {
        if (_value.empty()) {
            _wordcount = 0;
            return;
        }

        int count = 0;
        bool inWord = false;

        for (int i = 0; i < _value.length(); i++) {
            if (_value[i] != ' ') {
                if (!inWord) {
                    count++;
                    inWord = true;
                }
            }
            else {
                inWord = false;
            }
        }

        // Save the result directly into the private data member
        _wordcount = count;
    }
    // 1. Default Constructor
    clstring() {
        _value = "";
        _wordcount = 0;
    }

    // 2. Parameterized Constructor
    clstring(string value) {
        this->_value = value;
        _calculateWords(); // Update the private member immediately upon creation
    }

    // 3. Setter & Getter
    void setvalue(string value) {
        this->_value = value;
        _calculateWords(); // Update the private member whenever the value changes
    }

    string getvalue() {
        return _value;
    }

    // 4. Getter for the private data member
    int countofwords() {
        return _wordcount; // Simply return the pre-calculated private variable
    }

    // 5. Print Method
    void printmethod() {
        cout << "_________________________ " << endl;
        cout << "String Value is: " << _value << endl;
        cout << "Count Of Words is: " << _wordcount << endl; // Safely using the private data member
        cout << "________________________" << endl;
    }
};