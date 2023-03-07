/// @ref core
<<<<<<< HEAD
/// @file glm/core/type_tvec2.inl

namespace glm
{
#	ifdef GLM_STATIC_CONST_MEMBERS
	template <typename T, precision P>
	const tvec2<T, P> tvec2<T, P>::ZERO(static_cast<T>(0), static_cast<T>(0));

	template <typename T, precision P>
	const tvec2<T, P> tvec2<T, P>::X(static_cast<T>(1), static_cast<T>(0));

	template <typename T, precision P>
	const tvec2<T, P> tvec2<T, P>::Y(static_cast<T>(0), static_cast<T>(1));

	template <typename T, precision P>
	const tvec2<T, P> tvec2<T, P>::XY(static_cast<T>(1), static_cast<T>(1));
#	endif
	// -- Implicit basic constructors --

#	if !GLM_HAS_DEFAULTED_FUNCTIONS || !defined(GLM_FORCE_NO_CTOR_INIT)
		template <typename T, precision P>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec2<T, P>::tvec2()
#			ifndef GLM_FORCE_NO_CTOR_INIT
				: x(0), y(0)
#			endif
		{}
#	endif//!GLM_HAS_DEFAULTED_FUNCTIONS

#	if !GLM_HAS_DEFAULTED_FUNCTIONS
		template <typename T, precision P>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec2<T, P>::tvec2(tvec2<T, P> const & v)
			: x(v.x), y(v.y)
		{}
#	endif//!GLM_HAS_DEFAULTED_FUNCTIONS

	template <typename T, precision P>
	template <precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec2<T, P>::tvec2(tvec2<T, Q> const & v)
=======

#include "./compute_vector_relational.hpp"

namespace glm
{
	// -- Implicit basic constructors --

#	if GLM_CONFIG_DEFAULTED_FUNCTIONS == GLM_DISABLE
		template<typename T, qualifier Q>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q>::vec()
#			if GLM_CONFIG_CTOR_INIT != GLM_CTOR_INIT_DISABLE
				: x(0), y(0)
#			endif
		{}

		template<typename T, qualifier Q>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q>::vec(vec<2, T, Q> const& v)
			: x(v.x), y(v.y)
		{}
#	endif

