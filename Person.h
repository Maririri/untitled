#include <string>
#include <vector>
#include <map>
#include <list>
#include <queue>
#include <deque>

//using namespace std;

class A
{
public:
    int a_a;

    class A1
    {
    int a_a;
    };

private:

    std::string a_s;
};

class B: public A
{
public:
    int b_a;


private:
    std::string b_s;
    std::vector<int> b_v;
    std::map<double, std::string> b_m;

};

class C: A
{
public:
    int c_a;

// Invoke generation here


private:
    std::string c_s;
};

namespace N
{

class D : B, C
{
public:

    D(int d_a) : d_a(d_a) {
    }

    D(int d_a, std::string &d_s) : d_a(d_a), d_s(d_s) {
    }

    int d_a;
private:
    std::string d_s;
};
}

template<unsigned char K>
struct KdNode {};

void *malloc(int size);

template <typename NodeData, unsigned char K = 3> class KdTree {
public:
    KdNode<K> *nodes;

    void initialize();
};

template<typename NodeData, unsigned char K>
void KdTree<NodeData, K>::initialize() {
    nodes = (KdNode<K> *) malloc(10);
}


