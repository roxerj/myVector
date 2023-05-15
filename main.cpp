#include <vector>
#include "vector.h"

using namespace std;
int main()
{
    myVector<int> vec {10, 20, 30, 40, 50};
    vec.push_back(1); 
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.print();
    vec.shrink_to_fit();
    vec.print();
    
    


}