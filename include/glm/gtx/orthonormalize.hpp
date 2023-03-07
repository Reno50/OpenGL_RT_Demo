/// @ref gtx_orthonormalize
/// @file glm/gtx/orthonormalize.hpp
///
/// @see core (dependence)
/// @see gtx_extented_min_max (dependence)
///
/// @defgroup gtx_orthonormalize GLM_GTX_orthonormalize
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Orthonormalize matrices.
///
/// <glm/gtx/orthonormalize.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/orthonormalize.hpp> to use the features of this extension.
///
/// Orthonormalize matrices.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependency:
#include "../vec3.hpp"
#include "../mat3x3.hpp"
#include "../geometric.hpp"

<<<<<<< HEAD
#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_orthonormalize extension included")
=======
#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_orthonormalize is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_orthonormalize extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm
{
	/// @addtogroup gtx_orthonormalize
	/// @{

	/// Returns the orthonormalized matrix of m.
	///
	/// @see gtx_orthonormalize
<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_DECL tmat3x3<T, P> orthonormalize(tmat3x3<T, P> const & m);
		
	/// Orthonormalizes x according y.
	///
	/// @see gtx_orthonormalize
	template <typename T, precision P> 
	GLM_FUNC_DECL tvec3<T, P> orthonormalize(tvec3<T, P> const & x, tvec3<T, P> const & y);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<3, 3, T, Q> orthonormalize(mat<3, 3, T, Q> const& m);

	/// Orthonormalizes x according y.
	///
	/// @see gtx_orthonormalize
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<3, T, Q> orthonormalize(vec<3, T, Q> const& x, vec<3, T, Q> const& y);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// @}
}//namespace glm

#include "orthonormalize.inl"
