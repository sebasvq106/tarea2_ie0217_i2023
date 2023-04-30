/**
 * @file headerSort.cpp
 * @author Sebastian Vargas (sebasvq106@gmail.com)
 * @brief Implementacion de los algoritmos de ordenamiento
 * @version 1.0
 * @date 2023-04-29
 * 
 * @copyright Copyright (c) 2023
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include <iostream>
#include "headerSort.hpp"

using namespace std;

void bubbleSort(int arr[], int n){
    int temp = 0;
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n - i -1; j++){
           if (arr[j] > arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            }
        }
    }
}   

void selectionSort(int arr[], int n){
    int smallest_index = 0;
    int temp = 0;
    for (int i = 0; i < n-1; i++){
        smallest_index = i;
        for (int j = 0; j < n - i -1; j++){
           if (arr[j] < arr[smallest_index]){
            smallest_index = j;
           } 
        }

        temp = arr[i];
        arr[i] = arr[smallest_index];
        arr[smallest_index] = temp;
    }
}

void insertionSort(int arr[], int n){
    int actual = 0;
    for(int i = 1; i < n; i++){
        actual = arr[i];
        int var_comp = i -1;
        while((var_comp >= 0) && (actual < arr[var_comp])){
            arr[var_comp+1] = arr[var_comp];
            var_comp--;
        }
        arr[var_comp + 1] = actual;

    }
}

void quickSort(int arr[], int low, int high){
    int i = low;
    int j = high;
    int temp;
    int pivote = arr[(low + high) / 2];

    while (i <= j){

        while (arr[i] < pivote)
        i++;
        while (arr[j] > pivote)
        j--;

        if (i <= j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    };

    if (low < j){
        quickSort(arr, low, j);
    }
    if (i < high){
        quickSort(arr, i , high);
    }
}