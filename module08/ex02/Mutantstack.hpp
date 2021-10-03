# pragma once 

# include <iostream>
# include <stack>

template < typename T>
class MutantStack : public std::stack<T>
{

	public:

		typename std::stack<T>::container_type::iterator begin( void ) { return this->c.begin();};
		typename std::stack<T>::container_type::iterator end( void ) { return this->c.end();};
		typedef typename std::stack<T>::container_type::iterator  iterator;
		
		MutantStack( void ) {};
		~MutantStack( void ) {};
};
