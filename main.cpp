#include <iostream>
using namespace std;

int main(){
    char name[10];
    char std_num[15];

    cout << "Enter your Name: ";
    cin >> name;

    cout << "Enter your Student Number: ";
    cin >> std_num;
    cout << endl;

    cout << "Hello World!!" << endl;
    cout << "Name: " << name;
    cout << "Student Number: " << std_num << endl;

    return 0;
}