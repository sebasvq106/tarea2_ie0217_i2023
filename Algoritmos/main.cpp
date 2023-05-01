/**
 * @file main.cpp
 * @author Sebastian Vargas (sebasvq106@gmail.com)
 * @brief Archivo main de la implementacion de algoritmos
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

#define SIZE_ARRAY_1 7
#define SIZE_ARRAY_2 7
#define SIZE_ARRAY_3 7
#define SIZE_ARRAY_4 7

int main(){
    int arreglo_1[] = {17, 89, 42, 75, 33, 50, 94};

    cout << "Arreglo original: " << endl;
    for (int i = 0; i < SIZE_ARRAY_1; i++){
        cout << arreglo_1[i] << " ";
    }
    cout << endl;
    cout << endl;

    bubbleSort(arreglo_1, SIZE_ARRAY_1);

    cout << "Arreglo con BubbleSort: " << endl;
    for (int i = 0; i < SIZE_ARRAY_1; i++){
        cout << arreglo_1[i] << " ";
    }
    cout << endl;
    cout << endl;
    int arreglo_2[] = {12, 68, 97, 23, 55, 81, 39};

    cout << "Arreglo original: " << endl;
    for (int i = 0; i < SIZE_ARRAY_2; i++){
        cout << arreglo_2[i] << " ";
    }
    cout << endl;
    cout << endl;

    selectionSort(arreglo_2, SIZE_ARRAY_2);
    cout << "Arreglo con selectionSort: " << endl;
    for (int i = 0; i < SIZE_ARRAY_2; i++){
        cout << arreglo_2[i] << " ";
    }
    cout << endl;
    cout << endl;

    int arreglo_3[] = {5, 71, 13, 60, 29, 88, 47};

    cout << "Arreglo original: " << endl;
    for (int i = 0; i < SIZE_ARRAY_3; i++){
        cout << arreglo_3[i] << " ";
    }
    cout << endl;
    cout << endl;

    insertionSort(arreglo_3, SIZE_ARRAY_3);
    cout << "Arreglo con insertionSort: " << endl;
    for (int i = 0; i < SIZE_ARRAY_3; i++){
        cout << arreglo_3[i] << " ";
    }
    cout << endl;
    cout << endl;

    int arreglo_4[] = {77, 19, 52, 98, 36, 63, 10};

    cout << "Arreglo original: " << endl;
    for (int i = 0; i < SIZE_ARRAY_4; i++){
        cout << arreglo_4[i] << " ";
    }
    cout << endl;
    cout << endl;

    quickSort(arreglo_4, 0, SIZE_ARRAY_4 -1);
    cout << "Arreglo con QuickSort: " << endl;
    for (int i = 0; i < SIZE_ARRAY_4; i++){
        cout << arreglo_4[i] << " ";
    }
    cout << endl;
    cout << endl;
    return 0;
}