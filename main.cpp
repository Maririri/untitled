#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#include "Person.h"

class Person {
public:
    std::string name;
    int age;

    Person(string name, int age) : name(name), age(age) {
    }
};

struct Simple{
    Simple(int x, char y , double z)
            :a(x)
            , b(y)
             ,c(z)
    {}

int a;
char b;
double c;


};

class MyIterator : public std::iterator<std::input_iterator_tag, int>
{
    int* p;
public:
    MyIterator(int* x) :p(x) {}
    MyIterator(const MyIterator& mit) : p(mit.p) {}
    MyIterator& operator++() {++p;return *this;}
    MyIterator operator++(int) {MyIterator tmp(*this); operator++(); return tmp;}
    bool operator==(const MyIterator& rhs) {return p==rhs.p;}
    bool operator!=(const MyIterator& rhs) {return p!=rhs.p;}
    int& operator*() {return *p;}
};



std::vector<int> f(const std::vector<char>& l) {
    std::vector<int> lhs(l.begin(), l.end()); //errors are here
    return lhs;
}

int add(int a, int b)
{
    return a+b;
}


namespace a {
    template <class T>
    class x {};

    class y {};
}

using namespace a;

namespace b {
    void foo(x<y> x) { //Parameter 'c' is never used
    }
}
 
int main() {

    std::vector<char> c = {'a', 'c'};
    f(c);

//    using namespace a;

    x<y> x1;
    b::foo(x1);


    int n = add(1, 2);

    Simple s1(11, 22, 33);
    int arr[5] = {1,2,3,4,5};



    Person Person11("", 5);

    N::D * pD = new N::D(5);

    // main problem example:
    string hello = "Hello";
    string str;
    str.append(hello.begin(), hello.begin() + 2); // *false* error: "parameter type mismatch"

    // also happens with explicit types:
    string::const_iterator it1 = hello.begin();
    string::const_iterator it2 = hello.begin() + 2;
    str.append(it1, it2); // *false* error: "parameter type mismatch"

    //-------------//
    int data[100];
    std::vector<int> newdata(100);

    std::copy(data, data+100, newdata.begin());


    std::vector<int> newdata1(100);

    std::copy(data, data+100, newdata1.begin());


    int* where = std::find(data, data+100, 7);


    const int* first = data;
    const int* last  = data + 100;
    // can't modify location returned by the following
    const int* where1 = std::find(first, last, 7);

    cout << str;

    int numbers[]={10,20,30,40,50};
    MyIterator from(numbers);
    MyIterator until(numbers+5);
    for (MyIterator it=from; it!=until; it++)
        std::cout << *it << ' ';
    std::cout << '\n';

    cout << "Hello, World!" << endl;
    return 0;
}