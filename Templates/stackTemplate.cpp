/**
Licencia MIT

Copyright (c) [2023] Tarea 2 - Grupo 2 - IE 0217 - I Ciclo 2023

Se concede aquí, sin cargo, a cualquier persona que obtenga una copia de este
software y los archivos de documentación asociados (el "Software"), para
utilizar el Software sin restricciones, incluyendo, sin limitación, los
derechos para usar, copiar, modificar, fusionar, publicar, distribuir,
sublicenciar y/o vender copias del Software, y para permitir a las personas a
quienes se les proporcione el Software que lo hagan, sujeto a las siguientes
condiciones:

El aviso de copyright anterior y este aviso de permiso se incluirán en todas
las copias o partes sustanciales del Software.

EL SOFTWARE SE PROPORCIONA "TAL CUAL", SIN GARANTÍA DE NINGÚN TIPO, EXPRESA O
IMPLÍCITA, INCLUYENDO PERO NO LIMITADO A GARANTÍAS DE COMERCIALIZACIÓN,
IDONEIDAD PARA UN PROPÓSITO PARTICULAR Y NO INFRACCIÓN. EN NINGÚN CASO LOS
AUTORES O TITULARES DEL COPYRIGHT SERÁN RESPONSABLES POR NINGUNA RECLAMACIÓN,
DAÑO O OTRA RESPONSABILIDAD, YA SEA EN UNA ACCIÓN CONTRACTUAL, AGRAVIO O DE
OTRO MODO, QUE SURJA DE, FUERA DE O EN CONEXIÓN CON EL SOFTWARE O EL USO U
OTROS ACUERDOS EN EL SOFTWARE.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <functional>

/**
 * @brief Template para la clase Stack
 * 
 * @tparam T 
 */
template<typename T>

/**
 * @class Stack
 * @brief Clase que representa una pila
 * 
 */
class Stack {
private:
  std::vector<T> data_; /**< Vector que guarda objetos de tipo T*/

public:
  /**
   * @brief Funcion que agrega objetos de tipo T a la pila
   * 
   * @param value 
   */
  void push(T value) {
    data_.push_back(value);
  }

  /**
   * @brief Funcion que elimina el ultimo obejto y retorna el ultimo objeto que habia en la pila siempre y cuando la pila no este vacia
   * 
   * @return T 
   */
  T pop() {
    if (data_.empty()) {
      throw std::out_of_range("Stack is empty");
    }
    T value = data_.back();
    data_.pop_back();
    return value;
  }

  /**
   * @brief Funcion que elimina todos lo objetos de la pila
   * 
   */
  void clear() {
    data_.clear();
  }

  /**
   * @brief Funcion que verifica si la pila esta vacia o no
   * 
   * @return true 
   * @return false 
   */
  bool empty() const {
    return data_.empty();
  }

  /**
   * @brief Funcion que obtiene y retorna el tamano de la pila
   * 
   * @return std::size_t 
   */
  std::size_t size() const {
    return data_.size();
  }

  /**
   * @brief Funcion que recorre valor por valor la pila y se le aplica la funcion func.
   * 
   * @param func 
   */
  void foreach(const std::function<void(T&)>& func) {
    std::for_each(data_.begin(), data_.end(), func);
  }
};

/**
 * @brief Funcion que asigna valores y llama funciones
 * 
 * @return int 
 */
int main() {
  Stack<int> s; // Se crea una pila vacia con numeros enteros.

  // Se insertan valores a la pila.
  s.push(2021);
  s.push(2054);
  s.push(6524);

  // Se imprime el tamano de la pila.
  std::cout << "Stack size: " << s.size() << std::endl;

  // Se imprimen todos los valores que hay en la pila
  s.foreach([](int& value) {
    std::cout << "Value: " << value << std::endl;
  });

  // Se eliminara y se imprimira el ultimo valor si la pila no esta vacia, si esta vacia saltara una excepcion
  try {
    while (!s.empty()) {
      int value = s.pop();
      std::cout << "Popped value: " << value << std::endl;
    }
    std::cout << "Stack size: " << s.size() << std::endl;
  } catch (const std::exception& e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  return 0;
}
