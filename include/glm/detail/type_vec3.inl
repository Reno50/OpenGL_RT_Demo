/// @ref core
<<<<<<< HEAD
/// @file glm/detail/type_tvec3.inl

namespace glm
{

#	ifdef GLM_STATIC_CONST_MEMBERS
	template <typename T, precision P>
	const tvec3<T, P> tvec3<T, P>::ZERO(static_cast<T>(0), static_cast<T>(0), static_cast<T>(0));

	template <typename T, precision P>
	const tvec3<T, P> tvec3<T, P>::X(static_cast<T>(1), static_cast<T>(0), static_cast<T>(0));

	template <typename T, precision P>
	const tvec3<T, P> tvec3<T, P>::Y(static_cast<T>(0), static_cast<T>(1), static_cast<T>(0));

	template <typename T, precision P>
	const tvec3<T, P> tvec3<T, P>::Z(static_cast<T>(0), static_cast<T>(0), static_cast<T>(1));

	template <typename T, precision P>
	const tvec3<T, P> tvec3<T, P>::XY(static_cast<T>(1), static_cast<T>(1), static_cast<T>(0));

	template <typename T, precision P>
	const tvec3<T, P> tvec3<T, P>::XZ(static_cast<T>(1), static_cast<T>(0), static_cast<T>(1));

	template <typename T, precision P>
	const tvec3<T, P> tvec3<T, P>::YZ(static_cast<T>(0), static_cast<T>(1), static_cast<T>(1));

	template <typename T, precision P>
	const tvec3<T, P> tvec3<T, P>::XYZ(static_cast<T>(1), static_cast<T>(1), static_cast<T>(1));
#	endif
	// -- Implicit basic constructors --

#	if !GLM_HAS_DEFAULTED_FUNCTIONS || !defined(GLM_FORCE_NO_CTOR_INIT)
		template <typename T, precision P>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec3<T, P>::tvec3()
#			ifndef GLM_FORCE_NO_CTOR_INIT 
				: x(0), y(0), z(0)
#			endif
		{}
#	endif//!GLM_HAS_DEFAULTED_FUNCTIONS

#	if !GLM_HAS_DEFAULTED_FUNCTIONS
		template <typename T, precision P>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec3<T, P>::tvec3(tvec3<T, P> const & v)
			: x(v.x), y(v.y), z(v.z)
		{}
#	endif//!GLM_HAS_DEFAULTED_FUNCTIONS

	template <typename T, precision P>
	template <precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec3<T, P>::tvec3(tvec3<T, Q> const & v)
=======

#include "compute_vector_relational.hpp"

namespace glm
{
	// -- Implicit basic constructors --

#	if GLM_CONFIG_DEFAULTED_FUNCTIONS == GLM_DISABLE
		template<typename T, qualifier Q>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q>::vec()
#			if GLM_CONFIG_CTOR_INIT != GLM_CTOR_INIT_DISABLE
				: x(0), y(0), z(0)
#			endif
		{}

		template<typename T, qualifier Q>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q>::vec(vec<3, T, Q> const& v)
			: x(v.x), y(v.y), z(v.z)
		{}
#	endif

