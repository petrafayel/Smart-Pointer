#pragma once
#include <iostream>

using namespace std;

template <typename T>
class Unique_ptr
{
	private:
		T *pointer {nullptr};
	public:
		Unique_ptr(T *ptr);
		Unique_ptr(const Unique_ptr<T>& rhs)= delete;
		~Unique_ptr();
		Unique_ptr& operator=(const Unique_ptr<T>& src) = delete;
		T& operator*();
		const T& operator*() const;
		T* operator->();
		const T* operator->() const;
};
