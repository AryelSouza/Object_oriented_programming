#include <iostream>
using namespace std;


template <class T>

class Array{
    private:
        T *array;
        int size;
    public:
        Array(int size){
            this->size = size;
            array = new T[size];
        }
        ~Array(){
            delete[] array;
        }
        void set(int index, T value){
            array[index] = value;
        }
        T get(int index){
            return array[index];
        }
        int getSize(){
            return size;
        }
};
