//
//  main.cpp
//  HeapSort_C++
//
//  Created by chenyufeng on 9/25/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void HeapSort(vector<int> &vec);

int main(int argc, const char * argv[])
{
    int arr[] = {2,7,1,6,9,0};
    vector<int>vectorArray(arr, arr + sizeof(arr)/sizeof(int));
    HeapSort(vectorArray);
    vector<int>::iterator vectorIte;
    for (vectorIte = vectorArray.begin(); vectorIte != vectorArray.end(); vectorIte++)
    {
        cout << *vectorIte << " ";
    }

    return 0;
}

void HeapSort(vector<int> &vec)
{
    make_heap(vec.begin(), vec.end(), less<int>()); // 建立大顶堆,输出递增序列；
    for (int i = 0; i < vec.size(); i++)
    {
        pop_heap(vec.begin(), vec.end() - i);
    }
}

