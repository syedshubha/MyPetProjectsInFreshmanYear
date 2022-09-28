// Read through and run the code.
// At the end of this file, there are some questions.
// If you can answer them, you have understood constructors
// destructors, copy constructors, assignment operator overloads well.
//

#include <iostream>
#include <cstring>

using namespace std;

class String {
    char *pStr;

public:
    String();                   // Default constructor
    String(const char *pStr);   // Constructor that takes a character array
    String(const String &str);  // Copy constructor
    ~String();                  // Destructor

    void set(const char *pStr);
    const char* get();

    String operator=(const String &str); // Assignment operator overload

    //
    // Home work. Implement the following:
    //

    //
    // Produce and return a string by concatenating String a
    // to the current string
    //
    String operator+(const String& a);

    //
    // Produce and return a string by repeating the current
    // string num times.
    //
    String operator*(int num);

private:
    void initString(const char *pStr);
};

void String::initString(const char *pStr) {
    delete[] this->pStr;

    this->pStr = new char[strlen(pStr)+1];
    strcpy(this->pStr, pStr);
}

String::String()
{
    //cout << "Default constructor called.\n";
    pStr = NULL;
    initString("");
}

String::String(const char *pStr) {
    //cout << "Parameterized constructor called.\n";
    this->pStr = NULL;
    initString(pStr);
}

String::String(const String &str) {
    //cout << "Copy constructor called.\n";
    initString(str.pStr);
}

String::~String() {
    //cout << "Destructor called.\n";
    delete[] pStr;
}

void String::set(const char *pStr) {
    initString(pStr);
}

const char* String::get() {
    return pStr;
}

String String::operator=(const String &str) {
    cout << "Assignment operator (overloaded) called.\n";
    initString(str.pStr);
    return *this;
}

int main()
{
    // Array of strings with initializers;
    String str[5] = {
        "Apple",
        "Orange",
        "Banana",
        "Mango",
        "Coconut"
    };

    String *p = &str[0]; // String pointer;
    int i;

    p->set("Guava");
    for (i = 0; i < 5; i++) {
        cout << str[i].get() << endl;
    }

    String temp = *p;
    String temp2;

    temp2 = temp = str[4];
    cout << "temp2 is set to: " << temp2.get() << endl;

    //
    // After completing the home work, uncomment the
    // following code. It should compile fine. Check
    // your output
    //
    // temp2 = temp + String(" ") + str[0] + String(" ");
    // cout << temp2.get() << endl;
    // cout << (temp2*3).get() << endl;
    //


    return 0;
}

//
// Some questions to think about:
// =============================
// Why const char* (instead of just char*) is used in the constructor,
// set and initString methods?
//
// In lines 69-75 which constructor(s) get called? To check, you can
// uncomment lines 33, 38, 43, 48 and check the output.
// Can you figure it out?
//
// In line 85, which constructor is called? What would happen
// if copy constructor was not implemented?
//
// In line 88, what is happening? To check, you can uncomment line 61
// and check the output. Can you figure it out? What would happen if
// assignment operator was not overloaded?
//
// Why does copy constructor take a reference instead of call by value object?
//
// Why is const used in the parameter in the assignment operator overload
// in line 25? What happens if you remove it? Answer the same question for
// the + operator overload.
//
// Have you implemented the home work and uncommented lines 121-124?