	template<typename T, qualifier Q>
	template<qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q>::vec(vec<2, T, P> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		: x(v.x), y(v.y)
	{}

	// -- Explicit basic constructors --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec2<T, P>::tvec2(ctor)
	{}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec2<T, P>::tvec2(T scalar)
		: x(scalar), y(scalar)
	{}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec2<T, P>::tvec2(T s1, T s2)
		: x(s1), y(s2)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q>::vec(T scalar)
		: x(scalar), y(scalar)
	{}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q>::vec(T _x, T _y)
		: x(_x), y(_y)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{}

	// -- Conversion scalar constructors --

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename A, typename B>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec2<T, P>::tvec2(A a, B b)
		: x(static_cast<T>(a))
		, y(static_cast<T>(b))
	{}

	template <typename T, precision P>
	template <typename A, typename B>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec2<T, P>::tvec2(tvec1<A, P> const & a, tvec1<B, P> const & b)
		: x(static_cast<T>(a.x))
		, y(static_cast<T>(b.x))
=======
	template<typename T, qualifier Q>
	template<typename U, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q>::vec(vec<1, U, P> const& v)
		: x(static_cast<T>(v.x))
		, y(static_cast<T>(v.x))
	{}

	template<typename T, qualifier Q>
	template<typename A, typename B>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q>::vec(A _x, B _y)
		: x(static_cast<T>(_x))
		, y(static_cast<T>(_y))
	{}

	template<typename T, qualifier Q>
	template<typename A, typename B>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q>::vec(vec<1, A, Q> const& _x, B _y)
		: x(static_cast<T>(_x.x))
		, y(static_cast<T>(_y))
	{}

	template<typename T, qualifier Q>
	template<typename A, typename B>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q>::vec(A _x, vec<1, B, Q> const& _y)
		: x(static_cast<T>(_x))
		, y(static_cast<T>(_y.x))
	{}

	template<typename T, qualifier Q>
	template<typename A, typename B>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q>::vec(vec<1, A, Q> const& _x, vec<1, B, Q> const& _y)
		: x(static_cast<T>(_x.x))
		, y(static_cast<T>(_y.x))
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{}

	// -- Conversion vector constructors --

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U, precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec2<T, P>::tvec2(tvec2<U, Q> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q>::vec(vec<2, U, P> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		: x(static_cast<T>(v.x))
		, y(static_cast<T>(v.y))
	{}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U, precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec2<T, P>::tvec2(tvec3<U, Q> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q>::vec(vec<3, U, P> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		: x(static_cast<T>(v.x))
		, y(static_cast<T>(v.y))
	{}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U, precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec2<T, P>::tvec2(tvec4<U, Q> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q>::vec(vec<4, U, P> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		: x(static_cast<T>(v.x))
		, y(static_cast<T>(v.y))
	{}

	// -- Component accesses --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T & tvec2<T, P>::operator[](typename tvec2<T, P>::length_type i)
	{
		assert(i >= 0 && i < this->length());
		return (&x)[i];
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T const & tvec2<T, P>::operator[](typename tvec2<T, P>::length_type i) const
	{
		assert(i >= 0 && i < this->length());
		return (&x)[i];
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR T & vec<2, T, Q>::operator[](typename vec<2, T, Q>::length_type i)
	{
		assert(i >= 0 && i < this->length());
		switch(i)
		{
		default:
		case 0:
			return x;
		case 1:
			return y;
		}
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR T const& vec<2, T, Q>::operator[](typename vec<2, T, Q>::length_type i) const
	{
		assert(i >= 0 && i < this->length());
		switch(i)
		{
		default:
		case 0:
			return x;
		case 1:
			return y;
		}
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	// -- Unary arithmetic operators --

<<<<<<< HEAD
#	if !GLM_HAS_DEFAULTED_FUNCTIONS
		template <typename T, precision P>
		GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator=(tvec2<T, P> const & v)
=======
#	if GLM_CONFIG_DEFAULTED_FUNCTIONS == GLM_DISABLE
		template<typename T, qualifier Q>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator=(vec<2, T, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		{
			this->x = v.x;
			this->y = v.y;
			return *this;
		}
<<<<<<< HEAD
#	endif//!GLM_HAS_DEFAULTED_FUNCTIONS

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator=(tvec2<U, P> const & v)
=======
#	endif

	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator=(vec<2, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x = static_cast<T>(v.x);
		this->y = static_cast<T>(v.y);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator+=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator+=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x += static_cast<T>(scalar);
		this->y += static_cast<T>(scalar);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator+=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator+=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x += static_cast<T>(v.x);
		this->y += static_cast<T>(v.x);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator+=(tvec2<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator+=(vec<2, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x += static_cast<T>(v.x);
		this->y += static_cast<T>(v.y);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator-=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator-=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x -= static_cast<T>(scalar);
		this->y -= static_cast<T>(scalar);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator-=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator-=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x -= static_cast<T>(v.x);
		this->y -= static_cast<T>(v.x);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator-=(tvec2<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator-=(vec<2, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x -= static_cast<T>(v.x);
		this->y -= static_cast<T>(v.y);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator*=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator*=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x *= static_cast<T>(scalar);
		this->y *= static_cast<T>(scalar);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator*=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator*=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x *= static_cast<T>(v.x);
		this->y *= static_cast<T>(v.x);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator*=(tvec2<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator*=(vec<2, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x *= static_cast<T>(v.x);
		this->y *= static_cast<T>(v.y);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator/=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator/=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x /= static_cast<T>(scalar);
		this->y /= static_cast<T>(scalar);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator/=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator/=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x /= static_cast<T>(v.x);
		this->y /= static_cast<T>(v.x);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator/=(tvec2<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator/=(vec<2, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x /= static_cast<T>(v.x);
		this->y /= static_cast<T>(v.y);
		return *this;
	}

	// -- Increment and decrement operators --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator++()
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator++()
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		++this->x;
		++this->y;
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator--()
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator--()
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		--this->x;
		--this->y;
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec2<T, P> tvec2<T, P>::operator++(int)
	{
		tvec2<T, P> Result(*this);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> vec<2, T, Q>::operator++(int)
	{
		vec<2, T, Q> Result(*this);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		++*this;
		return Result;
	}

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec2<T, P> tvec2<T, P>::operator--(int)
	{
		tvec2<T, P> Result(*this);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> vec<2, T, Q>::operator--(int)
	{
		vec<2, T, Q> Result(*this);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		--*this;
		return Result;
	}

	// -- Unary bit operators --

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator%=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator%=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x %= static_cast<T>(scalar);
		this->y %= static_cast<T>(scalar);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator%=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator%=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x %= static_cast<T>(v.x);
		this->y %= static_cast<T>(v.x);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator%=(tvec2<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator%=(vec<2, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x %= static_cast<T>(v.x);
		this->y %= static_cast<T>(v.y);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator&=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator&=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x &= static_cast<T>(scalar);
		this->y &= static_cast<T>(scalar);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator&=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator&=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x &= static_cast<T>(v.x);
		this->y &= static_cast<T>(v.x);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator&=(tvec2<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator&=(vec<2, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x &= static_cast<T>(v.x);
		this->y &= static_cast<T>(v.y);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator|=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator|=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x |= static_cast<T>(scalar);
		this->y |= static_cast<T>(scalar);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator|=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator|=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x |= static_cast<T>(v.x);
		this->y |= static_cast<T>(v.x);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator|=(tvec2<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator|=(vec<2, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x |= static_cast<T>(v.x);
		this->y |= static_cast<T>(v.y);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator^=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator^=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x ^= static_cast<T>(scalar);
		this->y ^= static_cast<T>(scalar);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator^=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator^=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x ^= static_cast<T>(v.x);
		this->y ^= static_cast<T>(v.x);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator^=(tvec2<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator^=(vec<2, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x ^= static_cast<T>(v.x);
		this->y ^= static_cast<T>(v.y);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator<<=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator<<=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x <<= static_cast<T>(scalar);
		this->y <<= static_cast<T>(scalar);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator<<=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator<<=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x <<= static_cast<T>(v.x);
		this->y <<= static_cast<T>(v.x);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator<<=(tvec2<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator<<=(vec<2, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x <<= static_cast<T>(v.x);
		this->y <<= static_cast<T>(v.y);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator>>=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator>>=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x >>= static_cast<T>(scalar);
		this->y >>= static_cast<T>(scalar);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator>>=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator>>=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x >>= static_cast<T>(v.x);
		this->y >>= static_cast<T>(v.x);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec2<T, P> & tvec2<T, P>::operator>>=(tvec2<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> & vec<2, T, Q>::operator>>=(vec<2, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x >>= static_cast<T>(v.x);
		this->y >>= static_cast<T>(v.y);
		return *this;
	}

	// -- Unary arithmetic operators --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator+(tvec2<T, P> const & v)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator+(vec<2, T, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return v;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator-(tvec2<T, P> const & v)
	{
		return tvec2<T, P>(
			-v.x, 
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator-(vec<2, T, Q> const& v)
	{
		return vec<2, T, Q>(
			-v.x,
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			-v.y);
	}

	// -- Binary arithmetic operators --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator+(tvec2<T, P> const & v, T scalar)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator+(vec<2, T, Q> const& v, T scalar)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x + scalar,
			v.y + scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator+(tvec2<T, P> const & v1, tvec1<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator+(vec<2, T, Q> const& v1, vec<1, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x + v2.x,
			v1.y + v2.x);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator+(T scalar, tvec2<T, P> const & v)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator+(T scalar, vec<2, T, Q> const& v)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar + v.x,
			scalar + v.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator+(tvec1<T, P> const & v1, tvec2<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator+(vec<1, T, Q> const& v1, vec<2, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x + v2.x,
			v1.x + v2.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator+(tvec2<T, P> const & v1, tvec2<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator+(vec<2, T, Q> const& v1, vec<2, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x + v2.x,
			v1.y + v2.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator-(tvec2<T, P> const & v, T scalar)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator-(vec<2, T, Q> const& v, T scalar)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x - scalar,
			v.y - scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator-(tvec2<T, P> const & v1, tvec1<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator-(vec<2, T, Q> const& v1, vec<1, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x - v2.x,
			v1.y - v2.x);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator-(T scalar, tvec2<T, P> const & v)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator-(T scalar, vec<2, T, Q> const& v)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar - v.x,
			scalar - v.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator-(tvec1<T, P> const & v1, tvec2<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator-(vec<1, T, Q> const& v1, vec<2, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x - v2.x,
			v1.x - v2.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator-(tvec2<T, P> const & v1, tvec2<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator-(vec<2, T, Q> const& v1, vec<2, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x - v2.x,
			v1.y - v2.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator*(tvec2<T, P> const & v, T scalar)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator*(vec<2, T, Q> const& v, T scalar)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x * scalar,
			v.y * scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator*(tvec2<T, P> const & v1, tvec1<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator*(vec<2, T, Q> const& v1, vec<1, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x * v2.x,
			v1.y * v2.x);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator*(T scalar, tvec2<T, P> const & v)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator*(T scalar, vec<2, T, Q> const& v)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar * v.x,
			scalar * v.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator*(tvec1<T, P> const & v1, tvec2<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator*(vec<1, T, Q> const& v1, vec<2, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x * v2.x,
			v1.x * v2.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator*(tvec2<T, P> const & v1, tvec2<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator*(vec<2, T, Q> const& v1, vec<2, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x * v2.x,
			v1.y * v2.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator/(tvec2<T, P> const & v, T scalar)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator/(vec<2, T, Q> const& v, T scalar)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x / scalar,
			v.y / scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator/(tvec2<T, P> const & v1, tvec1<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator/(vec<2, T, Q> const& v1, vec<1, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x / v2.x,
			v1.y / v2.x);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator/(T scalar, tvec2<T, P> const & v)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator/(T scalar, vec<2, T, Q> const& v)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar / v.x,
			scalar / v.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator/(tvec1<T, P> const & v1, tvec2<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator/(vec<1, T, Q> const& v1, vec<2, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x / v2.x,
			v1.x / v2.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator/(tvec2<T, P> const & v1, tvec2<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator/(vec<2, T, Q> const& v1, vec<2, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x / v2.x,
			v1.y / v2.y);
	}

	// -- Binary bit operators --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator%(tvec2<T, P> const & v, T scalar)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator%(vec<2, T, Q> const& v, T scalar)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x % scalar,
			v.y % scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator%(tvec2<T, P> const & v1, tvec1<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator%(vec<2, T, Q> const& v1, vec<1, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x % v2.x,
			v1.y % v2.x);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator%(T scalar, tvec2<T, P> const & v)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator%(T scalar, vec<2, T, Q> const& v)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar % v.x,
			scalar % v.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator%(tvec1<T, P> const & v1, tvec2<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator%(vec<1, T, Q> const& v1, vec<2, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x % v2.x,
			v1.x % v2.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator%(tvec2<T, P> const & v1, tvec2<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator%(vec<2, T, Q> const& v1, vec<2, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x % v2.x,
			v1.y % v2.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator&(tvec2<T, P> const & v, T scalar)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator&(vec<2, T, Q> const& v, T scalar)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x & scalar,
			v.y & scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator&(tvec2<T, P> const & v1, tvec1<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator&(vec<2, T, Q> const& v1, vec<1, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x & v2.x,
			v1.y & v2.x);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator&(T scalar, tvec2<T, P> const & v)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator&(T scalar, vec<2, T, Q> const& v)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar & v.x,
			scalar & v.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator&(tvec1<T, P> const & v1, tvec2<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator&(vec<1, T, Q> const& v1, vec<2, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x & v2.x,
			v1.x & v2.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator&(tvec2<T, P> const & v1, tvec2<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator&(vec<2, T, Q> const& v1, vec<2, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x & v2.x,
			v1.y & v2.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator|(tvec2<T, P> const & v, T scalar)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator|(vec<2, T, Q> const& v, T scalar)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x | scalar,
			v.y | scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator|(tvec2<T, P> const & v1, tvec1<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator|(vec<2, T, Q> const& v1, vec<1, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x | v2.x,
			v1.y | v2.x);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator|(T scalar, tvec2<T, P> const & v)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator|(T scalar, vec<2, T, Q> const& v)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar | v.x,
			scalar | v.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator|(tvec1<T, P> const & v1, tvec2<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator|(vec<1, T, Q> const& v1, vec<2, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x | v2.x,
			v1.x | v2.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator|(tvec2<T, P> const & v1, tvec2<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator|(vec<2, T, Q> const& v1, vec<2, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x | v2.x,
			v1.y | v2.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator^(tvec2<T, P> const & v, T scalar)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator^(vec<2, T, Q> const& v, T scalar)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x ^ scalar,
			v.y ^ scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator^(tvec2<T, P> const & v1, tvec1<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator^(vec<2, T, Q> const& v1, vec<1, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x ^ v2.x,
			v1.y ^ v2.x);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator^(T scalar, tvec2<T, P> const & v)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator^(T scalar, vec<2, T, Q> const& v)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar ^ v.x,
			scalar ^ v.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator^(tvec1<T, P> const & v1, tvec2<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator^(vec<1, T, Q> const& v1, vec<2, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x ^ v2.x,
			v1.x ^ v2.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator^(tvec2<T, P> const & v1, tvec2<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator^(vec<2, T, Q> const& v1, vec<2, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x ^ v2.x,
			v1.y ^ v2.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator<<(tvec2<T, P> const & v, T scalar)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator<<(vec<2, T, Q> const& v, T scalar)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x << scalar,
			v.y << scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator<<(tvec2<T, P> const & v1, tvec1<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator<<(vec<2, T, Q> const& v1, vec<1, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x << v2.x,
			v1.y << v2.x);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator<<(T scalar, tvec2<T, P> const & v)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator<<(T scalar, vec<2, T, Q> const& v)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar << v.x,
			scalar << v.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator<<(tvec1<T, P> const & v1, tvec2<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator<<(vec<1, T, Q> const& v1, vec<2, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x << v2.x,
			v1.x << v2.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator<<(tvec2<T, P> const & v1, tvec2<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator<<(vec<2, T, Q> const& v1, vec<2, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x << v2.x,
			v1.y << v2.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator>>(tvec2<T, P> const & v, T scalar)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator>>(vec<2, T, Q> const& v, T scalar)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x >> scalar,
			v.y >> scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator>>(tvec2<T, P> const & v1, tvec1<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator>>(vec<2, T, Q> const& v1, vec<1, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x >> v2.x,
			v1.y >> v2.x);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator>>(T scalar, tvec2<T, P> const & v)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator>>(T scalar, vec<2, T, Q> const& v)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar >> v.x,
			scalar >> v.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator>>(tvec1<T, P> const & v1, tvec2<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator>>(vec<1, T, Q> const& v1, vec<2, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x >> v2.x,
			v1.x >> v2.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator>>(tvec2<T, P> const & v1, tvec2<T, P> const & v2)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator>>(vec<2, T, Q> const& v1, vec<2, T, Q> const& v2)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x >> v2.x,
			v1.y >> v2.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> operator~(tvec2<T, P> const & v)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, T, Q> operator~(vec<2, T, Q> const& v)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			~v.x,
			~v.y);
	}

	// -- Boolean operators --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER bool operator==(tvec2<T, P> const & v1, tvec2<T, P> const & v2)
	{
		return (v1.x == v2.x) && (v1.y == v2.y);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER bool operator!=(tvec2<T, P> const & v1, tvec2<T, P> const & v2)
	{
		return (v1.x != v2.x) || (v1.y != v2.y);
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec2<bool, P> operator&&(tvec2<bool, P> const & v1, tvec2<bool, P> const & v2)
	{
		return tvec2<bool, P>(v1.x && v2.x, v1.y && v2.y);
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec2<bool, P> operator||(tvec2<bool, P> const & v1, tvec2<bool, P> const & v2)
	{
		return tvec2<bool, P>(v1.x || v2.x, v1.y || v2.y);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR bool operator==(vec<2, T, Q> const& v1, vec<2, T, Q> const& v2)
	{
		return
			detail::compute_equal<T, std::numeric_limits<T>::is_iec559>::call(v1.x, v2.x) &&
			detail::compute_equal<T, std::numeric_limits<T>::is_iec559>::call(v1.y, v2.y);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR bool operator!=(vec<2, T, Q> const& v1, vec<2, T, Q> const& v2)
	{
		return !(v1 == v2);
	}

	template<qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, bool, Q> operator&&(vec<2, bool, Q> const& v1, vec<2, bool, Q> const& v2)
	{
		return vec<2, bool, Q>(v1.x && v2.x, v1.y && v2.y);
	}

	template<qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<2, bool, Q> operator||(vec<2, bool, Q> const& v1, vec<2, bool, Q> const& v2)
	{
		return vec<2, bool, Q>(v1.x || v2.x, v1.y || v2.y);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}
}//namespace glm
