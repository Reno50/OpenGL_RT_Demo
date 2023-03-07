/// @ref core
/// @file glm/detail/type_mat2x3.hpp

#pragma once

<<<<<<< HEAD
#include "../fwd.hpp"
#include "type_vec2.hpp"
#include "type_vec3.hpp"
#include "type_mat.hpp"
=======
#include "type_vec2.hpp"
#include "type_vec3.hpp"
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#include <limits>
#include <cstddef>

namespace glm
{
<<<<<<< HEAD
	template <typename T, precision P = defaultp>
	struct tmat2x3
	{
		typedef tvec3<T, P> col_type;
		typedef tvec2<T, P> row_type;
		typedef tmat2x3<T, P> type;
		typedef tmat3x2<T, P> transpose_type;
=======
	template<typename T, qualifier Q>
	struct mat<2, 3, T, Q>
	{
		typedef vec<3, T, Q> col_type;
		typedef vec<2, T, Q> row_type;
		typedef mat<2, 3, T, Q> type;
		typedef mat<3, 2, T, Q> transpose_type;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		typedef T value_type;

	private:
		col_type value[2];

	public:
<<<<<<< HEAD
		// -- Constructors --

		GLM_FUNC_DECL tmat2x3() GLM_DEFAULT_CTOR;
		GLM_FUNC_DECL tmat2x3(tmat2x3<T, P> const & m) GLM_DEFAULT;
		template <precision Q>
		GLM_FUNC_DECL tmat2x3(tmat2x3<T, Q> const & m);

		GLM_FUNC_DECL GLM_CONSTEXPR_CTOR explicit tmat2x3(ctor);
		GLM_FUNC_DECL explicit tmat2x3(T scalar);
		GLM_FUNC_DECL tmat2x3(
			T x0, T y0, T z0,
			T x1, T y1, T z1);
		GLM_FUNC_DECL tmat2x3(
			col_type const & v0,
			col_type const & v1);

		// -- Conversions --

		template <typename X1, typename Y1, typename Z1, typename X2, typename Y2, typename Z2>
		GLM_FUNC_DECL tmat2x3(
			X1 x1, Y1 y1, Z1 z1,
			X2 x2, Y2 y2, Z2 z2);

		template <typename U, typename V>
		GLM_FUNC_DECL tmat2x3(
			tvec3<U, P> const & v1,
			tvec3<V, P> const & v2);

		// -- Matrix conversions --

		template <typename U, precision Q>
		GLM_FUNC_DECL GLM_EXPLICIT tmat2x3(tmat2x3<U, Q> const & m);

		GLM_FUNC_DECL GLM_EXPLICIT tmat2x3(tmat2x2<T, P> const & x);
		GLM_FUNC_DECL GLM_EXPLICIT tmat2x3(tmat3x3<T, P> const & x);
		GLM_FUNC_DECL GLM_EXPLICIT tmat2x3(tmat4x4<T, P> const & x);
		GLM_FUNC_DECL GLM_EXPLICIT tmat2x3(tmat2x4<T, P> const & x);
		GLM_FUNC_DECL GLM_EXPLICIT tmat2x3(tmat3x2<T, P> const & x);
		GLM_FUNC_DECL GLM_EXPLICIT tmat2x3(tmat3x4<T, P> const & x);
		GLM_FUNC_DECL GLM_EXPLICIT tmat2x3(tmat4x2<T, P> const & x);
		GLM_FUNC_DECL GLM_EXPLICIT tmat2x3(tmat4x3<T, P> const & x);

		// -- Accesses --

		typedef length_t length_type;
		GLM_FUNC_DECL static length_type length(){return 2;}

		GLM_FUNC_DECL col_type & operator[](length_type i);
		GLM_FUNC_DECL col_type const & operator[](length_type i) const;

		// -- Unary arithmetic operators --

		GLM_FUNC_DECL tmat2x3<T, P> & operator=(tmat2x3<T, P> const & m) GLM_DEFAULT;

		template <typename U>
		GLM_FUNC_DECL tmat2x3<T, P> & operator=(tmat2x3<U, P> const & m);
		template <typename U>
		GLM_FUNC_DECL tmat2x3<T, P> & operator+=(U s);
		template <typename U>
		GLM_FUNC_DECL tmat2x3<T, P> & operator+=(tmat2x3<U, P> const & m);
		template <typename U>
		GLM_FUNC_DECL tmat2x3<T, P> & operator-=(U s);
		template <typename U>
		GLM_FUNC_DECL tmat2x3<T, P> & operator-=(tmat2x3<U, P> const & m);
		template <typename U>
		GLM_FUNC_DECL tmat2x3<T, P> & operator*=(U s);
		template <typename U>
		GLM_FUNC_DECL tmat2x3<T, P> & operator/=(U s);

