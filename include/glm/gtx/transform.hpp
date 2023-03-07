/// @ref gtx_transform
/// @file glm/gtx/transform.hpp
///
/// @see core (dependence)
/// @see gtc_matrix_transform (dependence)
/// @see gtx_transform
/// @see gtx_transform2
///
/// @defgroup gtx_transform GLM_GTX_transform
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Add transformation matrices
///
/// <glm/gtx/transform.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/transform.hpp> to use the features of this extension.
///
/// Add transformation matrices
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependency:
#include "../glm.hpp"
#include "../gtc/matrix_transform.hpp"

<<<<<<< HEAD
#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_transform extension included")
=======
#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_transform is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_transform extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm
{
	/// @addtogroup gtx_transform
	/// @{

	/// Transforms a matrix with a translation 4 * 4 matrix created from 3 scalars.
	/// @see gtc_matrix_transform
	/// @see gtx_transform
<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_DECL tmat4x4<T, P> translate(
		tvec3<T, P> const & v);

	/// Builds a rotation 4 * 4 matrix created from an axis of 3 scalars and an angle expressed in radians. 
	/// @see gtc_matrix_transform
	/// @see gtx_transform
	template <typename T, precision P>
	GLM_FUNC_DECL tmat4x4<T, P> rotate(
		T angle, 
		tvec3<T, P> const & v);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, T, Q> translate(
		vec<3, T, Q> const& v);

	/// Builds a rotation 4 * 4 matrix created from an axis of 3 scalars and an angle expressed in radians.
	/// @see gtc_matrix_transform
	/// @see gtx_transform
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, T, Q> rotate(
		T angle,
		vec<3, T, Q> const& v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Transforms a matrix with a scale 4 * 4 matrix created from a vector of 3 components.
	/// @see gtc_matrix_transform
	/// @see gtx_transform
<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_DECL tmat4x4<T, P> scale(
		tvec3<T, P> const & v);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, T, Q> scale(
		vec<3, T, Q> const& v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// @}
}// namespace glm

#include "transform.inl"