	template<typename T, qualifier Q>
	template<qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q>::vec(vec<3, T, P> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		: x(v.x), y(v.y), z(v.z)
	{}

	// -- Explicit basic constructors --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec3<T, P>::tvec3(ctor)
	{}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec3<T, P>::tvec3(T scalar)
		: x(scalar), y(scalar), z(scalar)
	{}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec3<T, P>::tvec3(T a, T b, T c)
		: x(a), y(b), z(c)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q>::vec(T scalar)
		: x(scalar), y(scalar), z(scalar)
	{}

	template <typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q>::vec(T _x, T _y, T _z)
		: x(_x), y(_y), z(_z)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{}

	// -- Conversion scalar constructors --

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename A, typename B, typename C>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec3<T, P>::tvec3(A a, B b, C c) :
		x(static_cast<T>(a)),
		y(static_cast<T>(b)),
		z(static_cast<T>(c))
	{}

	template <typename T, precision P>
	template <typename A, typename B, typename C>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec3<T, P>::tvec3(tvec1<A, P> const & a, tvec1<B, P> const & b, tvec1<C, P> const & c) :
		x(static_cast<T>(a)),
		y(static_cast<T>(b)),
		z(static_cast<T>(c))
=======
	template<typename T, qualifier Q>
	template<typename U, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q>::vec(vec<1, U, P> const& v)
		: x(static_cast<T>(v.x))
		, y(static_cast<T>(v.x))
		, z(static_cast<T>(v.x))
	{}

	template<typename T, qualifier Q>
	template<typename X, typename Y, typename Z>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q>::vec(X _x, Y _y, Z _z)
		: x(static_cast<T>(_x))
		, y(static_cast<T>(_y))
		, z(static_cast<T>(_z))
	{}

	template<typename T, qualifier Q>
	template<typename X, typename Y, typename Z>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q>::vec(vec<1, X, Q> const& _x, Y _y, Z _z)
		: x(static_cast<T>(_x.x))
		, y(static_cast<T>(_y))
		, z(static_cast<T>(_z))
	{}

	template<typename T, qualifier Q>
	template<typename X, typename Y, typename Z>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q>::vec(X _x, vec<1, Y, Q> const& _y, Z _z)
		: x(static_cast<T>(_x))
		, y(static_cast<T>(_y.x))
		, z(static_cast<T>(_z))
	{}

	template<typename T, qualifier Q>
	template<typename X, typename Y, typename Z>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q>::vec(vec<1, X, Q> const& _x, vec<1, Y, Q> const& _y, Z _z)
		: x(static_cast<T>(_x.x))
		, y(static_cast<T>(_y.x))
		, z(static_cast<T>(_z))
	{}

	template<typename T, qualifier Q>
	template<typename X, typename Y, typename Z>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q>::vec(X _x, Y _y, vec<1, Z, Q> const& _z)
		: x(static_cast<T>(_x))
		, y(static_cast<T>(_y))
		, z(static_cast<T>(_z.x))
	{}

	template<typename T, qualifier Q>
	template<typename X, typename Y, typename Z>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q>::vec(vec<1, X, Q> const& _x, Y _y, vec<1, Z, Q> const& _z)
		: x(static_cast<T>(_x.x))
		, y(static_cast<T>(_y))
		, z(static_cast<T>(_z.x))
	{}

	template<typename T, qualifier Q>
	template<typename X, typename Y, typename Z>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q>::vec(X _x, vec<1, Y, Q> const& _y, vec<1, Z, Q> const& _z)
		: x(static_cast<T>(_x))
		, y(static_cast<T>(_y.x))
		, z(static_cast<T>(_z.x))
	{}

	template<typename T, qualifier Q>
	template<typename X, typename Y, typename Z>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q>::vec(vec<1, X, Q> const& _x, vec<1, Y, Q> const& _y, vec<1, Z, Q> const& _z)
		: x(static_cast<T>(_x.x))
		, y(static_cast<T>(_y.x))
		, z(static_cast<T>(_z.x))
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{}

	// -- Conversion vector constructors --

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename A, typename B, precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec3<T, P>::tvec3(tvec2<A, Q> const & a, B b) :
		x(static_cast<T>(a.x)),
		y(static_cast<T>(a.y)),
		z(static_cast<T>(b))
	{}

	template <typename T, precision P>
	template <typename A, typename B, precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec3<T, P>::tvec3(tvec2<A, Q> const & a, tvec1<B, Q> const & b) :
		x(static_cast<T>(a.x)),
		y(static_cast<T>(a.y)),
		z(static_cast<T>(b.x))
	{}

	template <typename T, precision P>
	template <typename A, typename B, precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec3<T, P>::tvec3(A a, tvec2<B, Q> const & b) :
		x(static_cast<T>(a)),
		y(static_cast<T>(b.x)),
		z(static_cast<T>(b.y))
	{}

	template <typename T, precision P>
	template <typename A, typename B, precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec3<T, P>::tvec3(tvec1<A, Q> const & a, tvec2<B, Q> const & b) :
		x(static_cast<T>(a.x)),
		y(static_cast<T>(b.x)),
		z(static_cast<T>(b.y))
	{}

	template <typename T, precision P>
	template <typename U, precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec3<T, P>::tvec3(tvec3<U, Q> const & v) :
		x(static_cast<T>(v.x)),
		y(static_cast<T>(v.y)),
		z(static_cast<T>(v.z))
	{}

	template <typename T, precision P>
	template <typename U, precision Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tvec3<T, P>::tvec3(tvec4<U, Q> const & v) :
		x(static_cast<T>(v.x)),
		y(static_cast<T>(v.y)),
		z(static_cast<T>(v.z))
=======
	template<typename T, qualifier Q>
	template<typename A, typename B, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q>::vec(vec<2, A, P> const& _xy, B _z)
		: x(static_cast<T>(_xy.x))
		, y(static_cast<T>(_xy.y))
		, z(static_cast<T>(_z))
	{}

	template<typename T, qualifier Q>
	template<typename A, typename B, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q>::vec(vec<2, A, P> const& _xy, vec<1, B, P> const& _z)
		: x(static_cast<T>(_xy.x))
		, y(static_cast<T>(_xy.y))
		, z(static_cast<T>(_z.x))
	{}

	template<typename T, qualifier Q>
	template<typename A, typename B, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q>::vec(A _x, vec<2, B, P> const& _yz)
		: x(static_cast<T>(_x))
		, y(static_cast<T>(_yz.x))
		, z(static_cast<T>(_yz.y))
	{}

	template<typename T, qualifier Q>
	template<typename A, typename B, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q>::vec(vec<1, A, P> const& _x, vec<2, B, P> const& _yz)
		: x(static_cast<T>(_x.x))
		, y(static_cast<T>(_yz.x))
		, z(static_cast<T>(_yz.y))
	{}

	template<typename T, qualifier Q>
	template<typename U, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q>::vec(vec<3, U, P> const& v)
		: x(static_cast<T>(v.x))
		, y(static_cast<T>(v.y))
		, z(static_cast<T>(v.z))
	{}

	template<typename T, qualifier Q>
	template<typename U, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q>::vec(vec<4, U, P> const& v)
		: x(static_cast<T>(v.x))
		, y(static_cast<T>(v.y))
		, z(static_cast<T>(v.z))
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{}

	// -- Component accesses --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T & tvec3<T, P>::operator[](typename tvec3<T, P>::length_type i)
	{
		assert(i >= 0 && i < this->length());
		return (&x)[i];
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T const & tvec3<T, P>::operator[](typename tvec3<T, P>::length_type i) const
	{
		assert(i >= 0 && i < this->length());
		return (&x)[i];
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR T & vec<3, T, Q>::operator[](typename vec<3, T, Q>::length_type i)
	{
		assert(i >= 0 && i < this->length());
		switch(i)
		{
		default:
			case 0:
		return x;
			case 1:
		return y;
			case 2:
		return z;
		}
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR T const& vec<3, T, Q>::operator[](typename vec<3, T, Q>::length_type i) const
	{
		assert(i >= 0 && i < this->length());
		switch(i)
		{
		default:
		case 0:
			return x;
		case 1:
			return y;
		case 2:
			return z;
		}
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	// -- Unary arithmetic operators --

<<<<<<< HEAD
#	if !GLM_HAS_DEFAULTED_FUNCTIONS
		template <typename T, precision P>
		GLM_FUNC_QUALIFIER tvec3<T, P>& tvec3<T, P>::operator=(tvec3<T, P> const & v)
=======
#	if GLM_CONFIG_DEFAULTED_FUNCTIONS == GLM_DISABLE
		template<typename T, qualifier Q>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q>& vec<3, T, Q>::operator=(vec<3, T, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		{
			this->x = v.x;
			this->y = v.y;
			this->z = v.z;
			return *this;
		}
<<<<<<< HEAD
#	endif//!GLM_HAS_DEFAULTED_FUNCTIONS

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec3<T, P>& tvec3<T, P>::operator=(tvec3<U, P> const & v)
=======
#	endif

	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q>& vec<3, T, Q>::operator=(vec<3, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x = static_cast<T>(v.x);
		this->y = static_cast<T>(v.y);
		this->z = static_cast<T>(v.z);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator+=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator+=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x += static_cast<T>(scalar);
		this->y += static_cast<T>(scalar);
		this->z += static_cast<T>(scalar);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator+=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator+=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x += static_cast<T>(v.x);
		this->y += static_cast<T>(v.x);
		this->z += static_cast<T>(v.x);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator+=(tvec3<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator+=(vec<3, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x += static_cast<T>(v.x);
		this->y += static_cast<T>(v.y);
		this->z += static_cast<T>(v.z);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator-=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator-=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x -= static_cast<T>(scalar);
		this->y -= static_cast<T>(scalar);
		this->z -= static_cast<T>(scalar);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator-=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator-=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x -= static_cast<T>(v.x);
		this->y -= static_cast<T>(v.x);
		this->z -= static_cast<T>(v.x);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator-=(tvec3<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator-=(vec<3, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x -= static_cast<T>(v.x);
		this->y -= static_cast<T>(v.y);
		this->z -= static_cast<T>(v.z);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator*=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator*=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x *= static_cast<T>(scalar);
		this->y *= static_cast<T>(scalar);
		this->z *= static_cast<T>(scalar);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator*=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator*=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x *= static_cast<T>(v.x);
		this->y *= static_cast<T>(v.x);
		this->z *= static_cast<T>(v.x);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator*=(tvec3<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator*=(vec<3, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x *= static_cast<T>(v.x);
		this->y *= static_cast<T>(v.y);
		this->z *= static_cast<T>(v.z);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator/=(U v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator/=(U v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x /= static_cast<T>(v);
		this->y /= static_cast<T>(v);
		this->z /= static_cast<T>(v);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator/=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator/=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x /= static_cast<T>(v.x);
		this->y /= static_cast<T>(v.x);
		this->z /= static_cast<T>(v.x);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator/=(tvec3<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator/=(vec<3, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x /= static_cast<T>(v.x);
		this->y /= static_cast<T>(v.y);
		this->z /= static_cast<T>(v.z);
		return *this;
	}

	// -- Increment and decrement operators --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator++()
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator++()
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		++this->x;
		++this->y;
		++this->z;
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator--()
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator--()
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		--this->x;
		--this->y;
		--this->z;
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec3<T, P> tvec3<T, P>::operator++(int)
	{
		tvec3<T, P> Result(*this);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> vec<3, T, Q>::operator++(int)
	{
		vec<3, T, Q> Result(*this);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		++*this;
		return Result;
	}

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec3<T, P> tvec3<T, P>::operator--(int)
	{
		tvec3<T, P> Result(*this);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> vec<3, T, Q>::operator--(int)
	{
		vec<3, T, Q> Result(*this);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		--*this;
		return Result;
	}

	// -- Unary bit operators --

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator%=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator%=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x %= scalar;
		this->y %= scalar;
		this->z %= scalar;
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator%=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator%=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x %= v.x;
		this->y %= v.x;
		this->z %= v.x;
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator%=(tvec3<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator%=(vec<3, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x %= v.x;
		this->y %= v.y;
		this->z %= v.z;
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator&=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator&=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x &= scalar;
		this->y &= scalar;
		this->z &= scalar;
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator&=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator&=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x &= v.x;
		this->y &= v.x;
		this->z &= v.x;
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator&=(tvec3<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator&=(vec<3, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x &= v.x;
		this->y &= v.y;
		this->z &= v.z;
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator|=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator|=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x |= scalar;
		this->y |= scalar;
		this->z |= scalar;
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator|=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator|=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x |= v.x;
		this->y |= v.x;
		this->z |= v.x;
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator|=(tvec3<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator|=(vec<3, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x |= v.x;
		this->y |= v.y;
		this->z |= v.z;
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator^=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator^=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x ^= scalar;
		this->y ^= scalar;
		this->z ^= scalar;
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator^=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator^=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x ^= v.x;
		this->y ^= v.x;
		this->z ^= v.x;
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator^=(tvec3<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator^=(vec<3, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x ^= v.x;
		this->y ^= v.y;
		this->z ^= v.z;
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator<<=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator<<=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x <<= scalar;
		this->y <<= scalar;
		this->z <<= scalar;
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator<<=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator<<=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x <<= static_cast<T>(v.x);
		this->y <<= static_cast<T>(v.x);
		this->z <<= static_cast<T>(v.x);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator<<=(tvec3<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator<<=(vec<3, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x <<= static_cast<T>(v.x);
		this->y <<= static_cast<T>(v.y);
		this->z <<= static_cast<T>(v.z);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator>>=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator>>=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x >>= static_cast<T>(scalar);
		this->y >>= static_cast<T>(scalar);
		this->z >>= static_cast<T>(scalar);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator>>=(tvec1<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator>>=(vec<1, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x >>= static_cast<T>(v.x);
		this->y >>= static_cast<T>(v.x);
		this->z >>= static_cast<T>(v.x);
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec3<T, P> & tvec3<T, P>::operator>>=(tvec3<U, P> const & v)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> & vec<3, T, Q>::operator>>=(vec<3, U, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->x >>= static_cast<T>(v.x);
		this->y >>= static_cast<T>(v.y);
		this->z >>= static_cast<T>(v.z);
		return *this;
	}

	// -- Unary arithmetic operators --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator+(tvec3<T, P> const & v)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator+(vec<3, T, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return v;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator-(tvec3<T, P> const & v)
	{
		return tvec3<T, P>(
			-v.x, 
			-v.y, 
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator-(vec<3, T, Q> const& v)
	{
		return vec<3, T, Q>(
			-v.x,
			-v.y,
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			-v.z);
	}

	// -- Binary arithmetic operators --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator+(tvec3<T, P> const & v, T scalar)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator+(vec<3, T, Q> const& v, T scalar)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x + scalar,
			v.y + scalar,
			v.z + scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator+(tvec3<T, P> const & v, tvec1<T, P> const & scalar)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator+(vec<3, T, Q> const& v, vec<1, T, Q> const& scalar)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x + scalar.x,
			v.y + scalar.x,
			v.z + scalar.x);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator+(T scalar, tvec3<T, P> const & v)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator+(T scalar, vec<3, T, Q> const& v)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar + v.x,
			scalar + v.y,
			scalar + v.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator+(tvec1<T, P> const & scalar, tvec3<T, P> const & v)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator+(vec<1, T, Q> const& scalar, vec<3, T, Q> const& v)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar.x + v.x,
			scalar.x + v.y,
			scalar.x + v.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator+(tvec3<T, P> const & v1, tvec3<T, P> const & v2)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator+(vec<3, T, Q> const& v1, vec<3, T, Q> const& v2)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x + v2.x,
			v1.y + v2.y,
			v1.z + v2.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator-(tvec3<T, P> const & v, T scalar)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator-(vec<3, T, Q> const& v, T scalar)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x - scalar,
			v.y - scalar,
			v.z - scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator-(tvec3<T, P> const & v, tvec1<T, P> const & scalar)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator-(vec<3, T, Q> const& v, vec<1, T, Q> const& scalar)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x - scalar.x,
			v.y - scalar.x,
			v.z - scalar.x);
	}

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec3<T, P> operator-(T scalar, tvec3<T, P> const & v)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator-(T scalar, vec<3, T, Q> const& v)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar - v.x,
			scalar - v.y,
			scalar - v.z);
	}

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec3<T, P> operator-(tvec1<T, P> const & scalar, tvec3<T, P> const & v)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator-(vec<1, T, Q> const& scalar, vec<3, T, Q> const& v)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar.x - v.x,
			scalar.x - v.y,
			scalar.x - v.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator-(tvec3<T, P> const & v1, tvec3<T, P> const & v2)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator-(vec<3, T, Q> const& v1, vec<3, T, Q> const& v2)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x - v2.x,
			v1.y - v2.y,
			v1.z - v2.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator*(tvec3<T, P> const & v, T scalar)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator*(vec<3, T, Q> const& v, T scalar)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x * scalar,
			v.y * scalar,
			v.z * scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator*(tvec3<T, P> const & v, tvec1<T, P> const & scalar)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator*(vec<3, T, Q> const& v, vec<1, T, Q> const& scalar)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x * scalar.x,
			v.y * scalar.x,
			v.z * scalar.x);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator*(T scalar, tvec3<T, P> const & v)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator*(T scalar, vec<3, T, Q> const& v)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar * v.x,
			scalar * v.y,
			scalar * v.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator*(tvec1<T, P> const & scalar, tvec3<T, P> const & v)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator*(vec<1, T, Q> const& scalar, vec<3, T, Q> const& v)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar.x * v.x,
			scalar.x * v.y,
			scalar.x * v.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator*(tvec3<T, P> const & v1, tvec3<T, P> const & v2)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator*(vec<3, T, Q> const& v1, vec<3, T, Q> const& v2)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x * v2.x,
			v1.y * v2.y,
			v1.z * v2.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator/(tvec3<T, P> const & v, T scalar)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator/(vec<3, T, Q> const& v, T scalar)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x / scalar,
			v.y / scalar,
			v.z / scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator/(tvec3<T, P> const & v, tvec1<T, P> const & scalar)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator/(vec<3, T, Q> const& v, vec<1, T, Q> const& scalar)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x / scalar.x,
			v.y / scalar.x,
			v.z / scalar.x);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator/(T scalar, tvec3<T, P> const & v)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator/(T scalar, vec<3, T, Q> const& v)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar / v.x,
			scalar / v.y,
			scalar / v.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator/(tvec1<T, P> const & scalar, tvec3<T, P> const & v)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator/(vec<1, T, Q> const& scalar, vec<3, T, Q> const& v)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar.x / v.x,
			scalar.x / v.y,
			scalar.x / v.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator/(tvec3<T, P> const & v1, tvec3<T, P> const & v2)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator/(vec<3, T, Q> const& v1, vec<3, T, Q> const& v2)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x / v2.x,
			v1.y / v2.y,
			v1.z / v2.z);
	}

	// -- Binary bit operators --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator%(tvec3<T, P> const & v, T scalar)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator%(vec<3, T, Q> const& v, T scalar)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x % scalar,
			v.y % scalar,
			v.z % scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator%(tvec3<T, P> const & v, tvec1<T, P> const & scalar)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator%(vec<3, T, Q> const& v, vec<1, T, Q> const& scalar)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x % scalar.x,
			v.y % scalar.x,
			v.z % scalar.x);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator%(T scalar, tvec3<T, P> const & v)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator%(T scalar, vec<3, T, Q> const& v)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar % v.x,
			scalar % v.y,
			scalar % v.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator%(tvec1<T, P> const & scalar, tvec3<T, P> const & v)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator%(vec<1, T, Q> const& scalar, vec<3, T, Q> const& v)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar.x % v.x,
			scalar.x % v.y,
			scalar.x % v.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator%(tvec3<T, P> const & v1, tvec3<T, P> const & v2)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator%(vec<3, T, Q> const& v1, vec<3, T, Q> const& v2)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x % v2.x,
			v1.y % v2.y,
			v1.z % v2.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator&(tvec3<T, P> const & v, T scalar)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator&(vec<3, T, Q> const& v, T scalar)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x & scalar,
			v.y & scalar,
			v.z & scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator&(tvec3<T, P> const & v, tvec1<T, P> const & scalar)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator&(vec<3, T, Q> const& v, vec<1, T, Q> const& scalar)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x & scalar.x,
			v.y & scalar.x,
			v.z & scalar.x);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator&(T scalar, tvec3<T, P> const & v)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator&(T scalar, vec<3, T, Q> const& v)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar & v.x,
			scalar & v.y,
			scalar & v.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator&(tvec1<T, P> const & scalar, tvec3<T, P> const & v)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator&(vec<1, T, Q> const& scalar, vec<3, T, Q> const& v)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar.x & v.x,
			scalar.x & v.y,
			scalar.x & v.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator&(tvec3<T, P> const & v1, tvec3<T, P> const & v2)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator&(vec<3, T, Q> const& v1, vec<3, T, Q> const& v2)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x & v2.x,
			v1.y & v2.y,
			v1.z & v2.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator|(tvec3<T, P> const & v, T scalar)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator|(vec<3, T, Q> const& v, T scalar)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x | scalar,
			v.y | scalar,
			v.z | scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator|(tvec3<T, P> const & v, tvec1<T, P> const & scalar)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator|(vec<3, T, Q> const& v, vec<1, T, Q> const& scalar)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x | scalar.x,
			v.y | scalar.x,
			v.z | scalar.x);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator|(T scalar, tvec3<T, P> const & v)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator|(T scalar, vec<3, T, Q> const& v)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar | v.x,
			scalar | v.y,
			scalar | v.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator|(tvec1<T, P> const & scalar, tvec3<T, P> const & v)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator|(vec<1, T, Q> const& scalar, vec<3, T, Q> const& v)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar.x | v.x,
			scalar.x | v.y,
			scalar.x | v.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator|(tvec3<T, P> const & v1, tvec3<T, P> const & v2)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator|(vec<3, T, Q> const& v1, vec<3, T, Q> const& v2)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x | v2.x,
			v1.y | v2.y,
			v1.z | v2.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator^(tvec3<T, P> const & v, T scalar)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator^(vec<3, T, Q> const& v, T scalar)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x ^ scalar,
			v.y ^ scalar,
			v.z ^ scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator^(tvec3<T, P> const & v, tvec1<T, P> const & scalar)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator^(vec<3, T, Q> const& v, vec<1, T, Q> const& scalar)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x ^ scalar.x,
			v.y ^ scalar.x,
			v.z ^ scalar.x);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator^(T scalar, tvec3<T, P> const & v)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator^(T scalar, vec<3, T, Q> const& v)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar ^ v.x,
			scalar ^ v.y,
			scalar ^ v.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator^(tvec1<T, P> const & scalar, tvec3<T, P> const & v)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator^(vec<1, T, Q> const& scalar, vec<3, T, Q> const& v)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar.x ^ v.x,
			scalar.x ^ v.y,
			scalar.x ^ v.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator^(tvec3<T, P> const & v1, tvec3<T, P> const & v2)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator^(vec<3, T, Q> const& v1, vec<3, T, Q> const& v2)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x ^ v2.x,
			v1.y ^ v2.y,
			v1.z ^ v2.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator<<(tvec3<T, P> const & v, T scalar)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator<<(vec<3, T, Q> const& v, T scalar)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x << scalar,
			v.y << scalar,
			v.z << scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator<<(tvec3<T, P> const & v, tvec1<T, P> const & scalar)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator<<(vec<3, T, Q> const& v, vec<1, T, Q> const& scalar)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x << scalar.x,
			v.y << scalar.x,
			v.z << scalar.x);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator<<(T scalar, tvec3<T, P> const & v)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator<<(T scalar, vec<3, T, Q> const& v)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar << v.x,
			scalar << v.y,
			scalar << v.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator<<(tvec1<T, P> const & scalar, tvec3<T, P> const & v)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator<<(vec<1, T, Q> const& scalar, vec<3, T, Q> const& v)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar.x << v.x,
			scalar.x << v.y,
			scalar.x << v.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator<<(tvec3<T, P> const & v1, tvec3<T, P> const & v2)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator<<(vec<3, T, Q> const& v1, vec<3, T, Q> const& v2)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x << v2.x,
			v1.y << v2.y,
			v1.z << v2.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator>>(tvec3<T, P> const & v, T scalar)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator>>(vec<3, T, Q> const& v, T scalar)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x >> scalar,
			v.y >> scalar,
			v.z >> scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator>>(tvec3<T, P> const & v, tvec1<T, P> const & scalar)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator>>(vec<3, T, Q> const& v, vec<1, T, Q> const& scalar)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x >> scalar.x,
			v.y >> scalar.x,
			v.z >> scalar.x);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator>>(T scalar, tvec3<T, P> const & v)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator>>(T scalar, vec<3, T, Q> const& v)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar >> v.x,
			scalar >> v.y,
			scalar >> v.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator>>(tvec1<T, P> const & scalar, tvec3<T, P> const & v)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator>>(vec<1, T, Q> const& scalar, vec<3, T, Q> const& v)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar.x >> v.x,
			scalar.x >> v.y,
			scalar.x >> v.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> operator>>(tvec3<T, P> const & v1, tvec3<T, P> const & v2)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator>>(vec<3, T, Q> const& v1, vec<3, T, Q> const& v2)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v1.x >> v2.x,
			v1.y >> v2.y,
			v1.z >> v2.z);
	}

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec3<T, P> operator~(tvec3<T, P> const & v)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, T, Q> operator~(vec<3, T, Q> const& v)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			~v.x,
			~v.y,
			~v.z);
	}

	// -- Boolean operators --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER bool operator==(tvec3<T, P> const & v1, tvec3<T, P> const & v2)
	{
		return (v1.x == v2.x) && (v1.y == v2.y) && (v1.z == v2.z);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER bool operator!=(tvec3<T, P> const & v1, tvec3<T, P> const & v2)
	{
		return (v1.x != v2.x) || (v1.y != v2.y) || (v1.z != v2.z);
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec3<bool, P> operator&&(tvec3<bool, P> const & v1, tvec3<bool, P> const & v2)
	{
		return tvec3<bool, P>(v1.x && v2.x, v1.y && v2.y, v1.z && v2.z);
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec3<bool, P> operator||(tvec3<bool, P> const & v1, tvec3<bool, P> const & v2)
	{
		return tvec3<bool, P>(v1.x || v2.x, v1.y || v2.y, v1.z || v2.z);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR bool operator==(vec<3, T, Q> const& v1, vec<3, T, Q> const& v2)
	{
		return
			detail::compute_equal<T, std::numeric_limits<T>::is_iec559>::call(v1.x, v2.x) &&
			detail::compute_equal<T, std::numeric_limits<T>::is_iec559>::call(v1.y, v2.y) &&
			detail::compute_equal<T, std::numeric_limits<T>::is_iec559>::call(v1.z, v2.z);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR bool operator!=(vec<3, T, Q> const& v1, vec<3, T, Q> const& v2)
	{
		return !(v1 == v2);
	}

	template<qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, bool, Q> operator&&(vec<3, bool, Q> const& v1, vec<3, bool, Q> const& v2)
	{
		return vec<3, bool, Q>(v1.x && v2.x, v1.y && v2.y, v1.z && v2.z);
	}

	template<qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<3, bool, Q> operator||(vec<3, bool, Q> const& v1, vec<3, bool, Q> const& v2)
	{
		return vec<3, bool, Q>(v1.x || v2.x, v1.y || v2.y, v1.z || v2.z);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}
}//namespace glm
