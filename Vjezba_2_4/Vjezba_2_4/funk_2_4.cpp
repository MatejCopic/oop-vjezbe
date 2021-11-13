#include <iostream>
#include "funk_2_4.h"

using namespace std;

void MyVector::vector_new(size_t sz)
{
    arr = new int[sz];
    capacity = sz;
}
void MyVector::vector_delete()
{
    delete[] arr;
}
void MyVector::vector_push_back(int n)
{
    if (size == capacity)
    {
        capacity *= 2;
        int* arrN = new int[capacity];
        for (int i = 0; i < (capacity - 1); i++)
        {
            arrN[i] = arr[i];
        }
        delete[] arr;
        arr = arrN;
    }
    arr[size] = n;
    size++;
}
void MyVector::vector_pop_back()
{
    size -= 1;//fix
}
int& MyVector::vector_front()
{
    return arr[(size + 1) - size];
}
int& MyVector::vector_back()
{
    return arr[size - 1];
}
size_t MyVector::vector_size()
{
    return size;
}

void MyVector::print_vector(){
    for (size_t i = (size + 1) - size; i < vector_size(); ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}