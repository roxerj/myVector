# testing myVector class against std::vector

Testing how much time it takes to fill a container with integers:
|**container/size**   |10k   |100k   |1M   |10M   |100M   |
|---|---|---|---|---|---|
|**std::vector**   |_5.4e-05s_   |_0.000475s_   |_0.002321s_   |_0.030825s_   |_0.278785s_   |
|**myVector**   |_3.9e-05s_   |_0.000412s_   |_0.00208s_   |_0.026683s_  |_0.214362s_   |
|**TIME IMPROVEMENT**   |_27.78%_   |_13.26%_   |_10.39%_   |_13.43%_  |_23.11%_   |