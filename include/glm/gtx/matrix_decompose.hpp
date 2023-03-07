/// @ref gtx_matrix_decompose
/// @file glm/gtx/matrix_decompose.hpp
///
/// @see core (dependence)
///
/// @defgroup gtx_matrix_decompose GLM_GTX_matrix_decompose
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Decomposes a model matrix to translations, rotation and scale components
///
/// <glm/gtx/matrix_decompose.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/matrix_decompose.hpp> to use the features of this extension.
///
/// Decomposes a model matrix to translations, rotation and scale components
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependencies
#include "../mat4x4.hpp"
#include "../vec3.hpp"
#include "../vec4.hpp"
#include "../geometric.hpp"
#include "../gtc/quaternion.hpp"
#include "../gtc/matrix_transform.hpp"

<<<<<<< HEAD
#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_matrix_decompose extension included")
=======
#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_matrix_decompose is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_matrix_decompose extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm
{
	/// @addtogroup gtx_matrix_decompose
	/// @{

<<<<<<< HEAD
	/// Decomposes a model matrix to translations, rotation and scale components 
	/// @see gtx_matrix_decompose
	template <typename T, precision P>
	GLM_FUNC_DECL bool decompose(
		tmat4x4<T, P> const & modelMatrix,
		tvec3<T, P> & scale, tquat<T, P> & orientation, tvec3<T, P> & translation, tvec3<T, P> & skew, tvec4<T, P> & perspective);
=======
	/// Decomposes a model matrix to translations, rotation and scale components
	/// @see gtx_matrix_decompose
	template<typename T, qualifier Q>
	GLM_FUNC_DECL bool decompose(
		mat<4, 4, T, Q> const& modelMatrix,
		vec<3, T, Q> & scale, qua<T, Q> & orientation, vec<3, T, Q> & translation, vec<3, T, Q> & skew, vec<4, T, Q> & perspective);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// @}
}//namespace glm

#include "matrix_decompose.inl"