		// -- Increment and decrement operators --

		GLM_FUNC_DECL tmat2x3<T, P> & operator++ ();
		GLM_FUNC_DECL tmat2x3<T, P> & operator-- ();
		GLM_FUNC_DECL tmat2x3<T, P> operator++(int);
		GLM_FUNC_DECL tmat2x3<T, P> operator--(int);
=======
		// -- Accesses --

		typedef length_t length_type;
		GLM_FUNC_DECL static GLM_CONSTEXPR length_type length() { return 2; }

		GLM_FUNC_DECL col_type & operator[](length_type i);
		GLM_FUNC_DECL GLM_CONSTEXPR col_type const& operator[](length_type i) const;

		// -- Constructors --

		GLM_FUNC_DECL GLM_CONSTEXPR mat() GLM_DEFAULT;
		template<qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR mat(mat<2, 3, T, P> const& m);

		GLM_FUNC_DECL explicit GLM_CONSTEXPR mat(T scalar);
		GLM_FUNC_DECL GLM_CONSTEXPR mat(
			T x0, T y0, T z0,
			T x1, T y1, T z1);
		GLM_FUNC_DECL GLM_CONSTEXPR mat(
			col_type const& v0,
			col_type const& v1);

		// -- Conversions --

		template<typename X1, typename Y1, typename Z1, typename X2, typename Y2, typename Z2>
		GLM_FUNC_DECL GLM_CONSTEXPR mat(
			X1 x1, Y1 y1, Z1 z1,
			X2 x2, Y2 y2, Z2 z2);

		template<typename U, typename V>
		GLM_FUNC_DECL GLM_CONSTEXPR mat(
			vec<3, U, Q> const& v1,
			vec<3, V, Q> const& v2);

		// -- Matrix conversions --

		template<typename U, qualifier P>
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<2, 3, U, P> const& m);

		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<2, 2, T, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<3, 3, T, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<4, 4, T, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<2, 4, T, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<3, 2, T, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<3, 4, T, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<4, 2, T, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<4, 3, T, Q> const& x);

		// -- Unary arithmetic operators --

		template<typename U>
		GLM_FUNC_DECL mat<2, 3, T, Q> & operator=(mat<2, 3, U, Q> const& m);
		template<typename U>
		GLM_FUNC_DECL mat<2, 3, T, Q> & operator+=(U s);
		template<typename U>
		GLM_FUNC_DECL mat<2, 3, T, Q> & operator+=(mat<2, 3, U, Q> const& m);
		template<typename U>
		GLM_FUNC_DECL mat<2, 3, T, Q> & operator-=(U s);
		template<typename U>
		GLM_FUNC_DECL mat<2, 3, T, Q> & operator-=(mat<2, 3, U, Q> const& m);
		template<typename U>
		GLM_FUNC_DECL mat<2, 3, T, Q> & operator*=(U s);
		template<typename U>
		GLM_FUNC_DECL mat<2, 3, T, Q> & operator/=(U s);

		// -- Increment and decrement operators --

