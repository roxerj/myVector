#include <vector>
#include "vector.h"
#include "timer.h"
using namespace std;


int main()
{ 
    //testing myVector class

    std::vector<int> stdVec {1,2,3};
    myVector<int> myVec {1,2,3};

    stdVec.erase(stdVec.begin() + 1);
    myVec.erase(myVec.begin() + 1);
    for(size_t i = 0; i < stdVec.size(); i++)
    {
        std::cout << stdVec[i] << " ";
    }
    std::cout << "size: " << stdVec.size() << ", Capacity: " << stdVec.capacity() << std::endl;
    myVec.print();






    // unsigned int sz = 0;  // 100000, 1000000, 10000000, 100000000
    // std::cout << "Enter size of container: ";
    // std::cin >> sz;


    // Timer stdVecTimer;
    // stdVecTimer.start();


    // for (int i = 1; i <= sz; ++i)
    // {
    //     stdVec.push_back(i);
    // }
    // stdVecTimer.stop();

    // Timer myVecTimer;
    // myVecTimer.start();
    // for (int i = 1; i <= sz; ++i)
    // {
    //     myVec.push_back(i);
    // }
    // myVecTimer.stop();

    // std::cout << "std::vector: " << stdVecTimer.elapsed() << " sec." << std::endl;
    // std::cout << "myVector: " << myVecTimer.elapsed() << " sec." << std::endl; 


}