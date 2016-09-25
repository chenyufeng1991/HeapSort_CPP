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
    for (int i = 0; i < vec.size(); i++)
    {
        make_heap(vec.begin(), vec.end() - i, less<int>()); // 建立小顶堆,输出递增序列；
        swap(vec[0], vec[vec.size() - 1 - i]); //
    }
}

