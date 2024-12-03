#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
#include "Heap.h"

using namespace std;

    Heap :: Heap(){ heapLength = 0; }

    Heap :: Heap(int initData[], int len){
        heapLength = len;
        for (int i = 1; i <= len; i++){
            data[i] = initData[i-1];
        }
        build_heap();
    }; 

    bool Heap :: IsHeap(){
        for (int i = 1; i < heapLength/2 ; i++)
        {
            if (leftchild (i) != -1 && leftchild (i) <= heapLength){
                if(data[i] < data[leftchild(i)]){
                    return false;
                }
            }
            if (rightchild (i) != -1 && rightchild (i) <= heapLength){
                if(data[i] < data[rightchild(i)]){
                    return false;
                }
            }
        }
        return true;
    };

    int Heap :: parent(int i){
        if(i == 1){
            return -1;
        }else{
            return i/2 ;
        }
    }; 

    int Heap ::leftchild (int i){    
        if(2*i <= heapLength){
            return 2*i;
        }else{
            return -1;
        }
    };

    int Heap :: rightchild (int i){    
        if(2*i+1 <= heapLength){
            return 2*i+1;
        } else{
            return -1;
        } 
    };     

    void Heap :: heapify (int i){
        int child;
        int tmp = data[i]; 

        while (leftchild (i) != -1 && leftchild (i) <= heapLength) {
            child = leftchild (i); 

            if (child != heapLength && data[child + 1] > data[child]) {
                child++;
            }

            if (data[child] > tmp) {
                data[i] = data[child]; 
                i = child; 
            } else {
                break; 
            }
        }
      
        data[i] = tmp;
    }; 

    void Heap :: build_heap(){
        for (int i = heapLength/2; i >0 ;i--)
        heapify(i);
    } ; 

    void Heap::display(){
        for(int i = 1;i <= heapLength ; i++){
            cout << data[i] << " , ";
        }
        cout << endl;
    }

    void Heap :: insert (int item){
        heapLength++;
        if ( heapLength == 100 ){
            cout << "Priority queue is full";
        }else {
            int j = heapLength;
            while (j > 1 && item > data[j/2]){
                data[j] = data[j/2];
                j = j/2;
            }
            data[j] = item;
        }
    } ; // เพิ่มความยาวheap เก้บข้อมูลไว้ช่องท้าย(j) เปลี่ยนเทียบค่า+สลับที่

    int Heap :: Getroot (){
        return data[1];
    }; //return root node

    int Heap :: Removeroot(){
        if (heapLength == 0){
            return -1;
        }else if (heapLength == 1){
            int root = data[1];
            data[1] = 0;
            return root;
        }else{
            int root = data[1];
            data[1] = data[heapLength];
            heapLength--;
            build_heap();
            return root;
        }
    }

    void Heap :: setdata(int x,int newx){
        bool found = false;
         for (int i = 1; i <= heapLength; i++) {
            if (data[i] == x) {
                data[i] = newx;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Invalid index" << endl;
        } else {
            build_heap(); 
        }
    };

    