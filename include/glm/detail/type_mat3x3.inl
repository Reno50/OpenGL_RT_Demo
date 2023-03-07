<<<<<<< HEAD
/// @ref core
/// @file glm/detail/type_mat3x3.inl

#include "func_matrix.hpp"
=======
#include "../matrix.hpp"
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

namespace glm
{
	// -- Constructors --

<<<<<<< HEAD
#	if !GLM_HAS_DEFAULTED_FUNCTIONS || !defined(GLM_FORCE_NO_CTOR_INIT)
		template <typename T, precision P>
		GLM_FUNC_QUALIFIER tmat3x3<T, P>::tmat3x3()
		{
#			ifndef GLM_FORCE_NO_CTOR_INIT 
				this->value[0] = col_type(1, 0, 0);
=======
#	if GLM_CONFIG_DEFAULTED_FUNCTIONS == GLM_DISABLE
		template<typename T, qualifier Q>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<3, 3, T, Q>::mat()
#			if GLM_CONFIG_CTOR_INIT == GLM_CTOR_INITIALIZER_LIST
				: value{col_type(1, 0, 0), col_type(0, 1, 0), col_type(0, 0, 1)}
#			endif
		{
#			if GLM_CONFIG_CTOR_INIT == GLM_CTOR_INITIALISATION
			this->value[0] = col_type(1, 0, 0);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
				this->value[1] = col_type(0, 1, 0);
				this->value[2] = col_type(0, 0, 1);
#			endif
		}
#	endif

<<<<<<< HEAD
#	if !GLM_HAS_DEFAULTED_FUNCTIONS
		template <typename T, precision P>
		GLM_FUNC_QUALIFIER tmat3x3<T, P>::tmat3x3(tmat3x3<T, P> const & m)
		{
			this->value[0] = m.value[0];
			this->value[1] = m.value[1];
			this->value[2] = m.value[2];
		}
#	endif//!GLM_HAS_DEFAULTED_FUNCTIONS

	template <typename T, precision P>
	template <precision Q>
	GLM_FUNC_QUALIFIER tmat3x3<T, P>::tmat3x3(tmat3x3<T, Q> const & m)
	{
		this->value[0] = m.value[0];
		this->value[1] = m.value[1];
		this->value[2] = m.value[2];
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tmat3x3<T, P>::tmat3x3(ctor)
	{}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat3x3<T, P>::tmat3x3(T scalar)
	{
		this->value[0] = col_type(scalar, 0, 0);
		this->value[1] = col_type(0, scalar, 0);
		this->value[2] = col_type(0, 0, scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat3x3<T, P>::tmat3x3
=======
	template<typename T, qualifier Q>
	template<qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<3, 3, T, Q>::mat(mat<3, 3, T, P> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1]), col_type(m[2])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
			this->value[2] = col_type(m[2]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<3, 3, T, Q>::mat(T s)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(s, 0, 0), col_type(0, s, 0), col_type(0, 0, s)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(s, 0, 0);
			this->value[1] = col_type(0, s, 0);
			this->value[2] = col_type(0, 0, s);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<3, 3, T, Q>::mat
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	(
		T x0, T y0, T z0,
		T x1, T y1, T z1,
		T x2, T y2, T z2
	)
<<<<<<< HEAD
	{
		this->value[0] = col_type(x0, y0, z0);
		this->value[1] = col_type(x1, y1, z1);
		this->value[2] = col_type(x2, y2, z2);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat3x3<T, P>::tmat3x3
	(
		col_type const & v0,
		col_type const & v1,
		col_type const & v2
	)
	{
		this->value[0] = v0;
		this->value[1] = v1;
		this->value[2] = v2;
=======
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(x0, y0, z0), col_type(x1, y1, z1), col_type(x2, y2, z2)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(x0, y0, z0);
			this->value[1] = col_type(x1, y1, z1);
			this->value[2] = col_type(x2, y2, z2);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<3, 3, T, Q>::mat(col_type const& v0, col_type const& v1, col_type const& v2)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(v0), col_type(v1), col_type(v2)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(v0);
			this->value[1] = col_type(v1);
			this->value[2] = col_type(v2);
#		endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	// -- Conversion constructors --

<<<<<<< HEAD
	template <typename T, precision P>
	template <
		typename X1, typename Y1, typename Z1,
		typename X2, typename Y2, typename Z2,
		typename X3, typename Y3, typename Z3>
	GLM_FUNC_QUALIFIER tmat3x3<T, P>::tmat3x3
=======
	template<typename T, qualifier Q>
	template<
		typename X1, typename Y1, typename Z1,
		typename X2, typename Y2, typename Z2,
		typename X3, typename Y3, typename Z3>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<3, 3, T, Q>::mat
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	(
		X1 x1, Y1 y1, Z1 z1,
		X2 x2, Y2 y2, Z2 z2,
		X3 x3, Y3 y3, Z3 z3
	)
<<<<<<< HEAD
	{
		this->value[0] = col_type(static_cast<T>(x1), value_type(y1), value_type(z1));
		this->value[1] = col_type(static_cast<T>(x2), value_type(y2), value_type(z2));
		this->value[2] = col_type(static_cast<T>(x3), value_type(y3), value_type(z3));
	}
	
	template <typename T, precision P>
	template <typename V1, typename V2, typename V3>
	GLM_FUNC_QUALIFIER tmat3x3<T, P>::tmat3x3
	(
		tvec3<V1, P> const & v1,
		tvec3<V2, P> const & v2,
		tvec3<V3, P> const & v3
	)
	{
		this->value[0] = col_type(v1);
		this->value[1] = col_type(v2);
		this->value[2] = col_type(v3);
=======
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(x1, y1, z1), col_type(x2, y2, z2), col_type(x3, y3, z3)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(x1, y1, z1);
			this->value[1] = col_type(x2, y2, z2);
			this->value[2] = col_type(x3, y3, z3);
#		endif
	}

	template<typename T, qualifier Q>
	template<typename V1, typename V2, typename V3>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<3, 3, T, Q>::mat(vec<3, V1, Q> const& v1, vec<3, V2, Q> const& v2, vec<3, V3, Q> const& v3)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(v1), col_type(v2), col_type(v3)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(v1);
			this->value[1] = col_type(v2);
			this->value[2] = col_type(v3);
#		endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	// -- Matrix conversions --

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U, precision Q>
	GLM_FUNC_QUALIFIER tmat3x3<T, P>::tmat3x3(tmat3x3<U, Q> const & m)
	{
		this->value[0] = col_type(m[0]);
		this->value[1] = col_type(m[1]);
		this->value[2] = col_type(m[2]);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat3x3<T, P>::tmat3x3(tmat2x2<T, P> const & m)
	{
		this->value[0] = col_type(m[0], 0);
		this->value[1] = col_type(m[1], 0);
		this->value[2] = col_type(0, 0, 1);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat3x3<T, P>::tmat3x3(tmat4x4<T, P> const & m)
	{
		this->value[0] = col_type(m[0]);
		this->value[1] = col_type(m[1]);
		this->value[2] = col_type(m[2]);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat3x3<T, P>::tmat3x3(tmat2x3<T, P> const & m)
	{
		this->value[0] = m[0];
		this->value[1] = m[1];
		this->value[2] = col_type(0, 0, 1);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat3x3<T, P>::tmat3x3(tmat3x2<T, P> const & m)
	{
		this->value[0] = col_type(m[0], 0);
		this->value[1] = col_type(m[1], 0);
		this->value[2] = col_type(m[2], 1);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat3x3<T, P>::tmat3x3(tmat2x4<T, P> const & m)
	{
		this->value[0] = col_type(m[0]);
		this->value[1] = col_type(m[1]);
		this->value[2] = col_type(0, 0, 1);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat3x3<T, P>::tmat3x3(tmat4x2<T, P> const & m)
	{
		this->value[0] = col_type(m[0], 0);
		this->value[1] = col_type(m[1], 0);
		this->value[2] = col_type(m[2], 1);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat3x3<T, P>::tmat3x3(tmat3x4<T, P> const & m)
	{
		this->value[0] = col_type(m[0]);
		this->value[1] = col_type(m[1]);
		this->value[2] = col_type(m[2]);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat3x3<T, P>::tmat3x3(tmat4x3<T, P> const & m)
	{
		this->value[0] = m[0];
		this->value[1] = m[1];
		this->value[2] = m[2];
=======
	template<typename T, qualifier Q>
	template<typename U, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<3, 3, T, Q>::mat(mat<3, 3, U, P> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1]), col_type(m[2])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
			this->value[2] = col_type(m[2]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<3, 3, T, Q>::mat(mat<2, 2, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0], 0), col_type(m[1], 0), col_type(0, 0, 1)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0], 0);
			this->value[1] = col_type(m[1], 0);
			this->value[2] = col_type(0, 0, 1);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<3, 3, T, Q>::mat(mat<4, 4, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1]), col_type(m[2])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
			this->value[2] = col_type(m[2]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<3, 3, T, Q>::mat(mat<2, 3, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1]), col_type(0, 0, 1)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
			this->value[2] = col_type(0, 0, 1);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<3, 3, T, Q>::mat(mat<3, 2, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0], 0), col_type(m[1], 0), col_type(m[2], 1)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0], 0);
			this->value[1] = col_type(m[1], 0);
			this->value[2] = col_type(m[2], 1);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<3, 3, T, Q>::mat(mat<2, 4, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1]), col_type(0, 0, 1)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
			this->value[2] = col_type(0, 0, 1);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<3, 3, T, Q>::mat(mat<4, 2, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0], 0), col_type(m[1], 0), col_type(m[2], 1)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0], 0);
			this->value[1] = col_type(m[1], 0);
			this->value[2] = col_type(m[2], 1);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<3, 3, T, Q>::mat(mat<3, 4, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1]), col_type(m[2])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
			this->value[2] = col_type(m[2]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<3, 3, T, Q>::mat(mat<4, 3, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1]), col_type(m[2])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
			this->value[2] = col_type(m[2]);
#		endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	// -- Accesses --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER typename tmat3x3<T, P>::col_type & tmat3x3<T, P>::operator[](typename tmat3x3<T, P>::length_type i)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER typename mat<3, 3, T, Q>::col_type & mat<3, 3, T, Q>::operator[](typename mat<3, 3, T, Q>::length_type i)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		assert(i < this->length());
		return this->value[i];
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER typename tmat3x3<T, P>::col_type const & tmat3x3<T, P>::operator[](typename tmat3x3<T, P>::length_type i) const
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR typename mat<3, 3, T, Q>::col_type const& mat<3, 3, T, Q>::operator[](typename mat<3, 3, T, Q>::length_type i) const
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		assert(i < this->length());
		return this->value[i];
	}

	// -- Unary updatable operators --

<<<<<<< HEAD
#	if !GLM_HAS_DEFAULTED_FUNCTIONS
		template <typename T, precision P>
		GLM_FUNC_QUALIFIER tmat3x3<T, P> & tmat3x3<T, P>::operator=(tmat3x3<T, P> const & m)
		{
			this->value[0] = m[0];
			this->value[1] = m[1];
			this->value[2] = m[2];
			return *this;
		}
#	endif//!GLM_HAS_DEFAULTED_FUNCTIONS

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tmat3x3<T, P> & tmat3x3<T, P>::operator=(tmat3x3<U, P> const & m)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> & mat<3, 3, T, Q>::operator=(mat<3, 3, U, Q> const& m)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->value[0] = m[0];
		this->value[1] = m[1];
		this->value[2] = m[2];
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tmat3x3<T, P> & tmat3x3<T, P>::operator+=(U s)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> & mat<3, 3, T, Q>::operator+=(U s)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->value[0] += s;
		this->value[1] += s;
		this->value[2] += s;
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tmat3x3<T, P> & tmat3x3<T, P>::operator+=(tmat3x3<U, P> const & m)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> & mat<3, 3, T, Q>::operator+=(mat<3, 3, U, Q> const& m)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->value[0] += m[0];
		this->value[1] += m[1];
		this->value[2] += m[2];
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tmat3x3<T, P> & tmat3x3<T, P>::operator-=(U s)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> & mat<3, 3, T, Q>::operator-=(U s)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->value[0] -= s;
		this->value[1] -= s;
		this->value[2] -= s;
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tmat3x3<T, P> & tmat3x3<T, P>::operator-=(tmat3x3<U, P> const & m)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> & mat<3, 3, T, Q>::operator-=(mat<3, 3, U, Q> const& m)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->value[0] -= m[0];
		this->value[1] -= m[1];
		this->value[2] -= m[2];
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tmat3x3<T, P> & tmat3x3<T, P>::operator*=(U s)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> & mat<3, 3, T, Q>::operator*=(U s)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->value[0] *= s;
		this->value[1] *= s;
		this->value[2] *= s;
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tmat3x3<T, P> & tmat3x3<T, P>::operator*=(tmat3x3<U, P> const & m)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> & mat<3, 3, T, Q>::operator*=(mat<3, 3, U, Q> const& m)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return (*this = *this * m);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tmat3x3<T, P> & tmat3x3<T, P>::operator/=(U s)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> & mat<3, 3, T, Q>::operator/=(U s)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->value[0] /= s;
		this->value[1] /= s;
		this->value[2] /= s;
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tmat3x3<T, P> & tmat3x3<T, P>::operator/=(tmat3x3<U, P> const & m)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> & mat<3, 3, T, Q>::operator/=(mat<3, 3, U, Q> const& m)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return *this *= inverse(m);
	}

	// -- Increment and decrement operators --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat3x3<T, P> & tmat3x3<T, P>::operator++()
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> & mat<3, 3, T, Q>::operator++()
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		++this->value[0];
		++this->value[1];
		++this->value[2];
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat3x3<T, P> & tmat3x3<T, P>::operator--()
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> & mat<3, 3, T, Q>::operator--()
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		--this->value[0];
		--this->value[1];
		--this->value[2];
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat3x3<T, P> tmat3x3<T, P>::operator++(int)
	{
		tmat3x3<T, P> Result(*this);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> mat<3, 3, T, Q>::operator++(int)
	{
		mat<3, 3, T, Q> Result(*this);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		++*this;
		return Result;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat3x3<T, P> tmat3x3<T, P>::operator--(int)
	{
		tmat3x3<T, P> Result(*this);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> mat<3, 3, T, Q>::operator--(int)
	{
		mat<3, 3, T, Q> Result(*this);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		--*this;
		return Result;
	}

	// -- Unary arithmetic operators --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat3x3<T, P> operator+(tmat3x3<T, P> const & m)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> operator+(mat<3, 3, T, Q> const& m)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return m;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat3x3<T, P> operator-(tmat3x3<T, P> const & m)
	{
		return tmat3x3<T, P>(
			-m[0], 
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> operator-(mat<3, 3, T, Q> const& m)
	{
		return mat<3, 3, T, Q>(
			-m[0],
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			-m[1],
			-m[2]);
	}

	// -- Binary arithmetic operators --

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tmat3x3<T, P> operator+(tmat3x3<T, P> const & m, T scalar)
	{
		return tmat3x3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> operator+(mat<3, 3, T, Q> const& m, T scalar)
	{
		return mat<3, 3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			m[0] + scalar,
			m[1] + scalar,
			m[2] + scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tmat3x3<T, P> operator+(T scalar, tmat3x3<T, P> const & m)
	{
		return tmat3x3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> operator+(T scalar, mat<3, 3, T, Q> const& m)
	{
		return mat<3, 3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			m[0] + scalar,
			m[1] + scalar,
			m[2] + scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tmat3x3<T, P> operator+(tmat3x3<T, P> const & m1, tmat3x3<T, P> const & m2)
	{
		return tmat3x3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> operator+(mat<3, 3, T, Q> const& m1, mat<3, 3, T, Q> const& m2)
	{
		return mat<3, 3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			m1[0] + m2[0],
			m1[1] + m2[1],
			m1[2] + m2[2]);
	}

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tmat3x3<T, P> operator-(tmat3x3<T, P> const & m, T scalar)
	{
		return tmat3x3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> operator-(mat<3, 3, T, Q> const& m, T scalar)
	{
		return mat<3, 3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			m[0] - scalar,
			m[1] - scalar,
			m[2] - scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tmat3x3<T, P> operator-(T scalar, tmat3x3<T, P> const & m)
	{
		return tmat3x3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> operator-(T scalar, mat<3, 3, T, Q> const& m)
	{
		return mat<3, 3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar - m[0],
			scalar - m[1],
			scalar - m[2]);
	}

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tmat3x3<T, P> operator-(tmat3x3<T, P> const & m1, tmat3x3<T, P> const & m2)
	{
		return tmat3x3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> operator-(mat<3, 3, T, Q> const& m1, mat<3, 3, T, Q> const& m2)
	{
		return mat<3, 3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			m1[0] - m2[0],
			m1[1] - m2[1],
			m1[2] - m2[2]);
	}

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tmat3x3<T, P> operator*(tmat3x3<T, P> const & m, T scalar)
	{
		return tmat3x3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> operator*(mat<3, 3, T, Q> const& m, T scalar)
	{
		return mat<3, 3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			m[0] * scalar,
			m[1] * scalar,
			m[2] * scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tmat3x3<T, P> operator*(T scalar, tmat3x3<T, P> const & m)
	{
		return tmat3x3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> operator*(T scalar, mat<3, 3, T, Q> const& m)
	{
		return mat<3, 3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			m[0] * scalar,
			m[1] * scalar,
			m[2] * scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER typename tmat3x3<T, P>::col_type operator*(tmat3x3<T, P> const & m, typename tmat3x3<T, P>::row_type const & v)
	{
		return typename tmat3x3<T, P>::col_type(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER typename mat<3, 3, T, Q>::col_type operator*(mat<3, 3, T, Q> const& m, typename mat<3, 3, T, Q>::row_type const& v)
	{
		return typename mat<3, 3, T, Q>::col_type(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			m[0][0] * v.x + m[1][0] * v.y + m[2][0] * v.z,
			m[0][1] * v.x + m[1][1] * v.y + m[2][1] * v.z,
			m[0][2] * v.x + m[1][2] * v.y + m[2][2] * v.z);
	}

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER typename tmat3x3<T, P>::row_type operator*(typename tmat3x3<T, P>::col_type const & v, tmat3x3<T, P> const & m)
	{
		return typename tmat3x3<T, P>::row_type(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER typename mat<3, 3, T, Q>::row_type operator*(typename mat<3, 3, T, Q>::col_type const& v, mat<3, 3, T, Q> const& m)
	{
		return typename mat<3, 3, T, Q>::row_type(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			m[0][0] * v.x + m[0][1] * v.y + m[0][2] * v.z,
			m[1][0] * v.x + m[1][1] * v.y + m[1][2] * v.z,
			m[2][0] * v.x + m[2][1] * v.y + m[2][2] * v.z);
	}

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tmat3x3<T, P> operator*(tmat3x3<T, P> const & m1, tmat3x3<T, P> const & m2)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> operator*(mat<3, 3, T, Q> const& m1, mat<3, 3, T, Q> const& m2)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		T const SrcA00 = m1[0][0];
		T const SrcA01 = m1[0][1];
		T const SrcA02 = m1[0][2];
		T const SrcA10 = m1[1][0];
		T const SrcA11 = m1[1][1];
		T const SrcA12 = m1[1][2];
		T const SrcA20 = m1[2][0];
		T const SrcA21 = m1[2][1];
		T const SrcA22 = m1[2][2];

		T const SrcB00 = m2[0][0];
		T const SrcB01 = m2[0][1];
		T const SrcB02 = m2[0][2];
		T const SrcB10 = m2[1][0];
		T const SrcB11 = m2[1][1];
		T const SrcB12 = m2[1][2];
		T const SrcB20 = m2[2][0];
		T const SrcB21 = m2[2][1];
		T const SrcB22 = m2[2][2];

<<<<<<< HEAD
		tmat3x3<T, P> Result(uninitialize);
=======
		mat<3, 3, T, Q> Result;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		Result[0][0] = SrcA00 * SrcB00 + SrcA10 * SrcB01 + SrcA20 * SrcB02;
		Result[0][1] = SrcA01 * SrcB00 + SrcA11 * SrcB01 + SrcA21 * SrcB02;
		Result[0][2] = SrcA02 * SrcB00 + SrcA12 * SrcB01 + SrcA22 * SrcB02;
		Result[1][0] = SrcA00 * SrcB10 + SrcA10 * SrcB11 + SrcA20 * SrcB12;
		Result[1][1] = SrcA01 * SrcB10 + SrcA11 * SrcB11 + SrcA21 * SrcB12;
		Result[1][2] = SrcA02 * SrcB10 + SrcA12 * SrcB11 + SrcA22 * SrcB12;
		Result[2][0] = SrcA00 * SrcB20 + SrcA10 * SrcB21 + SrcA20 * SrcB22;
		Result[2][1] = SrcA01 * SrcB20 + SrcA11 * SrcB21 + SrcA21 * SrcB22;
		Result[2][2] = SrcA02 * SrcB20 + SrcA12 * SrcB21 + SrcA22 * SrcB22;
		return Result;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x3<T, P> operator*(tmat3x3<T, P> const & m1, tmat2x3<T, P> const & m2)
	{
		return tmat2x3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 3, T, Q> operator*(mat<3, 3, T, Q> const& m1, mat<2, 3, T, Q> const& m2)
	{
		return mat<2, 3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			m1[0][0] * m2[0][0] + m1[1][0] * m2[0][1] + m1[2][0] * m2[0][2],
			m1[0][1] * m2[0][0] + m1[1][1] * m2[0][1] + m1[2][1] * m2[0][2],
			m1[0][2] * m2[0][0] + m1[1][2] * m2[0][1] + m1[2][2] * m2[0][2],
			m1[0][0] * m2[1][0] + m1[1][0] * m2[1][1] + m1[2][0] * m2[1][2],
			m1[0][1] * m2[1][0] + m1[1][1] * m2[1][1] + m1[2][1] * m2[1][2],
			m1[0][2] * m2[1][0] + m1[1][2] * m2[1][1] + m1[2][2] * m2[1][2]);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat4x3<T, P> operator*(tmat3x3<T, P> const & m1, tmat4x3<T, P> const & m2)
	{
		return tmat4x3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 3, T, Q> operator*(mat<3, 3, T, Q> const& m1, mat<4, 3, T, Q> const& m2)
	{
		return mat<4, 3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			m1[0][0] * m2[0][0] + m1[1][0] * m2[0][1] + m1[2][0] * m2[0][2],
			m1[0][1] * m2[0][0] + m1[1][1] * m2[0][1] + m1[2][1] * m2[0][2],
			m1[0][2] * m2[0][0] + m1[1][2] * m2[0][1] + m1[2][2] * m2[0][2],
			m1[0][0] * m2[1][0] + m1[1][0] * m2[1][1] + m1[2][0] * m2[1][2],
			m1[0][1] * m2[1][0] + m1[1][1] * m2[1][1] + m1[2][1] * m2[1][2],
			m1[0][2] * m2[1][0] + m1[1][2] * m2[1][1] + m1[2][2] * m2[1][2],
			m1[0][0] * m2[2][0] + m1[1][0] * m2[2][1] + m1[2][0] * m2[2][2],
			m1[0][1] * m2[2][0] + m1[1][1] * m2[2][1] + m1[2][1] * m2[2][2],
			m1[0][2] * m2[2][0] + m1[1][2] * m2[2][1] + m1[2][2] * m2[2][2],
			m1[0][0] * m2[3][0] + m1[1][0] * m2[3][1] + m1[2][0] * m2[3][2],
			m1[0][1] * m2[3][0] + m1[1][1] * m2[3][1] + m1[2][1] * m2[3][2],
			m1[0][2] * m2[3][0] + m1[1][2] * m2[3][1] + m1[2][2] * m2[3][2]);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat3x3<T, P> operator/(tmat3x3<T, P> const & m,	T scalar)
	{
		return tmat3x3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> operator/(mat<3, 3, T, Q> const& m,	T scalar)
	{
		return mat<3, 3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			m[0] / scalar,
			m[1] / scalar,
			m[2] / scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat3x3<T, P> operator/(T scalar, tmat3x3<T, P> const & m)
	{
		return tmat3x3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> operator/(T scalar, mat<3, 3, T, Q> const& m)
	{
		return mat<3, 3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar / m[0],
			scalar / m[1],
			scalar / m[2]);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER typename tmat3x3<T, P>::col_type operator/(tmat3x3<T, P> const & m, typename tmat3x3<T, P>::row_type const & v)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER typename mat<3, 3, T, Q>::col_type operator/(mat<3, 3, T, Q> const& m, typename mat<3, 3, T, Q>::row_type const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return  inverse(m) * v;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER typename tmat3x3<T, P>::row_type operator/(typename tmat3x3<T, P>::col_type const & v, tmat3x3<T, P> const & m)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER typename mat<3, 3, T, Q>::row_type operator/(typename mat<3, 3, T, Q>::col_type const& v, mat<3, 3, T, Q> const& m)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return v * inverse(m);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat3x3<T, P> operator/(tmat3x3<T, P> const & m1, tmat3x3<T, P> const & m2)
	{
		tmat3x3<T, P> m1_copy(m1);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> operator/(mat<3, 3, T, Q> const& m1, mat<3, 3, T, Q> const& m2)
	{
		mat<3, 3, T, Q> m1_copy(m1);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		return m1_copy /= m2;
	}

	// -- Boolean operators --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER bool operator==(tmat3x3<T, P> const & m1, tmat3x3<T, P> const & m2)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR bool operator==(mat<3, 3, T, Q> const& m1, mat<3, 3, T, Q> const& m2)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return (m1[0] == m2[0]) && (m1[1] == m2[1]) && (m1[2] == m2[2]);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER bool operator!=(tmat3x3<T, P> const & m1, tmat3x3<T, P> const & m2)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER bool operator!=(mat<3, 3, T, Q> const& m1, mat<3, 3, T, Q> const& m2)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return (m1[0] != m2[0]) || (m1[1] != m2[1]) || (m1[2] != m2[2]);
	}
} //namespace glm
