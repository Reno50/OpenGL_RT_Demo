/// @ref gtx_closest_point
/// @file glm/gtx/closest_point.hpp
///
/// @see core (dependence)
///
/// @defgroup gtx_closest_point GLM_GTX_closest_point
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Find the point on a straight line which is the closet of a point.
///
/// <glm/gtx/closest_point.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/closest_point.hpp> to use the features of this extension.
///
/// Find the point on a straight line which is the closet of a point.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependency:
#include "../glm.hpp"

<<<<<<< HEAD
#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_closest_point extension included")
=======
#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_closest_point is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_closest_point extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm
{
	/// @addtogroup gtx_closest_point
	/// @{

<<<<<<< HEAD
	/// Find the point on a straight line which is the closet of a point. 
	/// @see gtx_closest_point
	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> closestPointOnLine(
		tvec3<T, P> const & point,
		tvec3<T, P> const & a, 
		tvec3<T, P> const & b);
	
	/// 2d lines work as well	
	template <typename T, precision P>
	GLM_FUNC_DECL tvec2<T, P> closestPointOnLine(
		tvec2<T, P> const & point,
		tvec2<T, P> const & a, 
		tvec2<T, P> const & b);	
=======
	/// Find the point on a straight line which is the closet of a point.
	/// @see gtx_closest_point
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<3, T, Q> closestPointOnLine(
		vec<3, T, Q> const& point,
		vec<3, T, Q> const& a,
		vec<3, T, Q> const& b);

	/// 2d lines work as well
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<2, T, Q> closestPointOnLine(
		vec<2, T, Q> const& point,
		vec<2, T, Q> const& a,
		vec<2, T, Q> const& b);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// @}
}// namespace glm

#include "closest_point.inl"
