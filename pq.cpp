#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
#include "pq.h"
#include "Heap.h"

using namespace std;

    void PriorityQueue :: Insert(int x){
        elements.insert(x);
    };

    int PriorityQueue :: Max(){
       return elements.Getroot();
    };

    int PriorityQueue :: ExtractMax(){
       return elements.Removeroot();
    };

    void PriorityQueue :: Modify(int x,int newx){
        elements.setdata(x,newx);
        elements.heapify(1); 
    };//search ค่า x แล้วเปลี่ยนเป็น newx

    void PriorityQueue :: display(){
        elements.display();
    };