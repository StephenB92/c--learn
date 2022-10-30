#include <iostream>
#include <cmath>

using namespace std;

int main()  {
    /* Using user input */

    int age;
    cout << "Enter your age: ";
    cin >> age;

    cout << "You are " << age << " Years old" << endl;
    
    return 0;

}

/* 
Printing strings to console 

    string characterName = "Stephen";
    int characterAge;
    characterAge = 69;

    cout << "Once was a lad called " << characterName << endl;
    cout << "He was " << characterAge << "years old" << endl;
    cout << "Liked being called " << characterName << endl;
    cout << "Also didn't like" << endl;
    cout << "being " << characterAge << endl;
*/

/* 
Data types = char, string, int, float (can use float or double but stick with double as its broader than float) 

    char grade = 'A';
    string phrase = "Giraffe Academy";
    int age = 50;
    double gpa = 2.3;
    bool isMale = true;

    cout << grade << endl;

    return 0;
*/

/*
Working with strings 

    string phrase = "Hellooooo Dolly";
    string phrasesub;
    phrasesub = phrase.substr(8, 3); ***8 - index starting point of new string. 3 - how many more indexes it goes***
    cout << phrasesub << endl;

*/


/* 
Working with numbers

    int wnum = 5;
    double dnum = 5.5;

    cout << pow(2, 5) << endl;
    cout << sqrt(36) << endl;
    cout << round(4.6) << endl;
    cout << ceil(4.1) << endl;
    cout << floor(4.9) << endl;
    cout << fmax(3, 10) << endl;

*/