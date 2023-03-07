/// @ref gtx_polar_coordinates
/// @file glm/gtx/polar_coordinates.hpp
///
/// @see core (dependence)
///
/// @defgroup gtx_polar_coordinates GLM_GTX_polar_coordinates
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Conversion from Euclidean space to polar space and revert.
///
/// <glm/gtx/polar_coordinates.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/polar_coordinates.hpp> to use the features of this extension.
///
/// Conversion from Euclidean space to polar space and revert.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependency:
#include "../glm.hpp"

<<<<<<< HEAD
#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_polar_coordinates extension included")
=======
#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_polar_coordinates is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_polar_coordinates extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm
{
	/// @addtogroup gtx_polar_coordinates
	/// @{

<<<<<<< HEAD
	/// Convert Euclidean to Polar coordinates, x is the xz distance, y, the latitude and z the longitude.
	///
	/// @see gtx_polar_coordinates
	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> polar(
		tvec3<T, P> const & euclidean);
=======
	/// Convert Euclidean to Polar coordinates, x is the latitude, y the longitude and z the xz distance.
	///
	/// @see gtx_polar_coordinates
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<3, T, Q> polar(
		vec<3, T, Q> const& euclidean);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Convert Polar to Euclidean coordinates.
	///
	/// @see gtx_polar_coordinates
<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> euclidean(
		tvec2<T, P> const & polar);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<3, T, Q> euclidean(
		vec<2, T, Q> const& polar);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// @}
}//namespace glm

#include "polar_coordinates.inl"
