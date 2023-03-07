/// @ref gtx_vector_angle
/// @file glm/gtx/vector_angle.hpp
///
/// @see core (dependence)
/// @see gtx_quaternion (dependence)
/// @see gtx_epsilon (dependence)
///
/// @defgroup gtx_vector_angle GLM_GTX_vector_angle
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Compute angle between vectors
///
/// <glm/gtx/vector_angle.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/vector_angle.hpp> to use the features of this extension.
///
/// Compute angle between vectors
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependency:
#include "../glm.hpp"
#include "../gtc/epsilon.hpp"
#include "../gtx/quaternion.hpp"
#include "../gtx/rotate_vector.hpp"

<<<<<<< HEAD
#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_vector_angle extension included")
=======
#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_vector_angle is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_vector_angle extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm
{
	/// @addtogroup gtx_vector_angle
	/// @{

	//! Returns the absolute angle between two vectors.
	//! Parameters need to be normalized.
	/// @see gtx_vector_angle extension.
<<<<<<< HEAD
	template <typename vecType>
	GLM_FUNC_DECL typename vecType::value_type angle(
		vecType const & x, 
		vecType const & y);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_DECL T angle(vec<L, T, Q> const& x, vec<L, T, Q> const& y);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	//! Returns the oriented angle between two 2d vectors.
	//! Parameters need to be normalized.
	/// @see gtx_vector_angle extension.
<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_DECL T orientedAngle(
		tvec2<T, P> const & x,
		tvec2<T, P> const & y);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL T orientedAngle(vec<2, T, Q> const& x, vec<2, T, Q> const& y);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	//! Returns the oriented angle between two 3d vectors based from a reference axis.
	//! Parameters need to be normalized.
	/// @see gtx_vector_angle extension.
<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_DECL T orientedAngle(
		tvec3<T, P> const & x,
		tvec3<T, P> const & y,
		tvec3<T, P> const & ref);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL T orientedAngle(vec<3, T, Q> const& x, vec<3, T, Q> const& y, vec<3, T, Q> const& ref);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// @}
}// namespace glm

#include "vector_angle.inl"
