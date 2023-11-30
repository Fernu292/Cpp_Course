#include <iostream>

using namespace std;


void duplicar(const int& number) {
    cout<<number<<endl;
    cout<<&number<<endl;
}

int main(){

    int num(10);
    cout<<&num<<endl;
    duplicar(num);


    return 0;
}