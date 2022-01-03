#include <iostream>
using namespace std;
using std::string;
// for code optimization the declaration will be before the main method....
void printgrade(string name, int grade = 10);
void swap(int &a, int &b);
int main()
{

    /*
    string fullname;
    cout << " this is my first code" << endl;
    cout << " enter your full name"  << endl;
    cout <<abs(-1.5)<<endl;
    cout<<min(4,5)<<endl;
    
    cout <<"here"<<endl;

    for(int i=0;i<10;i++){
        cout<< "the value is " + to_string(i)<<"\n";
        cout<< "i'm concentrated nowsww more than everr"<<endl;
    }
    */
    // **************************************************************************************************************
    // arrays introduction ....
    // **************************************************************************************************************
    // Declarin and iterating over an array.

    /*
string cars[] = {"Volvo", "BMW", "Ford"};
cars[3]="volex";
for (int i = 0; i < 3; i++)
{
    
        cout << cars[i] << endl;
}

*/

    // references are variable that are references to other variables

    /*
int food=3;
int &meal=food;
int* ptr=&food;
cout<<&meal<<endl;
cout<<ptr<<endl;
cout<<&food<<endl;
// derefrencing
cout<<*ptr<<endl;
// modifing pointers
*ptr=38;
cout<<food<<endl;

*/

    // a pointer is a variable that stores the memory address as its value
    printgrade("abdo");
    int a = 10;
    int b = 9;
    cout << "a is " + to_string(a) << endl;
    cout << "b is " + to_string(b) << endl;

    swap(a, b);

    cout << "a is " + to_string(a) << endl;
    cout << "b is " + to_string(b) << endl;

    /*
cout<<a<<endl;
int &c=a;
cout<<c<<endl;
c=44;
cout<<a<<endl;
int *d=&a;
cout<<d<<endl;
cout<<&c<<endl;
cout<<&a<<endl;
// dereferencing is equevelent to the pointer..
cout<<*d<<endl;
*/

    return 0;
}

void printgrade(string name, int grade)
{
    cout << "student " + name + "got grade" + to_string(grade) << endl;
}

void swap(int &a, int &b)
{
    int z = a;
    a = b;
    b = z;
}