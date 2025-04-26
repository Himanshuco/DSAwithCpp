#include <iostream>
using namespace std;
int main(){
    //Variables :-
    //Syntax :- Datatype var_name = value;
    char name[] = "Himanshu";
    int age = 20;
    float cgpa = 8.65;
    bool BTech = true;
    cout<<"Hello ! "<<name<< "Your age is "<<age <<" having a CGPA of "<<cgpa<<" Studying in B.tech"<<endl;

    //sizeof(var_name ): Print the size of the particular variable
    cout<<"Size of age is "<<sizeof(age)<<endl;
    cout<<"Size of name is "<<sizeof(name)<<endl;
    cout<<"Size of cgpa is "<<sizeof(cgpa)<<endl;
    cout<<"Size of  is Boolean  "<<sizeof(BTech)<<endl;


}