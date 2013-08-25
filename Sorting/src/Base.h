/*
 * Base.h
 *
 *  Created on: 25.08.2013
 *      Author: bob
 */

#ifndef BASE_H_
#define BASE_H_

#include <iostream>
#include<vector>
#include <stdlib.h>

template<class T> class MyData {
public:
	MyData(int size);
	virtual ~MyData();

	void print();
	void randomize();
	T& operator[](int index);

	void bublesort();
private:
	std::vector<T> container;
};

template<class T> class Element
{
public:
	Element():value(){};
	Element(T _value):value(_value){};
	Element(Element& object):value(object.value){};
	virtual ~Element(){};

	Element& operator=(T& _value)
	{
		if (this == & _value)
		{
			value = _value;
		}

		return *this;
	}

	operator T()
	{
		return this->value;
	}

	std::ostream& operator <<(std::ostream& stream)
	{
		return stream << value;
	}

private:
	T value;
};

template<class T> MyData<T>::MyData(int size):container(size)
{
	// TODO Auto-generated constructor stub
	for (int i = 0; i < size; i++)
	{
		container[i] = rand();
	}
}

template<class T> MyData<T>::~MyData()
{
	// TODO Auto-generated destructor stub
}

template<class T> void MyData<T>::print()
{
	for(unsigned int i = 0; i < container.size() ;i++)
	{
		std::cout << '[' << i << "] = " << container[i] << std::endl;
	}
}

template<class T> T& MyData<T>:: operator[](int index)
{
	return container[index];
}

template<class T> void MyData<T>::randomize()
{

}

template<class T> void MyData<T>::bublesort()
{
	bool swapped = false;

	do
	{
		swapped = false;

		for (unsigned int i = 1; i < container.size(); i++)
		{
			if (container[i - 1] > container[i])
			{
				T tmp;
				tmp = container[i - 1];
				container[i - 1] = container[i];
				container[i] = tmp;

				swapped = true;
			}
		}
	} while (swapped == true);
}

#endif /* BASE_H_ */
