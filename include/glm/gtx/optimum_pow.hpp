/// @ref gtx_optimum_pow
/// @file glm/gtx/optimum_pow.hpp
///
/// @see core (dependence)
///
/// @defgroup gtx_optimum_pow GLM_GTX_optimum_pow
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Integer exponentiation of power functions.
///
/// <glm/gtx/optimum_pow.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/optimum_pow.hpp> to use the features of this extension.
///
/// Integer exponentiation of power functions.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependency:
#include "../glm.hpp"

<<<<<<< HEAD
#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_optimum_pow extension included")
=======
#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_optimum_pow is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_optimum_pow extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm{
namespace gtx
{
	/// @addtogroup gtx_optimum_pow
	/// @{

	/// Returns x raised to the power of 2.
	///
	/// @see gtx_optimum_pow
<<<<<<< HEAD
	template <typename genType>
	GLM_FUNC_DECL genType pow2(genType const & x);
=======
	template<typename genType>
	GLM_FUNC_DECL genType pow2(genType const& x);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Returns x raised to the power of 3.
	///
	/// @see gtx_optimum_pow
<<<<<<< HEAD
	template <typename genType>
	GLM_FUNC_DECL genType pow3(genType const & x);
=======
	template<typename genType>
	GLM_FUNC_DECL genType pow3(genType const& x);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Returns x raised to the power of 4.
	///
	/// @see gtx_optimum_pow
<<<<<<< HEAD
	template <typename genType>
	GLM_FUNC_DECL genType pow4(genType const & x);
=======
	template<typename genType>
	GLM_FUNC_DECL genType pow4(genType const& x);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// @}
}//namespace gtx
}//namespace glm

#include "optimum_pow.inl"
