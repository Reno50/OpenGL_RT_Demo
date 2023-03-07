/// @ref gtx_spline
/// @file glm/gtx/spline.hpp
///
/// @see core (dependence)
///
/// @defgroup gtx_spline GLM_GTX_spline
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Spline functions
///
/// <glm/gtx/spline.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/spline.hpp> to use the features of this extension.
///
/// Spline functions
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependency:
#include "../glm.hpp"
#include "../gtx/optimum_pow.hpp"

<<<<<<< HEAD
#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_spline extension included")
=======
#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_spline is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_spline extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm
{
	/// @addtogroup gtx_spline
	/// @{

	/// Return a point from a catmull rom curve.
	/// @see gtx_spline extension.
<<<<<<< HEAD
	template <typename genType> 
	GLM_FUNC_DECL genType catmullRom(
		genType const & v1, 
		genType const & v2, 
		genType const & v3, 
		genType const & v4, 
		typename genType::value_type const & s);
		
	/// Return a point from a hermite curve.
	/// @see gtx_spline extension.
	template <typename genType> 
	GLM_FUNC_DECL genType hermite(
		genType const & v1, 
		genType const & t1, 
		genType const & v2, 
		genType const & t2, 
		typename genType::value_type const & s);
		
	/// Return a point from a cubic curve. 
	/// @see gtx_spline extension.
	template <typename genType> 
	GLM_FUNC_DECL genType cubic(
		genType const & v1, 
		genType const & v2, 
		genType const & v3, 
		genType const & v4, 
		typename genType::value_type const & s);
=======
	template<typename genType>
	GLM_FUNC_DECL genType catmullRom(
		genType const& v1,
		genType const& v2,
		genType const& v3,
		genType const& v4,
		typename genType::value_type const& s);

	/// Return a point from a hermite curve.
	/// @see gtx_spline extension.
	template<typename genType>
	GLM_FUNC_DECL genType hermite(
		genType const& v1,
		genType const& t1,
		genType const& v2,
		genType const& t2,
		typename genType::value_type const& s);

	/// Return a point from a cubic curve.
	/// @see gtx_spline extension.
	template<typename genType>
	GLM_FUNC_DECL genType cubic(
		genType const& v1,
		genType const& v2,
		genType const& v3,
		genType const& v4,
		typename genType::value_type const& s);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// @}
}//namespace glm

#include "spline.inl"
