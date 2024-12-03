#ifndef Heap_H
#define Heap_H
#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

const int MAX_SIZE = 100;

class Heap{
public: 
    Heap();
    Heap(int initData[], int len); 

    //return true if heap property is satisfied, false if violated
    bool IsHeap();
    void heapify (int i); 
    void build_heap() ; //  เรียงค่าใน array ในเป็น heap
    void insert (int item) ; // เพิ่มความยาวheap เก้บข้อมูลไว้ช่องท้าย(j) เปลี่ยนเทียบค่า+สลับที่
    int Getroot (); //return root node
    int Removeroot (); //delete the root node
    int getdata (int i); 
    void setdata(int x,int newx);
    int getheapLength();

    void display ();

private:
    int parent(int i); 
    int leftchild (int i); 
    int rightchild (int i);     
    
    int data [MAX_SIZE];     //You could store elements from index 1 
    int heapLength;     // the actual number of elements in the heap
};

#endif