/// @ref core
<<<<<<< HEAD
/// @file glm/detail/type_vec1.inl
=======

#include "./compute_vector_relational.hpp"
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

namespace glm
{
	// -- Implicit basic constructors --

<<<<<<< HEAD
#	if !GLM_HAS_DEFAULTED_FUNCTIONS || !defined(GLM_FORCE_NO_CTOR_INIT)
		template <typename T, precision P>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec1<T, P>::tvec1()
#			ifndef GLM_FORCE_NO_CTOR_INIT
				: x(0)
#			endif
		{}
#	endif//!GLM_HAS_DEFAULTED_FUNCTIONS

#	if !GLM_HAS_DEFAULTED_FUNCTIONS
		template <typename T, precision P>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec1<T, P>::tvec1(tvec1<T, P> const & v)
			: x(v.x)
		{}
#	endif//!GLM_HAS_DEFAULTED_FUNCTIONS

	template <typename T, precision P>
	template <precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec1<T, P>::tvec1(tvec1<T, Q> const & v)
=======
#	if GLM_CONFIG_DEFAULTED_FUNCTIONS == GLM_DISABLE
		template<typename T, qualifier Q>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q>::vec()
#			if GLM_CONFIG_CTOR_INIT != GLM_CTOR_INIT_DISABLE
				: x(0)
#			endif
		{}

		template<typename T, qualifier Q>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q>::vec(vec<1, T, Q> const& v)
			: x(v.x)
		{}
#	endif

