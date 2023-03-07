/// @ref gtx_wrap
/// @file glm/gtx/wrap.hpp
///
/// @see core (dependence)
///
/// @defgroup gtx_wrap GLM_GTX_wrap
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Wrapping mode of texture coordinates.
///
/// <glm/gtx/wrap.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/wrap.hpp> to use the features of this extension.
///
/// Wrapping mode of texture coordinates.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependency:
#include "../glm.hpp"
<<<<<<< HEAD
#include "../gtc/vec1.hpp"

#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_wrap extension included")
=======
#include "../ext/scalar_common.hpp"
#include "../ext/vector_common.hpp"
#include "../gtc/vec1.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_wrap is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_wrap extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm
{
	/// @addtogroup gtx_wrap
	/// @{

<<<<<<< HEAD
	/// Simulate GL_CLAMP OpenGL wrap mode
	/// @see gtx_wrap extension.
	template <typename genType>
	GLM_FUNC_DECL genType clamp(genType const& Texcoord);

	/// Simulate GL_REPEAT OpenGL wrap mode
	/// @see gtx_wrap extension.
	template <typename genType>
	GLM_FUNC_DECL genType repeat(genType const& Texcoord);

	/// Simulate GL_MIRRORED_REPEAT OpenGL wrap mode
	/// @see gtx_wrap extension.
	template <typename genType>
	GLM_FUNC_DECL genType mirrorClamp(genType const& Texcoord);

	/// Simulate GL_MIRROR_REPEAT OpenGL wrap mode
	/// @see gtx_wrap extension.
	template <typename genType>
	GLM_FUNC_DECL genType mirrorRepeat(genType const& Texcoord);

=======
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	/// @}
}// namespace glm

#include "wrap.inl"
