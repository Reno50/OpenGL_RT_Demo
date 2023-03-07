<<<<<<< HEAD
/// @ref core
/// @file glm/detail/type_mat2x2.inl

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
		GLM_FUNC_QUALIFIER tmat2x2<T, P>::tmat2x2()
		{
#			ifndef GLM_FORCE_NO_CTOR_INIT 
=======
#	if GLM_CONFIG_DEFAULTED_FUNCTIONS == GLM_DISABLE
		template<typename T, qualifier Q>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 2, T, Q>::mat()
#			if GLM_CONFIG_CTOR_INIT == GLM_CTOR_INITIALIZER_LIST
				: value{col_type(1, 0), col_type(0, 1)}
#			endif
		{
#			if GLM_CONFIG_CTOR_INIT == GLM_CTOR_INITIALISATION
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
				this->value[0] = col_type(1, 0);
				this->value[1] = col_type(0, 1);
#			endif
		}
#	endif

<<<<<<< HEAD
#	if !GLM_HAS_DEFAULTED_FUNCTIONS
		template <typename T, precision P>
		GLM_FUNC_QUALIFIER tmat2x2<T, P>::tmat2x2(tmat2x2<T, P> const & m)
		{
			this->value[0] = m.value[0];
			this->value[1] = m.value[1];
		}
#	endif//!GLM_HAS_DEFAULTED_FUNCTIONS

	template <typename T, precision P>
	template <precision Q>
	GLM_FUNC_QUALIFIER tmat2x2<T, P>::tmat2x2(tmat2x2<T, Q> const & m)
	{
		this->value[0] = m.value[0];
		this->value[1] = m.value[1];
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR_CTOR tmat2x2<T, P>::tmat2x2(ctor)
	{}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x2<T, P>::tmat2x2(T scalar)
	{
		this->value[0] = col_type(scalar, 0);
		this->value[1] = col_type(0, scalar);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x2<T, P>::tmat2x2
	(
		T const & x0, T const & y0,
		T const & x1, T const & y1
	)
	{
		this->value[0] = col_type(x0, y0);
		this->value[1] = col_type(x1, y1);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x2<T, P>::tmat2x2(col_type const & v0, col_type const & v1)
	{
		this->value[0] = v0;
		this->value[1] = v1;
=======
	template<typename T, qualifier Q>
	template<qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 2, T, Q>::mat(mat<2, 2, T, P> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{m[0], m[1]}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = m[0];
			this->value[1] = m[1];
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 2, T, Q>::mat(T scalar)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(scalar, 0), col_type(0, scalar)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(scalar, 0);
			this->value[1] = col_type(0, scalar);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 2, T, Q>::mat
	(
		T const& x0, T const& y0,
		T const& x1, T const& y1
	)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(x0, y0), col_type(x1, y1)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(x0, y0);
			this->value[1] = col_type(x1, y1);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 2, T, Q>::mat(col_type const& v0, col_type const& v1)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{v0, v1}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = v0;
			this->value[1] = v1;
#		endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	// -- Conversion constructors --

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename X1, typename Y1, typename X2, typename Y2>
	GLM_FUNC_QUALIFIER tmat2x2<T, P>::tmat2x2
	(
		X1 const & x1, Y1 const & y1,
		X2 const & x2, Y2 const & y2
	)
	{
		this->value[0] = col_type(static_cast<T>(x1), value_type(y1));
		this->value[1] = col_type(static_cast<T>(x2), value_type(y2));
	}
	
	template <typename T, precision P>
	template <typename V1, typename V2>
	GLM_FUNC_QUALIFIER tmat2x2<T, P>::tmat2x2(tvec2<V1, P> const & v1, tvec2<V2, P> const & v2)
	{
		this->value[0] = col_type(v1);
		this->value[1] = col_type(v2);
=======
	template<typename T, qualifier Q>
	template<typename X1, typename Y1, typename X2, typename Y2>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 2, T, Q>::mat
	(
		X1 const& x1, Y1 const& y1,
		X2 const& x2, Y2 const& y2
	)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(static_cast<T>(x1), value_type(y1)), col_type(static_cast<T>(x2), value_type(y2)) }
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(static_cast<T>(x1), value_type(y1));
			this->value[1] = col_type(static_cast<T>(x2), value_type(y2));
#		endif
	}

	template<typename T, qualifier Q>
	template<typename V1, typename V2>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 2, T, Q>::mat(vec<2, V1, Q> const& v1, vec<2, V2, Q> const& v2)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(v1), col_type(v2)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(v1);
			this->value[1] = col_type(v2);
#		endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	// -- mat2x2 matrix conversions --

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U, precision Q>
	GLM_FUNC_QUALIFIER tmat2x2<T, P>::tmat2x2(tmat2x2<U, Q> const & m)
	{
		this->value[0] = col_type(m[0]);
		this->value[1] = col_type(m[1]);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x2<T, P>::tmat2x2(tmat3x3<T, P> const & m)
	{
		this->value[0] = col_type(m[0]);
		this->value[1] = col_type(m[1]);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x2<T, P>::tmat2x2(tmat4x4<T, P> const & m)
	{
		this->value[0] = col_type(m[0]);
		this->value[1] = col_type(m[1]);
	}

	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tmat2x2<T, P>::tmat2x2(tmat2x3<T, P> const & m)
	{
		this->value[0] = col_type(m[0]);
		this->value[1] = col_type(m[1]);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x2<T, P>::tmat2x2(tmat3x2<T, P> const & m)
	{
		this->value[0] = m[0];
		this->value[1] = m[1];
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x2<T, P>::tmat2x2(tmat2x4<T, P> const & m)
	{
		this->value[0] = col_type(m[0]);
		this->value[1] = col_type(m[1]);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x2<T, P>::tmat2x2(tmat4x2<T, P> const & m)
	{
		this->value[0] = m[0];
		this->value[1] = m[1];
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x2<T, P>::tmat2x2(tmat3x4<T, P> const & m)
	{
		this->value[0] = col_type(m[0]);
		this->value[1] = col_type(m[1]);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x2<T, P>::tmat2x2(tmat4x3<T, P> const & m)
	{
		this->value[0] = col_type(m[0]);
		this->value[1] = col_type(m[1]);
=======
	template<typename T, qualifier Q>
	template<typename U, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 2, T, Q>::mat(mat<2, 2, U, P> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 2, T, Q>::mat(mat<3, 3, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 2, T, Q>::mat(mat<4, 4, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 2, T, Q>::mat(mat<2, 3, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 2, T, Q>::mat(mat<3, 2, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 2, T, Q>::mat(mat<2, 4, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 2, T, Q>::mat(mat<4, 2, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 2, T, Q>::mat(mat<3, 4, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 2, T, Q>::mat(mat<4, 3, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
#		endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	// -- Accesses --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER typename tmat2x2<T, P>::col_type & tmat2x2<T, P>::operator[](typename tmat2x2<T, P>::length_type i)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER typename mat<2, 2, T, Q>::col_type& mat<2, 2, T, Q>::operator[](typename mat<2, 2, T, Q>::length_type i)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		assert(i < this->length());
		return this->value[i];
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER typename tmat2x2<T, P>::col_type const & tmat2x2<T, P>::operator[](typename tmat2x2<T, P>::length_type i) const
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR typename mat<2, 2, T, Q>::col_type const& mat<2, 2, T, Q>::operator[](typename mat<2, 2, T, Q>::length_type i) const
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		assert(i < this->length());
		return this->value[i];
	}

	// -- Unary updatable operators --

<<<<<<< HEAD
#	if !GLM_HAS_DEFAULTED_FUNCTIONS
		template <typename T, precision P>
		GLM_FUNC_QUALIFIER tmat2x2<T, P>& tmat2x2<T, P>::operator=(tmat2x2<T, P> const & m)
		{
			this->value[0] = m[0];
			this->value[1] = m[1];
			return *this;
		}
#	endif//!GLM_HAS_DEFAULTED_FUNCTIONS

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tmat2x2<T, P>& tmat2x2<T, P>::operator=(tmat2x2<U, P> const & m)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q>& mat<2, 2, T, Q>::operator=(mat<2, 2, U, Q> const& m)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->value[0] = m[0];
		this->value[1] = m[1];
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tmat2x2<T, P>& tmat2x2<T, P>::operator+=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q>& mat<2, 2, T, Q>::operator+=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->value[0] += scalar;
		this->value[1] += scalar;
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tmat2x2<T, P>& tmat2x2<T, P>::operator+=(tmat2x2<U, P> const & m)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q>& mat<2, 2, T, Q>::operator+=(mat<2, 2, U, Q> const& m)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->value[0] += m[0];
		this->value[1] += m[1];
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tmat2x2<T, P>& tmat2x2<T, P>::operator-=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q>& mat<2, 2, T, Q>::operator-=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->value[0] -= scalar;
		this->value[1] -= scalar;
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tmat2x2<T, P>& tmat2x2<T, P>::operator-=(tmat2x2<U, P> const & m)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q>& mat<2, 2, T, Q>::operator-=(mat<2, 2, U, Q> const& m)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->value[0] -= m[0];
		this->value[1] -= m[1];
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tmat2x2<T, P>& tmat2x2<T, P>::operator*=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q>& mat<2, 2, T, Q>::operator*=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->value[0] *= scalar;
		this->value[1] *= scalar;
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tmat2x2<T, P>& tmat2x2<T, P>::operator*=(tmat2x2<U, P> const & m)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q>& mat<2, 2, T, Q>::operator*=(mat<2, 2, U, Q> const& m)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return (*this = *this * m);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tmat2x2<T, P>& tmat2x2<T, P>::operator/=(U scalar)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q>& mat<2, 2, T, Q>::operator/=(U scalar)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		this->value[0] /= scalar;
		this->value[1] /= scalar;
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tmat2x2<T, P>& tmat2x2<T, P>::operator/=(tmat2x2<U, P> const & m)
=======
	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q>& mat<2, 2, T, Q>::operator/=(mat<2, 2, U, Q> const& m)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return *this *= inverse(m);
	}

	// -- Increment and decrement operators --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x2<T, P>& tmat2x2<T, P>::operator++()
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q>& mat<2, 2, T, Q>::operator++()
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		++this->value[0];
		++this->value[1];
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x2<T, P>& tmat2x2<T, P>::operator--()
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q>& mat<2, 2, T, Q>::operator--()
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		--this->value[0];
		--this->value[1];
		return *this;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x2<T, P> tmat2x2<T, P>::operator++(int)
	{
		tmat2x2<T, P> Result(*this);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q> mat<2, 2, T, Q>::operator++(int)
	{
		mat<2, 2, T, Q> Result(*this);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		++*this;
		return Result;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x2<T, P> tmat2x2<T, P>::operator--(int)
	{
		tmat2x2<T, P> Result(*this);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q> mat<2, 2, T, Q>::operator--(int)
	{
		mat<2, 2, T, Q> Result(*this);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		--*this;
		return Result;
	}

	// -- Unary arithmetic operators --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x2<T, P> operator+(tmat2x2<T, P> const & m)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q> operator+(mat<2, 2, T, Q> const& m)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return m;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x2<T, P> operator-(tmat2x2<T, P> const & m)
	{
		return tmat2x2<T, P>(
			-m[0], 
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q> operator-(mat<2, 2, T, Q> const& m)
	{
		return mat<2, 2, T, Q>(
			-m[0],
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			-m[1]);
	}

	// -- Binary arithmetic operators --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x2<T, P> operator+(tmat2x2<T, P> const & m, T scalar)
	{
		return tmat2x2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q> operator+(mat<2, 2, T, Q> const& m, T scalar)
	{
		return mat<2, 2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			m[0] + scalar,
			m[1] + scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x2<T, P> operator+(T scalar, tmat2x2<T, P> const & m)
	{
		return tmat2x2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q> operator+(T scalar, mat<2, 2, T, Q> const& m)
	{
		return mat<2, 2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			m[0] + scalar,
			m[1] + scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x2<T, P> operator+(tmat2x2<T, P> const & m1, tmat2x2<T, P> const & m2)
	{
		return tmat2x2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q> operator+(mat<2, 2, T, Q> const& m1, mat<2, 2, T, Q> const& m2)
	{
		return mat<2, 2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			m1[0] + m2[0],
			m1[1] + m2[1]);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x2<T, P> operator-(tmat2x2<T, P> const & m, T scalar)
	{
		return tmat2x2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q> operator-(mat<2, 2, T, Q> const& m, T scalar)
	{
		return mat<2, 2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			m[0] - scalar,
			m[1] - scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x2<T, P> operator-(T scalar, tmat2x2<T, P> const & m)
	{
		return tmat2x2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q> operator-(T scalar, mat<2, 2, T, Q> const& m)
	{
		return mat<2, 2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar - m[0],
			scalar - m[1]);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x2<T, P> operator-(tmat2x2<T, P> const & m1, tmat2x2<T, P> const & m2)
	{
		return tmat2x2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q> operator-(mat<2, 2, T, Q> const& m1, mat<2, 2, T, Q> const& m2)
	{
		return mat<2, 2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			m1[0] - m2[0],
			m1[1] - m2[1]);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x2<T, P> operator*(tmat2x2<T, P> const & m, T scalar)
	{
		return tmat2x2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q> operator*(mat<2, 2, T, Q> const& m, T scalar)
	{
		return mat<2, 2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			m[0] * scalar,
			m[1] * scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x2<T, P> operator*(T scalar, tmat2x2<T, P> const & m)
	{
		return tmat2x2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q> operator*(T scalar, mat<2, 2, T, Q> const& m)
	{
		return mat<2, 2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			m[0] * scalar,
			m[1] * scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER typename tmat2x2<T, P>::col_type operator*
	(
		tmat2x2<T, P> const & m,
		typename tmat2x2<T, P>::row_type const & v
	)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER typename mat<2, 2, T, Q>::col_type operator*
	(
		mat<2, 2, T, Q> const& m,
		typename mat<2, 2, T, Q>::row_type const& v
	)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			m[0][0] * v.x + m[1][0] * v.y,
			m[0][1] * v.x + m[1][1] * v.y);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER typename tmat2x2<T, P>::row_type operator*
	(
		typename tmat2x2<T, P>::col_type const & v,
		tmat2x2<T, P> const & m
	)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER typename mat<2, 2, T, Q>::row_type operator*
	(
		typename mat<2, 2, T, Q>::col_type const& v,
		mat<2, 2, T, Q> const& m
	)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			v.x * m[0][0] + v.y * m[0][1],
			v.x * m[1][0] + v.y * m[1][1]);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x2<T, P> operator*(tmat2x2<T, P> const & m1, tmat2x2<T, P> const & m2)
	{
		return tmat2x2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q> operator*(mat<2, 2, T, Q> const& m1, mat<2, 2, T, Q> const& m2)
	{
		return mat<2, 2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			m1[0][0] * m2[0][0] + m1[1][0] * m2[0][1],
			m1[0][1] * m2[0][0] + m1[1][1] * m2[0][1],
			m1[0][0] * m2[1][0] + m1[1][0] * m2[1][1],
			m1[0][1] * m2[1][0] + m1[1][1] * m2[1][1]);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat3x2<T, P> operator*(tmat2x2<T, P> const & m1, tmat3x2<T, P> const & m2)
	{
		return tmat3x2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 2, T, Q> operator*(mat<2, 2, T, Q> const& m1, mat<3, 2, T, Q> const& m2)
	{
		return mat<3, 2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			m1[0][0] * m2[0][0] + m1[1][0] * m2[0][1],
			m1[0][1] * m2[0][0] + m1[1][1] * m2[0][1],
			m1[0][0] * m2[1][0] + m1[1][0] * m2[1][1],
			m1[0][1] * m2[1][0] + m1[1][1] * m2[1][1],
			m1[0][0] * m2[2][0] + m1[1][0] * m2[2][1],
			m1[0][1] * m2[2][0] + m1[1][1] * m2[2][1]);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat4x2<T, P> operator*(tmat2x2<T, P> const & m1, tmat4x2<T, P> const & m2)
	{
		return tmat4x2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 2, T, Q> operator*(mat<2, 2, T, Q> const& m1, mat<4, 2, T, Q> const& m2)
	{
		return mat<4, 2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			m1[0][0] * m2[0][0] + m1[1][0] * m2[0][1],
			m1[0][1] * m2[0][0] + m1[1][1] * m2[0][1],
			m1[0][0] * m2[1][0] + m1[1][0] * m2[1][1],
			m1[0][1] * m2[1][0] + m1[1][1] * m2[1][1],
			m1[0][0] * m2[2][0] + m1[1][0] * m2[2][1],
			m1[0][1] * m2[2][0] + m1[1][1] * m2[2][1],
			m1[0][0] * m2[3][0] + m1[1][0] * m2[3][1],
			m1[0][1] * m2[3][0] + m1[1][1] * m2[3][1]);
	}

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tmat2x2<T, P> operator/(tmat2x2<T, P> const & m, T scalar)
	{
		return tmat2x2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q> operator/(mat<2, 2, T, Q> const& m, T scalar)
	{
		return mat<2, 2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			m[0] / scalar,
			m[1] / scalar);
	}

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tmat2x2<T, P> operator/(T scalar, tmat2x2<T, P> const & m)
	{
		return tmat2x2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q> operator/(T scalar, mat<2, 2, T, Q> const& m)
	{
		return mat<2, 2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			scalar / m[0],
			scalar / m[1]);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER typename tmat2x2<T, P>::col_type operator/(tmat2x2<T, P> const & m, typename tmat2x2<T, P>::row_type const & v)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER typename mat<2, 2, T, Q>::col_type operator/(mat<2, 2, T, Q> const& m, typename mat<2, 2, T, Q>::row_type const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return inverse(m) * v;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER typename tmat2x2<T, P>::row_type operator/(typename tmat2x2<T, P>::col_type const & v, tmat2x2<T, P> const & m)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER typename mat<2, 2, T, Q>::row_type operator/(typename mat<2, 2, T, Q>::col_type const& v, mat<2, 2, T, Q> const& m)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return v *  inverse(m);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x2<T, P> operator/(tmat2x2<T, P> const & m1, tmat2x2<T, P> const & m2)
	{	
		tmat2x2<T, P> m1_copy(m1);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q> operator/(mat<2, 2, T, Q> const& m1, mat<2, 2, T, Q> const& m2)
	{
		mat<2, 2, T, Q> m1_copy(m1);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		return m1_copy /= m2;
	}

	// -- Boolean operators --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER bool operator==(tmat2x2<T, P> const & m1, tmat2x2<T, P> const & m2)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER bool operator==(mat<2, 2, T, Q> const& m1, mat<2, 2, T, Q> const& m2)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return (m1[0] == m2[0]) && (m1[1] == m2[1]);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER bool operator!=(tmat2x2<T, P> const & m1, tmat2x2<T, P> const & m2)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER bool operator!=(mat<2, 2, T, Q> const& m1, mat<2, 2, T, Q> const& m2)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return (m1[0] != m2[0]) || (m1[1] != m2[1]);
	}
} //namespace glm
