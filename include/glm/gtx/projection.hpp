/// @ref gtx_projection
/// @file glm/gtx/projection.hpp
///
/// @see core (dependence)
///
/// @defgroup gtx_projection GLM_GTX_projection
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Projection of a vector to other one
///
/// <glm/gtx/projection.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/projection.hpp> to use the features of this extension.
///
/// Projection of a vector to other one
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependency:
#include "../geometric.hpp"

<<<<<<< HEAD
#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_projection extension included")
=======
#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_projection is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_projection extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm
{
	/// @addtogroup gtx_projection
	/// @{

	/// Projects x on Normal.
	///
<<<<<<< HEAD
	/// @see gtx_projection
	template <typename vecType>
	GLM_FUNC_DECL vecType proj(vecType const & x, vecType const & Normal);
=======
	/// @param[in] x A vector to project
	/// @param[in] Normal A normal that doesn't need to be of unit length.
	///
	/// @see gtx_projection
	template<typename genType>
	GLM_FUNC_DECL genType proj(genType const& x, genType const& Normal);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// @}
}//namespace glm

#include "projection.inl"
