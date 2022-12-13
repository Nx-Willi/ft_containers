template <class T, class Alloc>
typename ft::vector<T, Alloc>::iterator	ft::vector<T, Alloc>::begin() {
	return (iterator(this->_datas));
}

template <class T, class Alloc>
typename ft::vector<T, Alloc>::iterator	ft::vector<T, Alloc>::end() {
	return (iterator(&this->_datas[this->_size]));
}