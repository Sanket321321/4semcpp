Create a class String which contains a character pointer (Use new and delete operator)

Write a C++ program to overload following operators

a. ! To reverse the case of each alphabet from given string.

b. [ ] To print a character present at specified index


*/




#include<iostream>
#include<string.h>
using namespace std;


class String {
    char* str;
public:
    String(char* s) {
        int len = strlen(s);
        str = new char[len+1];
        strcpy(str, s);
    }

    void operator! () {
        int len = strlen(str);
        for(int i=0;i<len;i++) {
            if(str[i]>='a' && str[i]<='z') {
                str[i] = str[i]-32;
            }
            else if(str[i]>='A' && str[i]<='Z') {
                str[i] = str[i]+32;
            }
        }
    }

    char operator[] (int index) {
        int len = strlen(str);
        if(index>=0 && index<len) {
            return str[index];
        }
        else {
            return '\0';
        }
    }

    ~String() {
        delete[] str;
    }
};

int main() {
    String s("Hello World!");
    cout << "Original String: "<< s << endl;
    !s;
    cout << "String after reversing case: "<< s << endl;
    cout << "Character at index 6: " << s[6] << endl;
    return 0;
}