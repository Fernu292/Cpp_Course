/*
    Access the data we're pointing to - dereferencing a pointer

    if score_ptr is a pointer and has a valid memory address
    then you can access the data at the address contained in the score_ptr
    using the dereferencing operator *
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main(){
    cout<<"\n-----------------------------"<<endl; 

    int score(100);
    int *score_ptr = &score;

    cout<<"\nDirection of score: "<<score_ptr<<endl; //Address
    cout<<"Value of score from the pointer: "<<*score_ptr<<endl; //100

    *score_ptr = 200;
    cout<<"New score: "<<*score_ptr<<endl;//200
    cout<<"New score: "<<score<<endl; //200

    cout<<"\n-----------------------------"<<endl; 
    
    double high_temp (100.7);
    double low_temp (37.4);
    double *temp_ptr = &high_temp;

    cout<<"\nHigh Temp: "<<*temp_ptr<<endl;

    temp_ptr = &low_temp;

    cout<<"Low Temp: "<<*temp_ptr<<endl;

    cout<<"\n-----------------------------"<<endl; 

    string name ("Fernando");
    string *string_ptr = &name;

    cout<<"\nName by ptr: "<<*string_ptr<<endl;
    name = "Luis";
    cout<<"Changed name: "<<*string_ptr<<endl;

    cout<<"\n-----------------------------"<<endl; 

    vector<string> stooges {"Larry", "Moe", "Curly"};
    vector<string> *vector_ptr {nullptr};

    vector_ptr = &stooges;

    cout<<"First stooge: "<<(*vector_ptr).at(0)<<endl;
    cout<<"Stooges: ";

    for (auto stooge : *vector_ptr) {
        cout<<stooge<<" ";
    }
    cout << endl;

    cout<<"\n-----------------------------"<<endl; 

    return 0;
}