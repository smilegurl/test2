#ifndef PriorityQueue_H
#define PriorityQueue_H
#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
#include "Heap.h"

using namespace std;

class PriorityQueue{
public:
    
    void Insert(int x);//insert an element into the priority queue
    int Max(); //return element in the queue with the largest key
    int ExtractMax(); //return element in the queue with the largest key, and remove that element from the key 
    void Modify(int x,int newx); //change element x to newx and fix the PQ if new insertion violates its property
    void display(); //display

private:
    Heap elements; 

};

#endif 