/// @ref gtx_matrix_major_storage
/// @file glm/gtx/matrix_major_storage.hpp
///
/// @see core (dependence)
/// @see gtx_extented_min_max (dependence)
///
/// @defgroup gtx_matrix_major_storage GLM_GTX_matrix_major_storage
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Build matrices with specific matrix order, row or column
///
/// <glm/gtx/matrix_major_storage.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/matrix_major_storage.hpp> to use the features of this extension.
///
/// Build matrices with specific matrix order, row or column
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependency:
#include "../glm.hpp"

<<<<<<< HEAD
#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_matrix_major_storage extension included")
=======
#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_matrix_major_storage is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_matrix_major_storage extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm
{
	/// @addtogroup gtx_matrix_major_storage
	/// @{

	//! Build a row major matrix from row vectors.
	//! From GLM_GTX_matrix_major_storage extension.
<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_DECL tmat2x2<T, P> rowMajor2(
		tvec2<T, P> const & v1, 
		tvec2<T, P> const & v2);
		
	//! Build a row major matrix from other matrix.
	//! From GLM_GTX_matrix_major_storage extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tmat2x2<T, P> rowMajor2(
		tmat2x2<T, P> const & m);

	//! Build a row major matrix from row vectors.
	//! From GLM_GTX_matrix_major_storage extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tmat3x3<T, P> rowMajor3(
		tvec3<T, P> const & v1, 
		tvec3<T, P> const & v2, 
		tvec3<T, P> const & v3);

	//! Build a row major matrix from other matrix.
	//! From GLM_GTX_matrix_major_storage extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tmat3x3<T, P> rowMajor3(
		tmat3x3<T, P> const & m);

	//! Build a row major matrix from row vectors.
	//! From GLM_GTX_matrix_major_storage extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tmat4x4<T, P> rowMajor4(
		tvec4<T, P> const & v1, 
		tvec4<T, P> const & v2,
		tvec4<T, P> const & v3, 
		tvec4<T, P> const & v4);

	//! Build a row major matrix from other matrix.
	//! From GLM_GTX_matrix_major_storage extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tmat4x4<T, P> rowMajor4(
		tmat4x4<T, P> const & m);

	//! Build a column major matrix from column vectors.
	//! From GLM_GTX_matrix_major_storage extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tmat2x2<T, P> colMajor2(
		tvec2<T, P> const & v1, 
		tvec2<T, P> const & v2);
		
	//! Build a column major matrix from other matrix.
	//! From GLM_GTX_matrix_major_storage extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tmat2x2<T, P> colMajor2(
		tmat2x2<T, P> const & m);

	//! Build a column major matrix from column vectors.
	//! From GLM_GTX_matrix_major_storage extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tmat3x3<T, P> colMajor3(
		tvec3<T, P> const & v1, 
		tvec3<T, P> const & v2, 
		tvec3<T, P> const & v3);
		
	//! Build a column major matrix from other matrix.
	//! From GLM_GTX_matrix_major_storage extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tmat3x3<T, P> colMajor3(
		tmat3x3<T, P> const & m);
		
	//! Build a column major matrix from column vectors.
	//! From GLM_GTX_matrix_major_storage extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tmat4x4<T, P> colMajor4(
		tvec4<T, P> const & v1, 
		tvec4<T, P> const & v2, 
		tvec4<T, P> const & v3, 
		tvec4<T, P> const & v4);
				
	//! Build a column major matrix from other matrix.
	//! From GLM_GTX_matrix_major_storage extension.
	template <typename T, precision P> 
	GLM_FUNC_DECL tmat4x4<T, P> colMajor4(
		tmat4x4<T, P> const & m);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<2, 2, T, Q> rowMajor2(
		vec<2, T, Q> const& v1,
		vec<2, T, Q> const& v2);

	//! Build a row major matrix from other matrix.
	//! From GLM_GTX_matrix_major_storage extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<2, 2, T, Q> rowMajor2(
		mat<2, 2, T, Q> const& m);

	//! Build a row major matrix from row vectors.
	//! From GLM_GTX_matrix_major_storage extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<3, 3, T, Q> rowMajor3(
		vec<3, T, Q> const& v1,
		vec<3, T, Q> const& v2,
		vec<3, T, Q> const& v3);

	//! Build a row major matrix from other matrix.
	//! From GLM_GTX_matrix_major_storage extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<3, 3, T, Q> rowMajor3(
		mat<3, 3, T, Q> const& m);

	//! Build a row major matrix from row vectors.
	//! From GLM_GTX_matrix_major_storage extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, T, Q> rowMajor4(
		vec<4, T, Q> const& v1,
		vec<4, T, Q> const& v2,
		vec<4, T, Q> const& v3,
		vec<4, T, Q> const& v4);

	//! Build a row major matrix from other matrix.
	//! From GLM_GTX_matrix_major_storage extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, T, Q> rowMajor4(
		mat<4, 4, T, Q> const& m);

	//! Build a column major matrix from column vectors.
	//! From GLM_GTX_matrix_major_storage extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<2, 2, T, Q> colMajor2(
		vec<2, T, Q> const& v1,
		vec<2, T, Q> const& v2);

	//! Build a column major matrix from other matrix.
	//! From GLM_GTX_matrix_major_storage extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<2, 2, T, Q> colMajor2(
		mat<2, 2, T, Q> const& m);

	//! Build a column major matrix from column vectors.
	//! From GLM_GTX_matrix_major_storage extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<3, 3, T, Q> colMajor3(
		vec<3, T, Q> const& v1,
		vec<3, T, Q> const& v2,
		vec<3, T, Q> const& v3);

	//! Build a column major matrix from other matrix.
	//! From GLM_GTX_matrix_major_storage extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<3, 3, T, Q> colMajor3(
		mat<3, 3, T, Q> const& m);

	//! Build a column major matrix from column vectors.
	//! From GLM_GTX_matrix_major_storage extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, T, Q> colMajor4(
		vec<4, T, Q> const& v1,
		vec<4, T, Q> const& v2,
		vec<4, T, Q> const& v3,
		vec<4, T, Q> const& v4);

	//! Build a column major matrix from other matrix.
	//! From GLM_GTX_matrix_major_storage extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, T, Q> colMajor4(
		mat<4, 4, T, Q> const& m);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// @}
}//namespace glm

#include "matrix_major_storage.inl"
