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

/**
 *  堆排序时间复杂度O(nlogn),空间复杂度O(1),不稳定排序
 *
 *  @param vec <#vec description#>
 */
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

/**
 *  pop_heap()并不是真的把最大堆最小堆的元素从堆中弹出来，而是重新排序堆，把首元素和尾元素交换，然后将[first,last-1]的数据再做成一个堆。
 此时，原来的首元素位于迭代器end-1的位置，不再属于堆的一部分。
 
 注意:pop_heap和push_heap的操作本身就是一个调整堆的过程。
 *
 */
void HeapSort(vector<int> &vec)
{
    make_heap(vec.begin(), vec.end(), less<int>()); // 建立大顶堆,输出递增序列；
    for (int i = 0; i < vec.size(); i++)
    {
        pop_heap(vec.begin(), vec.end() - i);
    }
}

