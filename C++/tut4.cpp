#include<iostream>

using namespace std;

int x = 69; //Global Variable

int glo(){
    cout << "This is Global Variable: " <<x;
    return 0;
}

int main(){
    // // int a = 47;
    // // int b = 69;
    // int a = 47, b = 69; 
    // cout << "Value of a is:"<< a <<" value of b is:"<< b;
    int x = 5; //Local Variable
    cout << "This is local Variable: " <<x <<endl;
    glo();

    return 0;

}
