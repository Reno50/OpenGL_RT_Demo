/// @ref gtx_quaternion
/// @file glm/gtx/quaternion.hpp
///
/// @see core (dependence)
/// @see gtx_extented_min_max (dependence)
///
/// @defgroup gtx_quaternion GLM_GTX_quaternion
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Extented quaternion types and functions
///
/// <glm/gtx/quaternion.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/quaternion.hpp> to use the features of this extension.
///
/// Extented quaternion types and functions
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependency:
#include "../glm.hpp"
#include "../gtc/constants.hpp"
#include "../gtc/quaternion.hpp"
<<<<<<< HEAD
#include "../gtx/norm.hpp"

#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_quaternion extension included")
=======
#include "../ext/quaternion_exponential.hpp"
#include "../gtx/norm.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_quaternion is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_quaternion extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm
{
	/// @addtogroup gtx_quaternion
	/// @{

<<<<<<< HEAD
	/// Compute a cross product between a quaternion and a vector.
	///
	/// @see gtx_quaternion
	template<typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> cross(
		tquat<T, P> const & q,
		tvec3<T, P> const & v);
=======
	/// Create an identity quaternion.
	///
	/// @see gtx_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR qua<T, Q> quat_identity();

	/// Compute a cross product between a quaternion and a vector.
	///
	/// @see gtx_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<3, T, Q> cross(
		qua<T, Q> const& q,
		vec<3, T, Q> const& v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	//! Compute a cross product between a vector and a quaternion.
	///
	/// @see gtx_quaternion
<<<<<<< HEAD
	template<typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> cross(
		tvec3<T, P> const & v,
		tquat<T, P> const & q);

	//! Compute a point on a path according squad equation. 
	//! q1 and q2 are control points; s1 and s2 are intermediate control points.
	///
	/// @see gtx_quaternion
	template<typename T, precision P>
	GLM_FUNC_DECL tquat<T, P> squad(
		tquat<T, P> const & q1,
		tquat<T, P> const & q2,
		tquat<T, P> const & s1,
		tquat<T, P> const & s2,
		T const & h);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<3, T, Q> cross(
		vec<3, T, Q> const& v,
		qua<T, Q> const& q);

	//! Compute a point on a path according squad equation.
	//! q1 and q2 are control points; s1 and s2 are intermediate control points.
	///
	/// @see gtx_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL qua<T, Q> squad(
		qua<T, Q> const& q1,
		qua<T, Q> const& q2,
		qua<T, Q> const& s1,
		qua<T, Q> const& s2,
		T const& h);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	//! Returns an intermediate control point for squad interpolation.
	///
	/// @see gtx_quaternion
<<<<<<< HEAD
	template<typename T, precision P>
	GLM_FUNC_DECL tquat<T, P> intermediate(
		tquat<T, P> const & prev,
		tquat<T, P> const & curr,
		tquat<T, P> const & next);

	//! Returns a exp of a quaternion.
	///
	/// @see gtx_quaternion
	template<typename T, precision P>
	GLM_FUNC_DECL tquat<T, P> exp(
		tquat<T, P> const & q);

	//! Returns a log of a quaternion.
	///
	/// @see gtx_quaternion
	template<typename T, precision P>
	GLM_FUNC_DECL tquat<T, P> log(
		tquat<T, P> const & q);

	/// Returns x raised to the y power.
	///
	/// @see gtx_quaternion
	template<typename T, precision P>
	GLM_FUNC_DECL tquat<T, P> pow(
		tquat<T, P> const & x,
		T const & y);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL qua<T, Q> intermediate(
		qua<T, Q> const& prev,
		qua<T, Q> const& curr,
		qua<T, Q> const& next);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	//! Returns quarternion square root.
	///
	/// @see gtx_quaternion
<<<<<<< HEAD
	//template<typename T, precision P>
	//tquat<T, P> sqrt(
	//	tquat<T, P> const & q);
=======
	//template<typename T, qualifier Q>
	//qua<T, Q> sqrt(
	//	qua<T, Q> const& q);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	//! Rotates a 3 components vector by a quaternion.
	///
	/// @see gtx_quaternion
