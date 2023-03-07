/// @ref gtx_transform2
/// @file glm/gtx/transform2.hpp
///
/// @see core (dependence)
/// @see gtx_transform (dependence)
///
/// @defgroup gtx_transform2 GLM_GTX_transform2
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Add extra transformation matrices
///
/// <glm/gtx/transform2.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/transform2.hpp> to use the features of this extension.
///
/// Add extra transformation matrices
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependency:
#include "../glm.hpp"
#include "../gtx/transform.hpp"

<<<<<<< HEAD
#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_transform2 extension included")
=======
#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_transform2 is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_transform2 extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm
{
	/// @addtogroup gtx_transform2
	/// @{

	//! Transforms a matrix with a shearing on X axis.
	//! From GLM_GTX_transform2 extension.
<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_DECL tmat3x3<T, P> shearX2D(
		tmat3x3<T, P> const & m, 
		T y);

	//! Transforms a matrix with a shearing on Y axis.
	//! From GLM_GTX_transform2 extension.
	template <typename T, precision P> 
	GLM_FUNC_DECL tmat3x3<T, P> shearY2D(
		tmat3x3<T, P> const & m, 
		T x);

	//! Transforms a matrix with a shearing on X axis
	//! From GLM_GTX_transform2 extension.
	template <typename T, precision P> 
	GLM_FUNC_DECL tmat4x4<T, P> shearX3D(
		const tmat4x4<T, P> & m,
		T y, 
		T z);

	//! Transforms a matrix with a shearing on Y axis.
	//! From GLM_GTX_transform2 extension.
	template <typename T, precision P> 
	GLM_FUNC_DECL tmat4x4<T, P> shearY3D(
		const tmat4x4<T, P> & m, 
		T x, 
		T z);

	//! Transforms a matrix with a shearing on Z axis. 
	//! From GLM_GTX_transform2 extension.
	template <typename T, precision P> 
	GLM_FUNC_DECL tmat4x4<T, P> shearZ3D(
		const tmat4x4<T, P> & m, 
		T x, 
		T y);

	//template <typename T> GLM_FUNC_QUALIFIER tmat4x4<T, P> shear(const tmat4x4<T, P> & m, shearPlane, planePoint, angle)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<3, 3, T, Q> shearX2D(mat<3, 3, T, Q> const& m, T y);

	//! Transforms a matrix with a shearing on Y axis.
	//! From GLM_GTX_transform2 extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<3, 3, T, Q> shearY2D(mat<3, 3, T, Q> const& m, T x);

	//! Transforms a matrix with a shearing on X axis
	//! From GLM_GTX_transform2 extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, T, Q> shearX3D(mat<4, 4, T, Q> const& m, T y, T z);

	//! Transforms a matrix with a shearing on Y axis.
	//! From GLM_GTX_transform2 extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, T, Q> shearY3D(mat<4, 4, T, Q> const& m, T x, T z);

	//! Transforms a matrix with a shearing on Z axis.
	//! From GLM_GTX_transform2 extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, T, Q> shearZ3D(mat<4, 4, T, Q> const& m, T x, T y);

	//template<typename T> GLM_FUNC_QUALIFIER mat<4, 4, T, Q> shear(const mat<4, 4, T, Q> & m, shearPlane, planePoint, angle)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	// Identity + tan(angle) * cross(Normal, OnPlaneVector)     0
	// - dot(PointOnPlane, normal) * OnPlaneVector              1

	// Reflect functions seem to don't work
<<<<<<< HEAD
	//template <typename T> tmat3x3<T, P> reflect2D(const tmat3x3<T, P> & m, const tvec3<T, P>& normal){return reflect2DGTX(m, normal);}									//!< \brief Build a reflection matrix (from GLM_GTX_transform2 extension)
	//template <typename T> tmat4x4<T, P> reflect3D(const tmat4x4<T, P> & m, const tvec3<T, P>& normal){return reflect3DGTX(m, normal);}									//!< \brief Build a reflection matrix (from GLM_GTX_transform2 extension)
		
	//! Build planar projection matrix along normal axis.
	//! From GLM_GTX_transform2 extension.
	template <typename T, precision P> 
	GLM_FUNC_DECL tmat3x3<T, P> proj2D(
		const tmat3x3<T, P> & m, 
		const tvec3<T, P>& normal);

	//! Build planar projection matrix along normal axis.
	//! From GLM_GTX_transform2 extension.
	template <typename T, precision P> 
	GLM_FUNC_DECL tmat4x4<T, P> proj3D(
		const tmat4x4<T, P> & m, 
		const tvec3<T, P>& normal);

	//! Build a scale bias matrix. 
	//! From GLM_GTX_transform2 extension.
	template <typename valType, precision P> 
	GLM_FUNC_DECL tmat4x4<valType, P> scaleBias(
		valType scale, 
		valType bias);

	//! Build a scale bias matrix.
	//! From GLM_GTX_transform2 extension.
	template <typename valType, precision P> 
	GLM_FUNC_DECL tmat4x4<valType, P> scaleBias(
		tmat4x4<valType, P> const & m, 
		valType scale, 
		valType bias);
=======
	//template<typename T> mat<3, 3, T, Q> reflect2D(const mat<3, 3, T, Q> & m, const vec<3, T, Q>& normal){return reflect2DGTX(m, normal);}									//!< \brief Build a reflection matrix (from GLM_GTX_transform2 extension)
	//template<typename T> mat<4, 4, T, Q> reflect3D(const mat<4, 4, T, Q> & m, const vec<3, T, Q>& normal){return reflect3DGTX(m, normal);}									//!< \brief Build a reflection matrix (from GLM_GTX_transform2 extension)

	//! Build planar projection matrix along normal axis.
	//! From GLM_GTX_transform2 extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<3, 3, T, Q> proj2D(mat<3, 3, T, Q> const& m, vec<3, T, Q> const& normal);

	//! Build planar projection matrix along normal axis.
	//! From GLM_GTX_transform2 extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, T, Q> proj3D(mat<4, 4, T, Q> const & m, vec<3, T, Q> const& normal);

	//! Build a scale bias matrix.
	//! From GLM_GTX_transform2 extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, T, Q> scaleBias(T scale, T bias);

	//! Build a scale bias matrix.
	//! From GLM_GTX_transform2 extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, T, Q> scaleBias(mat<4, 4, T, Q> const& m, T scale, T bias);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// @}
}// namespace glm

#include "transform2.inl"
