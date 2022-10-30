#include <iostream>
#include <cmath>

using namespace std;

/* Pointers - 2:59:00 on video */

int main() {
    return 0;
}

/* All the  below are built into int main() {} function */

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

/* 
Using user input 

    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello " << name << endl;
    
    return 0;

*/

/* 
Build a calculator 
    int main() {

        double num1, num2;
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        cout << num1 + num2 << endl;
    }
*/

/* 
Madlibs Game 

    int main() {

        string color, pluralNoun, celebrity;

        cout << "Enter a color: ";
        getline(cin, color);

        cout << "Enter a plural noun: ";
        getline(cin, pluralNoun);

        cout << "Enter a celebrity: ";
        getline(cin, celebrity);

        cout << "Roses are " << color << endl;
        cout << pluralNoun << " are blue" << endl;
        cout << "I love " << celebrity << endl;

    }
*/

/* Using Arrays 
int main() {
    int luckyNums[20] = {4, 8, 15, 16, 23, 42};

    luckyNums[0] = 100;

    cout << luckyNums[0];

    return 0;
}
*/


/* functions 

## Can declare function here and fill in detail after. - Void - returns no value from function ##

void sayHi(string name, int age);

int main() {
    sayHi("Mike", 60);
    sayHi("Tom", 40);
    sayHi("Bob", 12);
    return 0;
}

void sayHi(string name, int age) {
    cout << "Hello " << name << " you are " << age << endl;
}

*/

/* return keyword 

    double cube(double num){
        return num * num * num;
    }

    int main() {

        cout << cube(5.0);
        return 0;
    }

    void sayHi(string name, int age) {
        cout << "Hello " << name << " you are " << age << endl;
    }
*/

/* if statements 

int main() {

    bool isMale = false;
    bool isTall = true;
    if(isMale && isTall){
        cout << "You are a tall man" << endl;
    } else if(isMale && !isTall){
        cout << "You are a short man" << endl;
    } else if(!isMale && isTall){
        cout << "You are a tall woman" << endl;
    } else {
        cout << "You are a short woman" << endl;
    }
    return 0;
}
*/

/* if statements w/ comparisons 

    int getMax(int num1, int num2, int num3) {
        int result;

        if(num1 >= num2 && num1 >= num3){
            result = num1;
        } else if(num2 >= num1 && num2 >= num3) {
            result = num2;
        } else {
            result = num3;
        }

        return result;
    }

    int main() {

    cout << getMax(2, 5, 3);
        return 0;
    }
*/


/* calculator mk.2 

    int main() {

        int num1, num2;
        char op;

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter operator: ";
        cin >> op;
        cout << "Enter second number: ";
        cin >> num2;
        int result;
        if(op == '+') {
            result = num1 + num2;
        } else if(op == '-') {
            result = num1 - num2;
        } else if(op == '/') {
            result = num1 / num2;
        } else if(op == '*') {
            result = num1 * num2;
        } else {
            cout << "Invalid operator";
        }
        cout << result;



        return 0;
    }
*/

/* switch statements 

string getDayOfWeek(int dayNum){
    string dayName;

    switch(dayNum){
        case 0:
            dayName = "sunday";
            break;
        case 1:
            dayName = "monday";
            break;
        case 2:
            dayName = "tuesday";
            break;
        case 3:
            dayName = "wednesday";
            break;
        case 4:
            dayName = "thursday";
            break;
        case 5:
            dayName = "friday";
            break;
        case 6:
            dayName = "saturday";
            break;
        default:
            dayName = "Invalid day number";
    }

    return dayName;

}

int main() {

    cout << getDayOfWeek(10) << endl;

    return 0;
}
*/

/* while loops 


    int main() {

        int index = 6;
        do {
            cout << index << endl;
            index++;
        } while(index <= 5);
        return 0;
    }
*/

/* guessing game 


    int main() {

        int secretNum = 7;
        int guess;
        int guessCount = 0;
        int guessLimit = 3;
        bool outOfGuesses = false;

        while(secretNum != guess && !outOfGuesses){
            if(guessCount < guessLimit){
                cout << "Enter guess: ";
                cin >> guess;
                guessCount++;
            } else {
                outOfGuesses = true;
            }
            
        }

        if(outOfGuesses){
            cout << "You lose hahahahahaha" << endl;
        } else {
            cout << "Clever girl..." << endl;
        }

        return 0;
    }

*/

/* for loops 

    int main() {

        int index = 1;
        // while(index <= 5) {
        //     cout << index << endl;
        //     index++;
        // }

        int nums[] = {1, 2, 5, 7, 3};
        for(int i = 0; i < 5; i++){
            cout << nums[i] << endl;
        }
        return 0;
    }
*/

/* exponent function 

int power(int baseNum, int powNum){
    int result = 1;
    for(int i = 0; i < powNum; i++) {
        result = result * baseNum;
    }
    return result;
}

int main() {
    cout << power(4, 2) << endl;
    return 0;
}
*/

/* 2d arrays 

    int main() {

        int numberGrid[3][2] = {
            {1, 2}, 
            {3, 4}, 
            {5, 6}
        };
        cout << numberGrid[2][0] << endl;

        return 0;
    }

*/

/* nested loops 

    int main() {

        int numberGrid[3][2] = {
            {1, 2}, 
            {3, 4}, 
            {5, 6}
        };
        
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 2; j++){
                cout << numberGrid[i][j];
            }
            cout << endl;
        }

        return 0;
    }

*/