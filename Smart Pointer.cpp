#include "Smart Pointer.hpp"

template <typename T>
Unique_ptr<T>::Unique_ptr(T *ptr) : pointer {ptr} {}

template <typename T>
Unique_ptr<T>::~Unique_ptr()
{
	delete pointer;
	pointer = nullptr;
	cout << "Destructor called!" << "\n";
}

template <typename T>
T& Unique_ptr<T>::operator*() {return *pointer;}

template <typename T>
const T& Unique_ptr<T>::operator*() const {return *pointer;}

template <typename T>
T* Unique_ptr<T>::operator->() {return pointer;}

template <typename T>
const T* Unique_ptr<T>::operator->() const {return pointer;}

int	main()
{
	Unique_ptr<int> my_ptr {new int};
	*my_ptr = 33;
	cout << *my_ptr << "\n";
	Unique_ptr<int>	ptr {new int(7)};
	cout << *ptr << "\n";
	return (0);
}
