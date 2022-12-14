#ifndef __IS_INTEGRAL_HPP__
# define __IS_INTEGRAL_HPP__

/* integral types
bool
char
char16_t
char32_t
wchar_t
signed char
short int
int
long int
long long int
unsigned char
unsigned short int
unsigned int
unsigned long int
unsigned long long int */

namespace	ft {
	template <class T>
	struct	is_integral {
		static const bool value	= false;
	};

	template <>
	struct	is_integral<bool> {
		static const bool value	= true;
	};
	
	template <>
	struct	is_integral<char> {
		static const bool value	= true;
	};

	template <>
	struct	is_integral<wchar_t> {
		static const bool value	= true;
	};

	template <>
	struct	is_integral<signed char> {
		static const bool value	= true;
	};

	template <>
	struct	is_integral<short int> {
		static const bool value	= true;
	};

	template <>
	struct	is_integral<int> {
		static const bool value	= true;
	};

	template <>
	struct	is_integral<long int> {
		static const bool value	= true;
	};

	template <>
	struct	is_integral<long long int> {
		static const bool value	= true;
	};

	template <>
	struct	is_integral<unsigned char> {
		static const bool value	= true;
	};

	template <>
	struct	is_integral<unsigned short int> {
		static const bool value	= true;
	};

	template <>
	struct	is_integral<unsigned int> {
		static const bool value	= true;
	};

	template <>
	struct	is_integral<unsigned long int> {
		static const bool value	= true;
	};

	template <>
	struct	is_integral<unsigned long long int> {
		static const bool value	= true;
	};

	template <>
	struct	is_integral<const bool> {
		static const bool value	= true;
	};
	
	template <>
	struct	is_integral<const char> {
		static const bool value	= true;
	};

	template <>
	struct	is_integral<const wchar_t> {
		static const bool value	= true;
	};

	template <>
	struct	is_integral<const signed char> {
		static const bool value	= true;
	};

	template <>
	struct	is_integral<const short int> {
		static const bool value	= true;
	};

	template <>
	struct	is_integral<const int> {
		static const bool value	= true;
	};

	template <>
	struct	is_integral<const long int> {
		static const bool value	= true;
	};

	template <>
	struct	is_integral<const long long int> {
		static const bool value	= true;
	};

	template <>
	struct	is_integral<const unsigned char> {
		static const bool value	= true;
	};

	template <>
	struct	is_integral<const unsigned short int> {
		static const bool value	= true;
	};

	template <>
	struct	is_integral<const unsigned int> {
		static const bool value	= true;
	};

	template <>
	struct	is_integral<const unsigned long int> {
		static const bool value	= true;
	};

	template <>
	struct	is_integral<const unsigned long long int> {
		static const bool value	= true;
	};
}

#endif
