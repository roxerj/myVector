# testing myVector class against std::vector


Testing some myVector functions against std::vector functions. Testing with these elements in containers: 1, 2, 3
|**container\function**   |emplace_back(4)   |resize(2)   |erase(_container_.begin()+1)   |10M   |100M   |
|---|---|---|---|---|---|
|**std::vector**   |_elements after function: 1, 2, 3, 4_   |_size after function: 2_   |_elements after function: 1, 2, 3_   |_0.030825s_   |_0.278785s_   |
|**myVector**   |_elements after function: 1, 2, 3, 4_   |_size after function: 2_   |_elements after function: 1, 2, 3_   |_0.026683s_  |_0.214362s_   |







Testing how much time it takes to fill a container with integers:
|**container\size**   |10k   |100k   |1M   |10M   |100M   |
|---|---|---|---|---|---|
|**std::vector**   |_5.4e-05s_   |_0.000475s_   |_0.002321s_   |_0.030825s_   |_0.278785s_   |
|**myVector**   |_3.9e-05s_   |_0.000412s_   |_0.00208s_   |_0.026683s_  |_0.214362s_   |
|**TIME IMPROVEMENT**   |_27.78%_   |_13.26%_   |_10.39%_   |_13.43%_  |_23.11%_   |