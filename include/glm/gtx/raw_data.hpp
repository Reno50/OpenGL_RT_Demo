/// @ref gtx_raw_data
/// @file glm/gtx/raw_data.hpp
///
/// @see core (dependence)
///
/// @defgroup gtx_raw_data GLM_GTX_raw_data
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Projection of a vector to other one
///
/// <glm/gtx/raw_data.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/raw_data.hpp> to use the features of this extension.
///
/// Projection of a vector to other one
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependencies
<<<<<<< HEAD
#include "../detail/setup.hpp"
#include "../detail/type_int.hpp"

#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_raw_data extension included")
=======
#include "../ext/scalar_uint_sized.hpp"
#include "../detail/setup.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_raw_data is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_raw_data extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm
{
	/// @addtogroup gtx_raw_data
	/// @{

<<<<<<< HEAD
	//! Type for byte numbers. 
	//! From GLM_GTX_raw_data extension.
	typedef detail::uint8		byte;

	//! Type for word numbers. 
	//! From GLM_GTX_raw_data extension.
	typedef detail::uint16		word;

	//! Type for dword numbers. 
	//! From GLM_GTX_raw_data extension.
	typedef detail::uint32		dword;

	//! Type for qword numbers. 
=======
	//! Type for byte numbers.
	//! From GLM_GTX_raw_data extension.
	typedef detail::uint8		byte;

	//! Type for word numbers.
	//! From GLM_GTX_raw_data extension.
	typedef detail::uint16		word;

	//! Type for dword numbers.
	//! From GLM_GTX_raw_data extension.
	typedef detail::uint32		dword;

	//! Type for qword numbers.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	//! From GLM_GTX_raw_data extension.
	typedef detail::uint64		qword;

	/// @}
}// namespace glm

#include "raw_data.inl"
