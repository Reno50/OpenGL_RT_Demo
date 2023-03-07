/// @ref gtx_matrix_operation
/// @file glm/gtx/matrix_operation.hpp
///
/// @see core (dependence)
///
/// @defgroup gtx_matrix_operation GLM_GTX_matrix_operation
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Build diagonal matrices from vectors.
///
/// <glm/gtx/matrix_operation.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/matrix_operation.hpp> to use the features of this extension.
///
/// Build diagonal matrices from vectors.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependency:
#include "../glm.hpp"

<<<<<<< HEAD
#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_matrix_operation extension included")
=======
#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_matrix_operation is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_matrix_operation extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm
{
	/// @addtogroup gtx_matrix_operation
	/// @{

	//! Build a diagonal matrix.
	//! From GLM_GTX_matrix_operation extension.
<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_DECL tmat2x2<T, P> diagonal2x2(
		tvec2<T, P> const & v);

	//! Build a diagonal matrix.
	//! From GLM_GTX_matrix_operation extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tmat2x3<T, P> diagonal2x3(
		tvec2<T, P> const & v);

	//! Build a diagonal matrix.
	//! From GLM_GTX_matrix_operation extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tmat2x4<T, P> diagonal2x4(
		tvec2<T, P> const & v);

	//! Build a diagonal matrix.
	//! From GLM_GTX_matrix_operation extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tmat3x2<T, P> diagonal3x2(
		tvec2<T, P> const & v);

	//! Build a diagonal matrix.
	//! From GLM_GTX_matrix_operation extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tmat3x3<T, P> diagonal3x3(
		tvec3<T, P> const & v);

	//! Build a diagonal matrix.
	//! From GLM_GTX_matrix_operation extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tmat3x4<T, P> diagonal3x4(
		tvec3<T, P> const & v);

	//! Build a diagonal matrix.
	//! From GLM_GTX_matrix_operation extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tmat4x2<T, P> diagonal4x2(
		tvec2<T, P> const & v);

	//! Build a diagonal matrix.
	//! From GLM_GTX_matrix_operation extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tmat4x3<T, P> diagonal4x3(
		tvec3<T, P> const & v);

	//! Build a diagonal matrix.
	//! From GLM_GTX_matrix_operation extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tmat4x4<T, P> diagonal4x4(
		tvec4<T, P> const & v);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<2, 2, T, Q> diagonal2x2(
		vec<2, T, Q> const& v);

	//! Build a diagonal matrix.
	//! From GLM_GTX_matrix_operation extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<2, 3, T, Q> diagonal2x3(
		vec<2, T, Q> const& v);

	//! Build a diagonal matrix.
	//! From GLM_GTX_matrix_operation extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<2, 4, T, Q> diagonal2x4(
		vec<2, T, Q> const& v);

	//! Build a diagonal matrix.
	//! From GLM_GTX_matrix_operation extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<3, 2, T, Q> diagonal3x2(
		vec<2, T, Q> const& v);

	//! Build a diagonal matrix.
	//! From GLM_GTX_matrix_operation extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<3, 3, T, Q> diagonal3x3(
		vec<3, T, Q> const& v);

	//! Build a diagonal matrix.
	//! From GLM_GTX_matrix_operation extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<3, 4, T, Q> diagonal3x4(
		vec<3, T, Q> const& v);

	//! Build a diagonal matrix.
	//! From GLM_GTX_matrix_operation extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<4, 2, T, Q> diagonal4x2(
		vec<2, T, Q> const& v);

	//! Build a diagonal matrix.
	//! From GLM_GTX_matrix_operation extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<4, 3, T, Q> diagonal4x3(
		vec<3, T, Q> const& v);

	//! Build a diagonal matrix.
	//! From GLM_GTX_matrix_operation extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, T, Q> diagonal4x4(
		vec<4, T, Q> const& v);

	/// Build an adjugate  matrix.
	/// From GLM_GTX_matrix_operation extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<2, 2, T, Q> adjugate(mat<2, 2, T, Q> const& m);

	/// Build an adjugate  matrix.
	/// From GLM_GTX_matrix_operation extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<3, 3, T, Q> adjugate(mat<3, 3, T, Q> const& m);

	/// Build an adjugate  matrix.
	/// From GLM_GTX_matrix_operation extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, T, Q> adjugate(mat<4, 4, T, Q> const& m);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// @}
}//namespace glm

#include "matrix_operation.inl"
