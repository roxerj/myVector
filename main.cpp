#include <vector>
#include "vector.h"
#include "timer.h"
using namespace std;
int main()
{ 
    // testing myVector class
    unsigned int sz = 0;  // 100000, 1000000, 10000000, 100000000
    std::cout << "Enter size of container: ";
    std::cin >> sz;
    

    Timer stdVecTimer;
    stdVecTimer.start();

    std::vector<int> stdVec;
    for (int i = 1; i <= sz; ++i)
    {
        stdVec.push_back(i);
    }
    stdVecTimer.stop();

    Timer myVecTimer;
    myVecTimer.start();
    myVector<int> myVec;
    for (int i = 1; i <= sz; ++i)
    {
        myVec.push_back(i);
    }
    myVecTimer.stop();

    std::cout << "std::vector: " << stdVecTimer.elapsed() << " sec." << std::endl;
    std::cout << "myVector: " << myVecTimer.elapsed() << " sec." << std::endl;

}