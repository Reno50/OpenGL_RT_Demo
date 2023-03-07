/// @ref gtx_mixed_product
/// @file glm/gtx/mixed_product.hpp
///
/// @see core (dependence)
///
/// @defgroup gtx_mixed_product GLM_GTX_mixed_producte
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Mixed product of 3 vectors.
///
/// <glm/gtx/mixed_product.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/mixed_product.hpp> to use the features of this extension.
///
/// Mixed product of 3 vectors.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependency:
#include "../glm.hpp"

<<<<<<< HEAD
#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_mixed_product extension included")
=======
#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_mixed_product is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_mixed_product extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm
{
	/// @addtogroup gtx_mixed_product
	/// @{

	/// @brief Mixed product of 3 vectors (from GLM_GTX_mixed_product extension)
<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_DECL T mixedProduct(
		tvec3<T, P> const & v1, 
		tvec3<T, P> const & v2, 
		tvec3<T, P> const & v3);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL T mixedProduct(
		vec<3, T, Q> const& v1,
		vec<3, T, Q> const& v2,
		vec<3, T, Q> const& v3);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// @}
}// namespace glm

#include "mixed_product.inl"
