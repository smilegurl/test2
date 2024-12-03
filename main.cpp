#include <iostream>
#include "Heap.h"
#include "pq.h"

using namespace std;

int main(){
    //Heap heap;
    int initData[] = {10, 20, 5, 40, 1, 8, 12, 15};
    Heap heap(initData, 8);
    
    cout << "Input data: ";
    for (int i = 1; i <= 8; i++) {
        cout << initData[i - 1] << " "; // Show original input data
    }
    cout << endl;

    cout << "Heap after building: ";
    heap.display();
   
    if(heap.IsHeap()){
        cout << "The data structure is a Max-Heap." << endl;
    } else {
        cout << "The data structure is not a Max-Heap." << endl;
        cout << "Modify Heap...." << endl;
        heap.build_heap();
        if (heap.IsHeap()) {
        cout << "The data structure is a Max-Heap." << endl;
        } else {
            cout << "The data structure is not a Max-Heap." << endl;
        }
    }

    cout << "Heap after building: ";
    heap.display();

    heap.insert(25);
    cout << "Insert number 25 in Heap" << endl;
    cout << "Check Max-Heap.." << endl;


    if (heap.IsHeap()) {
        cout << "The data structure is a Max-Heap." << endl;
    } else {
        cout << "The data structure is not a Max-Heap." << endl;
        cout << "Modify Heap...." << endl;
        heap.build_heap(); // Build the Max-Heap
        if (heap.IsHeap()) {
            cout << "The data structure is a Max-Heap." << endl;
        } else {
            cout << "The data structure is not a Max-Heap." << endl;
        }
    }
    cout << "Heap after insert: " << endl;
    heap.display();

    PriorityQueue pq;
    int len, x;
    cout << "Please enter length of PriorityQueue :  " << endl ;
    cin >> len  ;
    cout << "Please enter Number in PriorityQueue:  " << endl ;
    for (int i = 0; i < len ; i++){
        cin >> x ;
        pq.Insert(x);
    }

    cout << "Priority Queue elements: ";
    pq.display();

    cout << "Find Max " << pq.Max() <<endl;
    cout << "Find Max after remove root " << pq.ExtractMax() <<endl;
    cout << "Find Max " << pq.Max() <<endl;
    cout << "Modify 25 to 40" <<endl;
    pq.Modify(25, 40);
    cout << "Find Max " << pq.Max() <<endl;
    return 0;
}
