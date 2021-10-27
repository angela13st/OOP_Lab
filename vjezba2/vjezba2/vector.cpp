#include "vector.h"

void vector::vector_new(size_t sz)
{
    velicina = 0;
    kapacitet = sz;
    niz = new int[sz];
}
void vector::vector_delete()
{
    delete[] niz;
    velicina = NULL;
    kapacitet = NULL;
    niz = 0;
}
void vector::vector_push_back(int n)
{
    if (velicina == kapacitet) {
        kapacitet = kapacitet * 2;
        int* novi = new int[kapacitet];

        for (int i = 0; i < this->velicina; i++) {
            novi[i] = niz[i];
        }

        delete[] niz;

        niz = novi;
    }


    niz[velicina] = n;
    velicina++;
}
void vector::vector_pop_back()
{
    niz[velicina - 1] = NULL;
    velicina--;
    
}
int& vector::vector_front()
{
    return niz[0];
}
int& vector::vector_back()
{
    return niz[velicina - 1];
}
size_t vector::vector_size()
{
    return velicina;
}


void vector::print_vector()
{
    for (size_t i = 0; i < vector_size(); ++i)
        std::cout << niz[i] << " ";
    std::cout << std::endl;
}