<<<<<<< HEAD
	template<typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> rotate(
		tquat<T, P> const & q,
		tvec3<T, P> const & v);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<3, T, Q> rotate(
		qua<T, Q> const& q,
		vec<3, T, Q> const& v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Rotates a 4 components vector by a quaternion.
	///
	/// @see gtx_quaternion
<<<<<<< HEAD
	template<typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> rotate(
		tquat<T, P> const & q,
		tvec4<T, P> const & v);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<4, T, Q> rotate(
		qua<T, Q> const& q,
		vec<4, T, Q> const& v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Extract the real component of a quaternion.
	///
	/// @see gtx_quaternion
<<<<<<< HEAD
	template<typename T, precision P>
	GLM_FUNC_DECL T extractRealComponent(
		tquat<T, P> const & q);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL T extractRealComponent(
		qua<T, Q> const& q);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Converts a quaternion to a 3 * 3 matrix.
	///
	/// @see gtx_quaternion
<<<<<<< HEAD
	template<typename T, precision P>
	GLM_FUNC_DECL tmat3x3<T, P> toMat3(
		tquat<T, P> const & x){return mat3_cast(x);}
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<3, 3, T, Q> toMat3(
		qua<T, Q> const& x){return mat3_cast(x);}
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Converts a quaternion to a 4 * 4 matrix.
	///
	/// @see gtx_quaternion
<<<<<<< HEAD
	template<typename T, precision P>
	GLM_FUNC_DECL tmat4x4<T, P> toMat4(
		tquat<T, P> const & x){return mat4_cast(x);}
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, T, Q> toMat4(
		qua<T, Q> const& x){return mat4_cast(x);}
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Converts a 3 * 3 matrix to a quaternion.
	///
	/// @see gtx_quaternion
<<<<<<< HEAD
	template<typename T, precision P>
	GLM_FUNC_DECL tquat<T, P> toQuat(
		tmat3x3<T, P> const & x){return quat_cast(x);}
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL qua<T, Q> toQuat(
		mat<3, 3, T, Q> const& x){return quat_cast(x);}
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Converts a 4 * 4 matrix to a quaternion.
	///
	/// @see gtx_quaternion
<<<<<<< HEAD
	template<typename T, precision P>
	GLM_FUNC_DECL tquat<T, P> toQuat(
		tmat4x4<T, P> const & x){return quat_cast(x);}
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL qua<T, Q> toQuat(
		mat<4, 4, T, Q> const& x){return quat_cast(x);}
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Quaternion interpolation using the rotation short path.
	///
	/// @see gtx_quaternion
<<<<<<< HEAD
	template<typename T, precision P>
	GLM_FUNC_DECL tquat<T, P> shortMix(
		tquat<T, P> const & x,
		tquat<T, P> const & y,
		T const & a);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL qua<T, Q> shortMix(
		qua<T, Q> const& x,
		qua<T, Q> const& y,
		T const& a);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Quaternion normalized linear interpolation.
	///
	/// @see gtx_quaternion
<<<<<<< HEAD
	template<typename T, precision P>
	GLM_FUNC_DECL tquat<T, P> fastMix(
		tquat<T, P> const & x,
		tquat<T, P> const & y,
		T const & a);

	/// Compute the rotation between two vectors.
	/// param orig vector, needs to be normalized
	/// param dest vector, needs to be normalized
	///
	/// @see gtx_quaternion
	template<typename T, precision P>
	GLM_FUNC_DECL tquat<T, P> rotation(
		tvec3<T, P> const & orig, 
		tvec3<T, P> const & dest);

	/// Returns the squared length of x.
	/// 
	/// @see gtx_quaternion
	template<typename T, precision P>
	GLM_FUNC_DECL T length2(tquat<T, P> const & q);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL qua<T, Q> fastMix(
		qua<T, Q> const& x,
		qua<T, Q> const& y,
		T const& a);

	/// Compute the rotation between two vectors.
	/// @param orig vector, needs to be normalized
	/// @param dest vector, needs to be normalized
	///
	/// @see gtx_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL qua<T, Q> rotation(
		vec<3, T, Q> const& orig,
		vec<3, T, Q> const& dest);

	/// Returns the squared length of x.
	///
	/// @see gtx_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR T length2(qua<T, Q> const& q);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// @}
}//namespace glm

#include "quaternion.inl"
