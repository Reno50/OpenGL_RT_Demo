/// @ref gtx_string_cast
/// @file glm/gtx/string_cast.hpp
///
/// @see core (dependence)
<<<<<<< HEAD
/// @see gtc_half_float (dependence)
=======
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
/// @see gtx_integer (dependence)
/// @see gtx_quaternion (dependence)
///
/// @defgroup gtx_string_cast GLM_GTX_string_cast
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Setup strings for GLM type values
///
/// <glm/gtx/string_cast.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/string_cast.hpp> to use the features of this extension.
///
/// Setup strings for GLM type values
///
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
/// This extension is not supported with CUDA

#pragma once

// Dependency:
#include "../glm.hpp"
#include "../gtc/type_precision.hpp"
#include "../gtc/quaternion.hpp"
#include "../gtx/dual_quaternion.hpp"
#include <string>
<<<<<<< HEAD
=======
#include <cmath>

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_string_cast is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_string_cast extension included")
#	endif
#endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#if(GLM_COMPILER & GLM_COMPILER_CUDA)
#	error "GLM_GTX_string_cast is not supported on CUDA compiler"
#endif

<<<<<<< HEAD
#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_string_cast extension included")
#endif

=======
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
namespace glm
{
	/// @addtogroup gtx_string_cast
	/// @{

	/// Create a string from a GLM vector or matrix typed variable.
	/// @see gtx_string_cast extension.
<<<<<<< HEAD
	template <template <typename, precision> class matType, typename T, precision P>
	GLM_FUNC_DECL std::string to_string(matType<T, P> const & x);
=======
	template<typename genType>
	GLM_FUNC_DECL std::string to_string(genType const& x);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// @}
}//namespace glm

#include "string_cast.inl"
