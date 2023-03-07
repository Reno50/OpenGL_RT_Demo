/// @ref gtx_integer
/// @file glm/gtx/integer.hpp
///
/// @see core (dependence)
///
/// @defgroup gtx_integer GLM_GTX_integer
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Add support for integer for core functions
///
/// <glm/gtx/integer.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/integer.hpp> to use the features of this extension.
///
/// Add support for integer for core functions
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependency:
#include "../glm.hpp"
#include "../gtc/integer.hpp"

<<<<<<< HEAD
#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_integer extension included")
=======
#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_integer is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_integer extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm
{
	/// @addtogroup gtx_integer
	/// @{

<<<<<<< HEAD
	//! Returns x raised to the y power. 
	//! From GLM_GTX_integer extension.
	GLM_FUNC_DECL int pow(int x, int y);
=======
	//! Returns x raised to the y power.
	//! From GLM_GTX_integer extension.
	GLM_FUNC_DECL int pow(int x, uint y);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	//! Returns the positive square root of x.
	//! From GLM_GTX_integer extension.
	GLM_FUNC_DECL int sqrt(int x);

	//! Returns the floor log2 of x.
	//! From GLM_GTX_integer extension.
	GLM_FUNC_DECL unsigned int floor_log2(unsigned int x);

	//! Modulus. Returns x - y * floor(x / y) for each component in x using the floating point value y.
	//! From GLM_GTX_integer extension.
	GLM_FUNC_DECL int mod(int x, int y);

	//! Return the factorial value of a number (!12 max, integer only)
	//! From GLM_GTX_integer extension.
<<<<<<< HEAD
	template <typename genType> 
	GLM_FUNC_DECL genType factorial(genType const & x);

	//! 32bit signed integer. 
=======
	template<typename genType>
	GLM_FUNC_DECL genType factorial(genType const& x);

	//! 32bit signed integer.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	//! From GLM_GTX_integer extension.
	typedef signed int					sint;

	//! Returns x raised to the y power.
	//! From GLM_GTX_integer extension.
	GLM_FUNC_DECL uint pow(uint x, uint y);

<<<<<<< HEAD
	//! Returns the positive square root of x. 
=======
	//! Returns the positive square root of x.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	//! From GLM_GTX_integer extension.
	GLM_FUNC_DECL uint sqrt(uint x);

	//! Modulus. Returns x - y * floor(x / y) for each component in x using the floating point value y.
	//! From GLM_GTX_integer extension.
	GLM_FUNC_DECL uint mod(uint x, uint y);

	//! Returns the number of leading zeros.
	//! From GLM_GTX_integer extension.
	GLM_FUNC_DECL uint nlz(uint x);

	/// @}
}//namespace glm

#include "integer.inl"
