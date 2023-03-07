/// @ref gtx_matrix_cross_product
/// @file glm/gtx/matrix_cross_product.hpp
///
/// @see core (dependence)
/// @see gtx_extented_min_max (dependence)
///
/// @defgroup gtx_matrix_cross_product GLM_GTX_matrix_cross_product
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Build cross product matrices
///
/// <glm/gtx/matrix_cross_product.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/matrix_cross_product.hpp> to use the features of this extension.
///
/// Build cross product matrices
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependency:
#include "../glm.hpp"

<<<<<<< HEAD
#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_matrix_cross_product extension included")
=======
#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_matrix_cross_product is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_matrix_cross_product extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm
{
	/// @addtogroup gtx_matrix_cross_product
	/// @{

	//! Build a cross product matrix.
	//! From GLM_GTX_matrix_cross_product extension.
<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_DECL tmat3x3<T, P> matrixCross3(
		tvec3<T, P> const & x);
		
	//! Build a cross product matrix.
	//! From GLM_GTX_matrix_cross_product extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tmat4x4<T, P> matrixCross4(
		tvec3<T, P> const & x);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<3, 3, T, Q> matrixCross3(
		vec<3, T, Q> const& x);

	//! Build a cross product matrix.
	//! From GLM_GTX_matrix_cross_product extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, T, Q> matrixCross4(
		vec<3, T, Q> const& x);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// @}
}//namespace glm

#include "matrix_cross_product.inl"
