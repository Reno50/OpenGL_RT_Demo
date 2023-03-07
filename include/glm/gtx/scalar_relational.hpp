/// @ref gtx_scalar_relational
/// @file glm/gtx/scalar_relational.hpp
///
/// @see core (dependence)
///
/// @defgroup gtx_scalar_relational GLM_GTX_scalar_relational
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Extend a position from a source to a position at a defined length.
///
/// <glm/gtx/scalar_relational.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/scalar_relational.hpp> to use the features of this extension.
///
/// Extend a position from a source to a position at a defined length.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependency:
#include "../glm.hpp"

<<<<<<< HEAD
#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_extend extension included")
=======
#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_extend is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_extend extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm
{
	/// @addtogroup gtx_scalar_relational
	/// @{



	/// @}
}//namespace glm

#include "scalar_relational.inl"
