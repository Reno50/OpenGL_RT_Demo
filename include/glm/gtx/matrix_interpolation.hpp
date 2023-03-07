/// @ref gtx_matrix_interpolation
/// @file glm/gtx/matrix_interpolation.hpp
/// @author Ghenadii Ursachi (the.asteroth@gmail.com)
///
/// @see core (dependence)
///
/// @defgroup gtx_matrix_interpolation GLM_GTX_matrix_interpolation
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Allows to directly interpolate two exiciting matrices.
///
/// <glm/gtx/matrix_interpolation.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/matrix_interpolation.hpp> to use the features of this extension.
///
/// Allows to directly interpolate two matrices.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependency:
#include "../glm.hpp"

<<<<<<< HEAD
#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_matrix_interpolation extension included")
=======
#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_matrix_interpolation is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_matrix_interpolation extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm
{
	/// @addtogroup gtx_matrix_interpolation
	/// @{

	/// Get the axis and angle of the rotation from a matrix.
	/// From GLM_GTX_matrix_interpolation extension.
<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_DECL void axisAngle(
		tmat4x4<T, P> const & mat,
		tvec3<T, P> & axis,
		T & angle);

	/// Build a matrix from axis and angle.
	/// From GLM_GTX_matrix_interpolation extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tmat4x4<T, P> axisAngleMatrix(
		tvec3<T, P> const & axis,
		T const angle);

	/// Extracts the rotation part of a matrix.
	/// From GLM_GTX_matrix_interpolation extension.
	template <typename T, precision P>
	GLM_FUNC_DECL tmat4x4<T, P> extractMatrixRotation(
		tmat4x4<T, P> const & mat);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL void axisAngle(
		mat<4, 4, T, Q> const& Mat, vec<3, T, Q> & Axis, T & Angle);

	/// Build a matrix from axis and angle.
	/// From GLM_GTX_matrix_interpolation extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, T, Q> axisAngleMatrix(
		vec<3, T, Q> const& Axis, T const Angle);

	/// Extracts the rotation part of a matrix.
	/// From GLM_GTX_matrix_interpolation extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, T, Q> extractMatrixRotation(
		mat<4, 4, T, Q> const& Mat);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Build a interpolation of 4 * 4 matrixes.
	/// From GLM_GTX_matrix_interpolation extension.
	/// Warning! works only with rotation and/or translation matrixes, scale will generate unexpected results.
<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_DECL tmat4x4<T, P> interpolate(
		tmat4x4<T, P> const & m1,
		tmat4x4<T, P> const & m2,
		T const delta);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, T, Q> interpolate(
		mat<4, 4, T, Q> const& m1, mat<4, 4, T, Q> const& m2, T const Delta);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// @}
}//namespace glm

#include "matrix_interpolation.inl"
