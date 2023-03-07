/// @ref gtx_perpendicular
/// @file glm/gtx/perpendicular.hpp
///
/// @see core (dependence)
/// @see gtx_projection (dependence)
///
/// @defgroup gtx_perpendicular GLM_GTX_perpendicular
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Perpendicular of a vector from other one
///
/// <glm/gtx/perpendicular.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/perpendicular.hpp> to use the features of this extension.
///
/// Perpendicular of a vector from other one
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependency:
#include "../glm.hpp"
#include "../gtx/projection.hpp"

<<<<<<< HEAD
#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_perpendicular extension included")
=======
#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_perpendicular is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_perpendicular extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm
{
	/// @addtogroup gtx_perpendicular
	/// @{

	//! Projects x a perpendicular axis of Normal.
	//! From GLM_GTX_perpendicular extension.
<<<<<<< HEAD
	template <typename vecType> 
	GLM_FUNC_DECL vecType perp(
		vecType const & x, 
		vecType const & Normal);
=======
	template<typename genType>
	GLM_FUNC_DECL genType perp(genType const& x, genType const& Normal);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// @}
}//namespace glm

#include "perpendicular.inl"
