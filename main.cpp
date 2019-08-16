#include <iostream>

using namespace std;

int main() {
    
//Example #1
    char vowels[] {'a' ,'e' ,'i' ,'o' ,'u' };
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] <<endl;
    
    //cin >> vowels[5]; will cause program to crash (out of bounds - don't do this!!!)
 
//Example #2   
    double hi_temps[] { 90.1, 89.6, 77.5, 81.6};
    cout << "\nThe first high temperature is: " << hi_temps[0] <<endl;
    
    hi_temps[0] = 100.7;  //set the first element in hi_temps to 100.7 (overrides 90.1 with 100.7)
    cout << "The first high temperature is now: " << hi_temps[0] <<endl;
    
//Example #3
//    int test_score[5]; //garbage memory and junk(unintialized array)
//    int test_score[5] {}; // all init to zero 
    int test_score[5] {100, 90}; // places value 100 in first index 90 in second 
    cout << "\nThe first test score at index 0: " << test_score[0] << endl;
    cout << "Second test score at index 1: " << test_score[1] << endl;
    cout << "Third test score at index 2: " << test_score[2] << endl;
    cout << "Forth test score at index 3: " << test_score[3] << endl;
    cout << "Fifth test score at index 4: " << test_score[4] << endl;
    
    cout << "\nEnter 5 test scores: " << endl;
    cin >> test_score[0];
    cin >> test_score[1];
    cin >> test_score[2];
    cin >> test_score[3];
    cin >> test_score[4];
    
    cout << "\nThe updated array is: " << endl;
    cout << "The first test score at index 0: " << test_score[0] << endl;
    cout << "Second test score at index 1: " << test_score[1] << endl;
    cout << "Third test score at index 2: " << test_score[2] << endl;
    cout << "Forth test score at index 3: " << test_score[3] << endl;
    cout << "Fifth test score at index 4: " << test_score[4] << endl;
    
    cout << "\nNotice what the value of the array is: " << test_score << endl; // shows memory address of the array
    //Each memory address from the starting point of an array adds 4 bytes to the initial memory address value.
    
    cout << endl;
    
    return 0;
}