	template<typename T, qualifier Q>
	template<qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q>::vec(vec<1, T, P> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		: x(v.x)
	{}

	// -- Explicit basic constructors --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec1<T, P>::tvec1(ctor)
	{}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec1<T, P>::tvec1(T scalar)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q>::vec(T scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		: x(scalar)
	{}

	// -- Conversion vector constructors --

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U, precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec1<T, P>::tvec1(tvec1<U, Q> const & v)
		: x(static_cast<T>(v.x))
	{}

	template <typename T, precision P>
	template <typename U, precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec1<T, P>::tvec1(tvec2<U, Q> const & v)
		: x(static_cast<T>(v.x))
	{}

	template <typename T, precision P>
	template <typename U, precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec1<T, P>::tvec1(tvec3<U, Q> const & v)
		: x(static_cast<T>(v.x))
	{}

	template <typename T, precision P>
	template <typename U, precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec1<T, P>::tvec1(tvec4<U, Q> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q>::vec(vec<1, U, P> const& v)
		: x(static_cast<T>(v.x))
	{}

	template<typename T, qualifier Q>
	template<typename U, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q>::vec(vec<2, U, P> const& v)
		: x(static_cast<T>(v.x))
	{}

	template<typename T, qualifier Q>
	template<typename U, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q>::vec(vec<3, U, P> const& v)
		: x(static_cast<T>(v.x))
	{}

	template<typename T, qualifier Q>
	template<typename U, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q>::vec(vec<4, U, P> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		: x(static_cast<T>(v.x))
	{}

	// -- Component accesses --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T & tvec1<T, P>::operator[](typename tvec1<T, P>::length_type i)
	{
		assert(i >= 0 && i < this->length());
		return (&x)[i];
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T const & tvec1<T, P>::operator[](typename tvec1<T, P>::length_type i) const
	{
		assert(i >= 0 && i < this->length());
		return (&x)[i];
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR T & vec<1, T, Q>::operator[](typename vec<1, T, Q>::length_type)
	{
		return x;
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR T const& vec<1, T, Q>::operator[](typename vec<1, T, Q>::length_type) const
	{
		return x;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	// -- Unary arithmetic operators --

<<<<<<< HEAD
#	if !GLM_HAS_DEFAULTED_FUNCTIONS
		template <typename T, precision P>
		GLM_FUNC_QUALIFIER tvec1<T, P> & tvec1<T, P>::operator=(tvec1<T, P> const & v)
=======
#	if GLM_CONFIG_DEFAULTED_FUNCTIONS == GLM_DISABLE
		template<typename T, qualifier Q>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> & vec<1, T, Q>::operator=(vec<1, T, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		{
			this->x = v.x;
			return *this;
		}
<<<<<<< HEAD
#	endif//!GLM_HAS_DEFAULTED_FUNCTIONS

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec1<T, P> & tvec1<T, P>::operator=(tvec1<U, P> const & v)
=======
#	endif

	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> & vec<1, T, Q>::operator=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x = static_cast<T>(v.x);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec1<T, P> & tvec1<T, P>::operator+=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> & vec<1, T, Q>::operator+=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x += static_cast<T>(scalar);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec1<T, P> & tvec1<T, P>::operator+=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> & vec<1, T, Q>::operator+=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x += static_cast<T>(v.x);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec1<T, P> & tvec1<T, P>::operator-=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> & vec<1, T, Q>::operator-=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x -= static_cast<T>(scalar);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec1<T, P> & tvec1<T, P>::operator-=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> & vec<1, T, Q>::operator-=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x -= static_cast<T>(v.x);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec1<T, P> & tvec1<T, P>::operator*=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> & vec<1, T, Q>::operator*=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x *= static_cast<T>(scalar);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec1<T, P> & tvec1<T, P>::operator*=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> & vec<1, T, Q>::operator*=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x *= static_cast<T>(v.x);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec1<T, P> & tvec1<T, P>::operator/=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> & vec<1, T, Q>::operator/=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x /= static_cast<T>(scalar);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec1<T, P> & tvec1<T, P>::operator/=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> & vec<1, T, Q>::operator/=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x /= static_cast<T>(v.x);
		return *this;
	}

	// -- Increment and decrement operators --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> & tvec1<T, P>::operator++()
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> & vec<1, T, Q>::operator++()
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		++this->x;
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> & tvec1<T, P>::operator--()
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> & vec<1, T, Q>::operator--()
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		--this->x;
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec1<T, P> tvec1<T, P>::operator++(int)
	{
		tvec1<T, P> Result(*this);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> vec<1, T, Q>::operator++(int)
	{
		vec<1, T, Q> Result(*this);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		++*this;
		return Result;
	}

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec1<T, P> tvec1<T, P>::operator--(int)
	{
		tvec1<T, P> Result(*this);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> vec<1, T, Q>::operator--(int)
	{
		vec<1, T, Q> Result(*this);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		--*this;
		return Result;
	}

	// -- Unary bit operators --

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec1<T, P> & tvec1<T, P>::operator%=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> & vec<1, T, Q>::operator%=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x %= static_cast<T>(scalar);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec1<T, P> & tvec1<T, P>::operator%=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> & vec<1, T, Q>::operator%=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x %= static_cast<T>(v.x);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec1<T, P> & tvec1<T, P>::operator&=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> & vec<1, T, Q>::operator&=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x &= static_cast<T>(scalar);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec1<T, P> & tvec1<T, P>::operator&=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> & vec<1, T, Q>::operator&=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x &= static_cast<T>(v.x);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec1<T, P> & tvec1<T, P>::operator|=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> & vec<1, T, Q>::operator|=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x |= static_cast<T>(scalar);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec1<T, P> & tvec1<T, P>::operator|=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> & vec<1, T, Q>::operator|=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x |= U(v.x);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec1<T, P> & tvec1<T, P>::operator^=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> & vec<1, T, Q>::operator^=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x ^= static_cast<T>(scalar);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec1<T, P> & tvec1<T, P>::operator^=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> & vec<1, T, Q>::operator^=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x ^= static_cast<T>(v.x);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec1<T, P> & tvec1<T, P>::operator<<=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> & vec<1, T, Q>::operator<<=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x <<= static_cast<T>(scalar);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec1<T, P> & tvec1<T, P>::operator<<=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> & vec<1, T, Q>::operator<<=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x <<= static_cast<T>(v.x);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec1<T, P> & tvec1<T, P>::operator>>=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> & vec<1, T, Q>::operator>>=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x >>= static_cast<T>(scalar);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec1<T, P> & tvec1<T, P>::operator>>=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> & vec<1, T, Q>::operator>>=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x >>= static_cast<T>(v.x);
		return *this;
	}

	// -- Unary constant operators --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator+(tvec1<T, P> const & v)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator+(vec<1, T, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return v;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator-(tvec1<T, P> const & v)
	{
		return tvec1<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator-(vec<1, T, Q> const& v)
	{
		return vec<1, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			-v.x);
	}

	// -- Binary arithmetic operators --

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec1<T, P> operator+(tvec1<T, P> const & v, T scalar)
	{
		return tvec1<T, P>(
			v.x + scalar);
	}

	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec1<T, P> operator+(T scalar, tvec1<T, P> const & v)
	{
		return tvec1<T, P>(
			scalar + v.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator+(tvec1<T, P> const & v1, tvec1<T, P> const & v2)
	{
		return tvec1<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator+(vec<1, T, Q> const& v, T scalar)
	{
		return vec<1, T, Q>(
			v.x + scalar);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator+(T scalar, vec<1, T, Q> const& v)
	{
		return vec<1, T, Q>(
			scalar + v.x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator+(vec<1, T, Q> const& v1, vec<1, T, Q> const& v2)
	{
		return vec<1, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x + v2.x);
	}

	//operator-
<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec1<T, P> operator-(tvec1<T, P> const & v, T scalar)
	{
		return tvec1<T, P>(
			v.x - scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator-(T scalar, tvec1<T, P> const & v)
	{
		return tvec1<T, P>(
			scalar - v.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator-(tvec1<T, P> const & v1, tvec1<T, P> const & v2)
	{
		return tvec1<T, P>(
			v1.x - v2.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator*(tvec1<T, P> const & v, T scalar)
	{
		return tvec1<T, P>(
			v.x * scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator*(T scalar, tvec1<T, P> const & v)
	{
		return tvec1<T, P>(
			scalar * v.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator*(tvec1<T, P> const & v1, tvec1<T, P> const & v2)
	{
		return tvec1<T, P>(
			v1.x * v2.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator/(tvec1<T, P> const & v, T scalar)
	{
		return tvec1<T, P>(
			v.x / scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator/(T scalar, tvec1<T, P> const & v)
	{
		return tvec1<T, P>(
			scalar / v.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator/(tvec1<T, P> const & v1, tvec1<T, P> const & v2)
	{
		return tvec1<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator-(vec<1, T, Q> const& v, T scalar)
	{
		return vec<1, T, Q>(
			v.x - scalar);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator-(T scalar, vec<1, T, Q> const& v)
	{
		return vec<1, T, Q>(
			scalar - v.x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator-(vec<1, T, Q> const& v1, vec<1, T, Q> const& v2)
	{
		return vec<1, T, Q>(
			v1.x - v2.x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator*(vec<1, T, Q> const& v, T scalar)
	{
		return vec<1, T, Q>(
			v.x * scalar);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator*(T scalar, vec<1, T, Q> const& v)
	{
		return vec<1, T, Q>(
			scalar * v.x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator*(vec<1, T, Q> const& v1, vec<1, T, Q> const& v2)
	{
		return vec<1, T, Q>(
			v1.x * v2.x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator/(vec<1, T, Q> const& v, T scalar)
	{
		return vec<1, T, Q>(
			v.x / scalar);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator/(T scalar, vec<1, T, Q> const& v)
	{
		return vec<1, T, Q>(
			scalar / v.x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator/(vec<1, T, Q> const& v1, vec<1, T, Q> const& v2)
	{
		return vec<1, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x / v2.x);
	}

	// -- Binary bit operators --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator%(tvec1<T, P> const & v, T scalar)
	{
		return tvec1<T, P>(
			v.x % scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator%(T scalar, tvec1<T, P> const & v)
	{
		return tvec1<T, P>(
			scalar % v.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator%(tvec1<T, P> const & v1, tvec1<T, P> const & v2)
	{
		return tvec1<T, P>(
			v1.x % v2.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator&(tvec1<T, P> const & v, T scalar)
	{
		return tvec1<T, P>(
			v.x & scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator&(T scalar, tvec1<T, P> const & v)
	{
		return tvec1<T, P>(
			scalar & v.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator&(tvec1<T, P> const & v1, tvec1<T, P> const & v2)
	{
		return tvec1<T, P>(
			v1.x & v2.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator|(tvec1<T, P> const & v, T scalar)
	{
		return tvec1<T, P>(
			v.x | scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator|(T scalar, tvec1<T, P> const & v)
	{
		return tvec1<T, P>(
			scalar | v.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator|(tvec1<T, P> const & v1, tvec1<T, P> const & v2)
	{
		return tvec1<T, P>(
			v1.x | v2.x);
	}
		
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator^(tvec1<T, P> const & v, T scalar)
	{
		return tvec1<T, P>(
			v.x ^ scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator^(T scalar, tvec1<T, P> const & v)
	{
		return tvec1<T, P>(
			scalar ^ v.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator^(tvec1<T, P> const & v1, tvec1<T, P> const & v2)
	{
		return tvec1<T, P>(
			v1.x ^ v2.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator<<(tvec1<T, P> const & v, T scalar)
	{
		return tvec1<T, P>(
			v.x << scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator<<(T scalar, tvec1<T, P> const & v)
	{
		return tvec1<T, P>(
			scalar << v.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator<<(tvec1<T, P> const & v1, tvec1<T, P> const & v2)
	{
		return tvec1<T, P>(
			v1.x << v2.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator>>(tvec1<T, P> const & v, T scalar)
	{
		return tvec1<T, P>(
			v.x >> scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator>>(T scalar, tvec1<T, P> const & v)
	{
		return tvec1<T, P>(
			scalar >> v.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator>>(tvec1<T, P> const & v1, tvec1<T, P> const & v2)
	{
		return tvec1<T, P>(
			v1.x >> v2.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> operator~(tvec1<T, P> const & v)
	{
		return tvec1<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator%(vec<1, T, Q> const& v, T scalar)
	{
		return vec<1, T, Q>(
			v.x % scalar);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator%(T scalar, vec<1, T, Q> const& v)
	{
		return vec<1, T, Q>(
			scalar % v.x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator%(vec<1, T, Q> const& v1, vec<1, T, Q> const& v2)
	{
		return vec<1, T, Q>(
			v1.x % v2.x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator&(vec<1, T, Q> const& v, T scalar)
	{
		return vec<1, T, Q>(
			v.x & scalar);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator&(T scalar, vec<1, T, Q> const& v)
	{
		return vec<1, T, Q>(
			scalar & v.x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator&(vec<1, T, Q> const& v1, vec<1, T, Q> const& v2)
	{
		return vec<1, T, Q>(
			v1.x & v2.x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator|(vec<1, T, Q> const& v, T scalar)
	{
		return vec<1, T, Q>(
			v.x | scalar);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator|(T scalar, vec<1, T, Q> const& v)
	{
		return vec<1, T, Q>(
			scalar | v.x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator|(vec<1, T, Q> const& v1, vec<1, T, Q> const& v2)
	{
		return vec<1, T, Q>(
			v1.x | v2.x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator^(vec<1, T, Q> const& v, T scalar)
	{
		return vec<1, T, Q>(
			v.x ^ scalar);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator^(T scalar, vec<1, T, Q> const& v)
	{
		return vec<1, T, Q>(
			scalar ^ v.x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator^(vec<1, T, Q> const& v1, vec<1, T, Q> const& v2)
	{
		return vec<1, T, Q>(
			v1.x ^ v2.x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator<<(vec<1, T, Q> const& v, T scalar)
	{
		return vec<1, T, Q>(
			static_cast<T>(v.x << scalar));
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator<<(T scalar, vec<1, T, Q> const& v)
	{
		return vec<1, T, Q>(
			static_cast<T>(scalar << v.x));
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator<<(vec<1, T, Q> const& v1, vec<1, T, Q> const& v2)
	{
		return vec<1, T, Q>(
			static_cast<T>(v1.x << v2.x));
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator>>(vec<1, T, Q> const& v, T scalar)
	{
		return vec<1, T, Q>(
			static_cast<T>(v.x >> scalar));
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator>>(T scalar, vec<1, T, Q> const& v)
	{
		return vec<1, T, Q>(
			static_cast<T>(scalar >> v.x));
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator>>(vec<1, T, Q> const& v1, vec<1, T, Q> const& v2)
	{
		return vec<1, T, Q>(
			static_cast<T>(v1.x >> v2.x));
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, T, Q> operator~(vec<1, T, Q> const& v)
	{
		return vec<1, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			~v.x);
	}

	// -- Boolean operators --

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER bool operator==(tvec1<T, P> const & v1, tvec1<T, P> const & v2)
	{
		return (v1.x == v2.x);
	}

	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER bool operator!=(tvec1<T, P> const & v1, tvec1<T, P> const & v2)
	{
		return (v1.x != v2.x);
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec1<bool, P> operator&&(tvec1<bool, P> const & v1, tvec1<bool, P> const & v2)
	{
		return tvec1<bool, P>(v1.x && v2.x);
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec1<bool, P> operator||(tvec1<bool, P> const & v1, tvec1<bool, P> const & v2)
	{
		return tvec1<bool, P>(v1.x || v2.x);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR bool operator==(vec<1, T, Q> const& v1, vec<1, T, Q> const& v2)
	{
		return detail::compute_equal<T, std::numeric_limits<T>::is_iec559>::call(v1.x, v2.x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR bool operator!=(vec<1, T, Q> const& v1, vec<1, T, Q> const& v2)
	{
		return !(v1 == v2);
	}

	template<qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, bool, Q> operator&&(vec<1, bool, Q> const& v1, vec<1, bool, Q> const& v2)
	{
		return vec<1, bool, Q>(v1.x && v2.x);
	}

	template<qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<1, bool, Q> operator||(vec<1, bool, Q> const& v1, vec<1, bool, Q> const& v2)
	{
		return vec<1, bool, Q>(v1.x || v2.x);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}
}//namespace glm
