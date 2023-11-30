#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
    Pointer declaring syntax
    vatiable_type *pointer_name;

*/


int main(){
    
    printf("\n\n");
    //If we create a pointer and don't initialize it, we must to reference to nullptr to
    //prevent it store garbage data

    //Constructor syntaxis
    int *int_pointer(nullptr); // 0
    int number = 10;
    //C-like sytaxis
    string *String_ptr = nullptr;
    

    cout<<"Sizeof int_pointer: "<<sizeof int_pointer<<endl;
    cout<<"Value of int_pointer: "<<int_pointer<<endl;

    //All pointers into a program have the same size 
    //but can point to a different very very large data types or very small

    int *p1 (nullptr);
    double *p2 (nullptr);
    unsigned long long *p3 (nullptr);
    vector <string> *p4 (nullptr);
    string *p5 (nullptr);

    printf("\n\n");
    // All cout's will print 8 byte for my specialy case
    cout <<"Size of p1:"<< sizeof p1 <<endl;
    cout <<"Size of p2:"<< sizeof p2 <<endl;
    cout <<"Size of p3:"<< sizeof p3 <<endl;
    cout <<"Size of p4:"<< sizeof p4 <<endl;
    cout <<"Size of p5:"<< sizeof p5 <<endl;


    //Useful of pointers
    printf("\n\n");
    int num(10);
    cout<<"Value of num is: "<<num<<endl;
    cout<<"sizeof num: "<<sizeof num<<endl;
    cout<<"Direction memory: "<<&num<<endl;

    //Declaring and using a pointer

    printf("\n");

    int *p;

    cout<<"Value of p whitout initialize it: "<<p<<endl; //garbage
    cout<<"Address of p: "<<&p<<endl;
    cout<<"Size of p: "<<sizeof p<<endl;

    p = nullptr;

    p = &num;

    cout<<"New value of p: "<<p<<endl;

    //We use the *p operator to get the data stored in the address that 
    //own pointer is pointing to
    cout<<"Value stored where p is pointing to: "<<*p<<endl;

    return 0;
}