		GLM_FUNC_DECL mat<2, 3, T, Q> & operator++ ();
		GLM_FUNC_DECL mat<2, 3, T, Q> & operator-- ();
		GLM_FUNC_DECL mat<2, 3, T, Q> operator++(int);
		GLM_FUNC_DECL mat<2, 3, T, Q> operator--(int);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	};

	// -- Unary operators --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_DECL tmat2x3<T, P> operator+(tmat2x3<T, P> const & m);

	template <typename T, precision P>
	GLM_FUNC_DECL tmat2x3<T, P> operator-(tmat2x3<T, P> const & m);

	// -- Binary operators --

	template <typename T, precision P>
	GLM_FUNC_DECL tmat2x3<T, P> operator+(tmat2x3<T, P> const & m, T scalar);

	template <typename T, precision P>
	GLM_FUNC_DECL tmat2x3<T, P> operator+(tmat2x3<T, P> const & m1, tmat2x3<T, P> const & m2);

	template <typename T, precision P>
	GLM_FUNC_DECL tmat2x3<T, P> operator-(tmat2x3<T, P> const & m, T scalar);

	template <typename T, precision P>
	GLM_FUNC_DECL tmat2x3<T, P> operator-(tmat2x3<T, P> const & m1, tmat2x3<T, P> const & m2);

	template <typename T, precision P>
	GLM_FUNC_DECL tmat2x3<T, P> operator*(tmat2x3<T, P> const & m, T scalar);

	template <typename T, precision P>
	GLM_FUNC_DECL tmat2x3<T, P> operator*(T scalar, tmat2x3<T, P> const & m);

	template <typename T, precision P>
	GLM_FUNC_DECL typename tmat2x3<T, P>::col_type operator*(tmat2x3<T, P> const & m, typename tmat2x3<T, P>::row_type const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL typename tmat2x3<T, P>::row_type operator*(typename tmat2x3<T, P>::col_type const & v, tmat2x3<T, P> const & m);

	template <typename T, precision P>
	GLM_FUNC_DECL tmat2x3<T, P> operator*(tmat2x3<T, P> const & m1, tmat2x2<T, P> const & m2);

	template <typename T, precision P>
	GLM_FUNC_DECL tmat3x3<T, P> operator*(tmat2x3<T, P> const & m1, tmat3x2<T, P> const & m2);

	template <typename T, precision P>
	GLM_FUNC_DECL tmat4x3<T, P> operator*(tmat2x3<T, P> const & m1, tmat4x2<T, P> const & m2);

	template <typename T, precision P>
	GLM_FUNC_DECL tmat2x3<T, P> operator/(tmat2x3<T, P> const & m, T scalar);

	template <typename T, precision P>
	GLM_FUNC_DECL tmat2x3<T, P> operator/(T scalar, tmat2x3<T, P> const & m);

	// -- Boolean operators --

	template <typename T, precision P>
	GLM_FUNC_DECL bool operator==(tmat2x3<T, P> const & m1, tmat2x3<T, P> const & m2);

	template <typename T, precision P>
	GLM_FUNC_DECL bool operator!=(tmat2x3<T, P> const & m1, tmat2x3<T, P> const & m2);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<2, 3, T, Q> operator+(mat<2, 3, T, Q> const& m);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<2, 3, T, Q> operator-(mat<2, 3, T, Q> const& m);

	// -- Binary operators --

	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<2, 3, T, Q> operator+(mat<2, 3, T, Q> const& m, T scalar);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<2, 3, T, Q> operator+(mat<2, 3, T, Q> const& m1, mat<2, 3, T, Q> const& m2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<2, 3, T, Q> operator-(mat<2, 3, T, Q> const& m, T scalar);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<2, 3, T, Q> operator-(mat<2, 3, T, Q> const& m1, mat<2, 3, T, Q> const& m2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<2, 3, T, Q> operator*(mat<2, 3, T, Q> const& m, T scalar);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<2, 3, T, Q> operator*(T scalar, mat<2, 3, T, Q> const& m);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL typename mat<2, 3, T, Q>::col_type operator*(mat<2, 3, T, Q> const& m, typename mat<2, 3, T, Q>::row_type const& v);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL typename mat<2, 3, T, Q>::row_type operator*(typename mat<2, 3, T, Q>::col_type const& v, mat<2, 3, T, Q> const& m);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<2, 3, T, Q> operator*(mat<2, 3, T, Q> const& m1, mat<2, 2, T, Q> const& m2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<3, 3, T, Q> operator*(mat<2, 3, T, Q> const& m1, mat<3, 2, T, Q> const& m2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<4, 3, T, Q> operator*(mat<2, 3, T, Q> const& m1, mat<4, 2, T, Q> const& m2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<2, 3, T, Q> operator/(mat<2, 3, T, Q> const& m, T scalar);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<2, 3, T, Q> operator/(T scalar, mat<2, 3, T, Q> const& m);

	// -- Boolean operators --

	template<typename T, qualifier Q>
	GLM_FUNC_DECL bool operator==(mat<2, 3, T, Q> const& m1, mat<2, 3, T, Q> const& m2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL bool operator!=(mat<2, 3, T, Q> const& m1, mat<2, 3, T, Q> const& m2);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
}//namespace glm

#ifndef GLM_EXTERNAL_TEMPLATE
#include "type_mat2x3.inl"
#endif
