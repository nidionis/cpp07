//
// Created by nidionis on 17/05/25.
//

#ifndef CPP07_ARRAY_TPP

template <typename T>
Array<T>::Array() {
    arr = new T[0];
    _size = 0;
}

template <typename T>
Array<T>::~Array() {
    delete [] arr;
    _size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) {
    arr = new T[n];
    _size = n;
}

template <typename T>
Array<T>::Array(T &src) {
    arr = new T[src.size()];
    _size = src.size();
}

template <typename T>
unsigned int Array<T>::size() const {
    return _size;
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> &src) {
    if (this != &src) {
        delete [] arr;
        arr = new T[src.size()];
        for (unsigned int i = 0; i < src.size(); ++i)
            arr[i] = src.arr[i];
        _size = src.size();
    }
    return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int i) {
    if (i >= _size)
        throw std::out_of_range("index out of range");
    return arr[i];
}

template <typename T>
std::ostream &operator<<(std::ostream &os, const Array<T> &a) {
    for (unsigned int i = 0; i < a.size(); ++i)
        os << a.arr[i] << " ";
    return (os);
}
#endif
