/**
 * @file excepciones_estandar.cpp
 * @author Sebastian Vargas Quesada (sebasvq106@gmail.com)
 * @brief Implementacion de los tres tipos de excepciones de la biblioteca estandar
 * @version 1.0
 * @date 2023-05-05
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
#include <stdexcept>
#include <vector>
#include <new>

using namespace std;

/**
 * @brief Esta funcion lanza la excepcion invalid_argument
 * 
 */
void InvalidArgument() {
  throw invalid_argument("Error: Argumento invalido");
}

/**
 * @brief Esta funcion lanza la excepcion out_of_range
 * 
 */
void OutOfRange() {
  vector<int> vec = {1, 2, 3, 4, 5}; // Se crea un vector de enteros
  int index = 10; 

  // Al ser el indice mas grande que el tamano del vector lanza la excepcion
  if (index >= vec.size()) {
    throw out_of_range("Error: Fuera de rango"); 
  }
}

/**
 * @brief Esta funcion lanza la excepcion bad_alloc
 * 
 */
void BadAlloc() {
  try {
    size_t size = 1000000000000; // Se intenta crear un arreglo con un tamano muy grande 
    int* nums = new int[size];
    delete[] nums;
  } catch (const bad_alloc& e) {
    throw e;
  }
}

int main() {
  try {
    InvalidArgument();
  } catch (const invalid_argument& e) {
    cerr << "Excepcion capturada: " << e.what() << endl;
  }

  try {
    OutOfRange();
  } catch (const out_of_range& e) {
    cerr << "Excepcion capturada: " << e.what() << endl;
  }

  try {
    BadAlloc();
  } catch (const bad_alloc& e) {
    cerr << "Excepcion capturada: " << e.what() << endl;
  }

  return 0;
}