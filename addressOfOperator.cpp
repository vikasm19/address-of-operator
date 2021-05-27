// Address Of operator;

#include <iostream>
using namespace std;
int main() {
    int x = 5;
    cout<<"Address of x: "<<&x<<endl;
    
    // *Limitations
    // We can use this method to print address in all data type instead of char.
    //Let's see what happended in char data type;
    char y = 'B';
    /*
    cout<<"Address of y: "<<&y<<endl;  */
    
    //This should be our code but it will print value in y isntead of it's address.
    //So our code will be look like;
    
    cout<<"Address of y: "<<(void*)&y<<endl;
    //  (void*) is just for expilict type casting from (char* to void*)
    return 0;
}
