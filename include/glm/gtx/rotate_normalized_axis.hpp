/// @ref gtx_rotate_normalized_axis
/// @file glm/gtx/rotate_normalized_axis.hpp
///
/// @see core (dependence)
/// @see gtc_matrix_transform
/// @see gtc_quaternion
///
/// @defgroup gtx_rotate_normalized_axis GLM_GTX_rotate_normalized_axis
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Quaternions and matrices rotations around normalized axis.
///
/// <glm/gtx/rotate_normalized_axis.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/rotate_normalized_axis.hpp> to use the features of this extension.
///
/// Quaternions and matrices rotations around normalized axis.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependency:
#include "../glm.hpp"
#include "../gtc/epsilon.hpp"
#include "../gtc/quaternion.hpp"

<<<<<<< HEAD
#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_rotate_normalized_axis extension included")
=======
#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_rotate_normalized_axis is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_rotate_normalized_axis extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm
{
	/// @addtogroup gtx_rotate_normalized_axis
	/// @{

<<<<<<< HEAD
	/// Builds a rotation 4 * 4 matrix created from a normalized axis and an angle. 
	/// 
	/// @param m Input matrix multiplied by this rotation matrix.
	/// @param angle Rotation angle expressed in radians if GLM_FORCE_RADIANS is define or degrees otherwise.
	/// @param axis Rotation axis, must be normalized.
	/// @tparam T Value type used to build the matrix. Currently supported: half (not recommanded), float or double.
	/// 
	/// @see gtx_rotate_normalized_axis
	/// @see - rotate(T angle, T x, T y, T z) 
	/// @see - rotate(tmat4x4<T, P> const & m, T angle, T x, T y, T z) 
	/// @see - rotate(T angle, tvec3<T, P> const & v) 
	template <typename T, precision P>
	GLM_FUNC_DECL tmat4x4<T, P> rotateNormalizedAxis(
		tmat4x4<T, P> const & m,
		T const & angle,
		tvec3<T, P> const & axis);

	/// Rotates a quaternion from a vector of 3 components normalized axis and an angle.
	/// 
	/// @param q Source orientation
	/// @param angle Angle expressed in radians if GLM_FORCE_RADIANS is define or degrees otherwise.
	/// @param axis Normalized axis of the rotation, must be normalized.
	/// 
	/// @see gtx_rotate_normalized_axis
	template <typename T, precision P>
	GLM_FUNC_DECL tquat<T, P> rotateNormalizedAxis(
		tquat<T, P> const & q,
		T const & angle,
		tvec3<T, P> const & axis);
=======
	/// Builds a rotation 4 * 4 matrix created from a normalized axis and an angle.
	///
	/// @param m Input matrix multiplied by this rotation matrix.
	/// @param angle Rotation angle expressed in radians.
	/// @param axis Rotation axis, must be normalized.
	/// @tparam T Value type used to build the matrix. Currently supported: half (not recommended), float or double.
	///
	/// @see gtx_rotate_normalized_axis
	/// @see - rotate(T angle, T x, T y, T z)
	/// @see - rotate(mat<4, 4, T, Q> const& m, T angle, T x, T y, T z)
	/// @see - rotate(T angle, vec<3, T, Q> const& v)
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, T, Q> rotateNormalizedAxis(
		mat<4, 4, T, Q> const& m,
		T const& angle,
		vec<3, T, Q> const& axis);

	/// Rotates a quaternion from a vector of 3 components normalized axis and an angle.
	///
	/// @param q Source orientation
	/// @param angle Angle expressed in radians.
	/// @param axis Normalized axis of the rotation, must be normalized.
	///
	/// @see gtx_rotate_normalized_axis
	template<typename T, qualifier Q>
	GLM_FUNC_DECL qua<T, Q> rotateNormalizedAxis(
		qua<T, Q> const& q,
		T const& angle,
		vec<3, T, Q> const& axis);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// @}
}//namespace glm

#include "rotate_normalized_axis.inl"
