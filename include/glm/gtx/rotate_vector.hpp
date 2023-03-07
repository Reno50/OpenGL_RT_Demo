/// @ref gtx_rotate_vector
/// @file glm/gtx/rotate_vector.hpp
///
/// @see core (dependence)
/// @see gtx_transform (dependence)
///
/// @defgroup gtx_rotate_vector GLM_GTX_rotate_vector
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Function to directly rotate a vector
///
/// <glm/gtx/rotate_vector.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/rotate_vector.hpp> to use the features of this extension.
///
/// Function to directly rotate a vector
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependency:
<<<<<<< HEAD
#include "../glm.hpp"
#include "../gtx/transform.hpp"

#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_rotate_vector extension included")
=======
#include "../gtx/transform.hpp"
#include "../gtc/epsilon.hpp"
#include "../ext/vector_relational.hpp"
#include "../glm.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_rotate_vector is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_rotate_vector extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm
{
	/// @addtogroup gtx_rotate_vector
	/// @{

	/// Returns Spherical interpolation between two vectors
<<<<<<< HEAD
	/// 
	/// @param x A first vector
	/// @param y A second vector
	/// @param a Interpolation factor. The interpolation is defined beyond the range [0, 1].
	/// 
	/// @see gtx_rotate_vector
	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> slerp(
		tvec3<T, P> const & x,
		tvec3<T, P> const & y,
		T const & a);

	//! Rotate a two dimensional vector.
	//! From GLM_GTX_rotate_vector extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tvec2<T, P> rotate(
		tvec2<T, P> const & v,
		T const & angle);
		
	//! Rotate a three dimensional vector around an axis.
	//! From GLM_GTX_rotate_vector extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> rotate(
		tvec3<T, P> const & v,
		T const & angle,
		tvec3<T, P> const & normal);
		
	//! Rotate a four dimensional vector around an axis.
	//! From GLM_GTX_rotate_vector extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> rotate(
		tvec4<T, P> const & v,
		T const & angle,
		tvec3<T, P> const & normal);
		
	//! Rotate a three dimensional vector around the X axis.
	//! From GLM_GTX_rotate_vector extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> rotateX(
		tvec3<T, P> const & v,
		T const & angle);

	//! Rotate a three dimensional vector around the Y axis.
	//! From GLM_GTX_rotate_vector extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> rotateY(
		tvec3<T, P> const & v,
		T const & angle);
		
	//! Rotate a three dimensional vector around the Z axis.
	//! From GLM_GTX_rotate_vector extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> rotateZ(
		tvec3<T, P> const & v,
		T const & angle);
		
	//! Rotate a four dimentionnals vector around the X axis.
	//! From GLM_GTX_rotate_vector extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> rotateX(
		tvec4<T, P> const & v,
		T const & angle);
		
	//! Rotate a four dimensional vector around the X axis.
	//! From GLM_GTX_rotate_vector extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> rotateY(
		tvec4<T, P> const & v,
		T const & angle);
		
	//! Rotate a four dimensional vector around the X axis.
	//! From GLM_GTX_rotate_vector extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> rotateZ(
		tvec4<T, P> const & v,
		T const & angle);
		
	//! Build a rotation matrix from a normal and a up vector.
	//! From GLM_GTX_rotate_vector extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tmat4x4<T, P> orientation(
		tvec3<T, P> const & Normal,
		tvec3<T, P> const & Up);
=======
	///
	/// @param x A first vector
	/// @param y A second vector
	/// @param a Interpolation factor. The interpolation is defined beyond the range [0, 1].
	///
	/// @see gtx_rotate_vector
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<3, T, Q> slerp(
		vec<3, T, Q> const& x,
		vec<3, T, Q> const& y,
		T const& a);

	//! Rotate a two dimensional vector.
	//! From GLM_GTX_rotate_vector extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<2, T, Q> rotate(
		vec<2, T, Q> const& v,
		T const& angle);

	//! Rotate a three dimensional vector around an axis.
	//! From GLM_GTX_rotate_vector extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<3, T, Q> rotate(
		vec<3, T, Q> const& v,
		T const& angle,
		vec<3, T, Q> const& normal);

	//! Rotate a four dimensional vector around an axis.
	//! From GLM_GTX_rotate_vector extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<4, T, Q> rotate(
		vec<4, T, Q> const& v,
		T const& angle,
		vec<3, T, Q> const& normal);

	//! Rotate a three dimensional vector around the X axis.
	//! From GLM_GTX_rotate_vector extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<3, T, Q> rotateX(
		vec<3, T, Q> const& v,
		T const& angle);

	//! Rotate a three dimensional vector around the Y axis.
	//! From GLM_GTX_rotate_vector extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<3, T, Q> rotateY(
		vec<3, T, Q> const& v,
		T const& angle);

	//! Rotate a three dimensional vector around the Z axis.
	//! From GLM_GTX_rotate_vector extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<3, T, Q> rotateZ(
		vec<3, T, Q> const& v,
		T const& angle);

	//! Rotate a four dimensional vector around the X axis.
	//! From GLM_GTX_rotate_vector extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<4, T, Q> rotateX(
		vec<4, T, Q> const& v,
		T const& angle);

	//! Rotate a four dimensional vector around the Y axis.
	//! From GLM_GTX_rotate_vector extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<4, T, Q> rotateY(
		vec<4, T, Q> const& v,
		T const& angle);

	//! Rotate a four dimensional vector around the Z axis.
	//! From GLM_GTX_rotate_vector extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<4, T, Q> rotateZ(
		vec<4, T, Q> const& v,
		T const& angle);

	//! Build a rotation matrix from a normal and a up vector.
	//! From GLM_GTX_rotate_vector extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, T, Q> orientation(
		vec<3, T, Q> const& Normal,
		vec<3, T, Q> const& Up);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// @}
}//namespace glm

#include "rotate_vector.inl"
