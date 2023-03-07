/// @ref gtx_log_base
/// @file glm/gtx/log_base.hpp
///
/// @see core (dependence)
///
/// @defgroup gtx_log_base GLM_GTX_log_base
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Logarithm for any base. base can be a vector or a scalar.
///
/// <glm/gtx/log_base.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/log_base.hpp> to use the features of this extension.
///
/// Logarithm for any base. base can be a vector or a scalar.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependency:
#include "../glm.hpp"

<<<<<<< HEAD
#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_log_base extension included")
=======
#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_log_base is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_log_base extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm
{
	/// @addtogroup gtx_log_base
	/// @{

	/// Logarithm for any base.
	/// From GLM_GTX_log_base.
<<<<<<< HEAD
	template <typename genType>
	GLM_FUNC_DECL genType log(
		genType const & x,
		genType const & base);

	/// Logarithm for any base.
	/// From GLM_GTX_log_base.
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<T, P> sign(
		vecType<T, P> const & x,
		vecType<T, P> const & base);
=======
	template<typename genType>
	GLM_FUNC_DECL genType log(
		genType const& x,
		genType const& base);

	/// Logarithm for any base.
	/// From GLM_GTX_log_base.
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_DECL vec<L, T, Q> sign(
		vec<L, T, Q> const& x,
		vec<L, T, Q> const& base);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// @}
}//namespace glm

#include "log_base.inl"
