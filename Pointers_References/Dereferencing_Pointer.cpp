/*
    Access the data we're pointing to - dereferencing a pointer

    if score_ptr is a pointer and has a valid memory address
    then you can access the data at the address contained in the score_ptr
    using the dereferencing operator *
*/

#include <iostream>

using namespace std;


int main(){

    int score(100);
    int *score_ptr = &score;

    cout<<"Direction of score: "<<score_ptr<<endl; //Address
    cout<<"Value of score from the pointer: "<<*score_ptr<<endl; //100

    *score_ptr = 200;
    cout<<"New score: "<<*score_ptr<<endl;//200
    cout<<"New score: "<<score<<endl; //200

    return 0;
}