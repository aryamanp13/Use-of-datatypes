//Aryaman Pathak EntcA2 o31 exp2 datatypes
#include<iostream>
using namespace std;

int main(){
    int myIntVar ;
    float myFloatVar;
    char myCharVar;
    double myDoubleVar;
    string myStringVar;
    bool myBoolVar;
    cout<<"Enter an integer:";
    cin>>myIntVar;
    cout<<"Enter an float: ";
    cin>>myFloatVar;
    cout<<"Enter an char: ";
    cin>>myCharVar;
    cout<<"Enter an double: ";
    cin>>myDoubleVar;
    cout<<"Enter an string: ";
    cin>>myStringVar;
    cout<<"Enter an bool: ";
    cin>>myBoolVar;
    cout<<"int is :"<<myIntVar<<endl<<"size of integer is "<<sizeof(myIntVar)<<endl;
    cout<<"float is :"<<myFloatVar<<endl<<"size of float is "<<sizeof(myFloatVar)<<endl;
    cout<<"char is :"<<myCharVar<<endl<<"size of character is "<<sizeof(myCharVar)<<endl;
    cout<<"double is :"<<myDoubleVar<<endl<<"size of double is "<<sizeof(myDoubleVar)<<endl;
    cout<<"string is :"<<myStringVar<<endl<<"size of string is "<<sizeof(myStringVar)<<endl;
    cout<<"bool is :"<<myBoolVar<<endl<<"size of bool is "<<sizeof(myBoolVar)<<endl;
}
/*output
int is :5
size of integer is 4
float is :5.5
size of float is 4
char is :r
size of character is 1
double is :5.5555
size of double is 8
string is :hello
size of string is 32
bool is :0
size of bool is 1*/