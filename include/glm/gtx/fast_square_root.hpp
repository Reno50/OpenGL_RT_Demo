/// @ref gtx_fast_square_root
/// @file glm/gtx/fast_square_root.hpp
///
/// @see core (dependence)
///
/// @defgroup gtx_fast_square_root GLM_GTX_fast_square_root
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Fast but less accurate implementations of square root based functions.
/// - Sqrt optimisation based on Newton's method, 
/// www.gamedev.net/community/forums/topic.asp?topic id=139956
///
/// <glm/gtx/fast_square_root.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/fast_square_root.hpp> to use the features of this extension.
///
/// Fast but less accurate implementations of square root based functions.
/// - Sqrt optimisation based on Newton's method,
/// www.gamedev.net/community/forums/topic.asp?topic id=139956
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependency:
#include "../common.hpp"
#include "../exponential.hpp"
#include "../geometric.hpp"

<<<<<<< HEAD
#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_fast_square_root extension included")
=======
#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_fast_square_root is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_fast_square_root extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm
{
	/// @addtogroup gtx_fast_square_root
	/// @{

	/// Faster than the common sqrt function but less accurate.
	///
	/// @see gtx_fast_square_root extension.
<<<<<<< HEAD
	template <typename genType> 
=======
	template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_DECL genType fastSqrt(genType x);

	/// Faster than the common sqrt function but less accurate.
	///
	/// @see gtx_fast_square_root extension.
<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<T, P> fastSqrt(vecType<T, P> const & x);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_DECL vec<L, T, Q> fastSqrt(vec<L, T, Q> const& x);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Faster than the common inversesqrt function but less accurate.
	///
	/// @see gtx_fast_square_root extension.
<<<<<<< HEAD
	template <typename genType> 
=======
	template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_DECL genType fastInverseSqrt(genType x);

	/// Faster than the common inversesqrt function but less accurate.
	///
	/// @see gtx_fast_square_root extension.
<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<T, P> fastInverseSqrt(vecType<T, P> const & x);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_DECL vec<L, T, Q> fastInverseSqrt(vec<L, T, Q> const& x);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Faster than the common length function but less accurate.
	///
	/// @see gtx_fast_square_root extension.
<<<<<<< HEAD
	template <typename genType>
=======
	template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_DECL genType fastLength(genType x);

	/// Faster than the common length function but less accurate.
	///
	/// @see gtx_fast_square_root extension.
<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL T fastLength(vecType<T, P> const & x);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_DECL T fastLength(vec<L, T, Q> const& x);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Faster than the common distance function but less accurate.
	///
	/// @see gtx_fast_square_root extension.
<<<<<<< HEAD
	template <typename genType>
=======
	template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_DECL genType fastDistance(genType x, genType y);

	/// Faster than the common distance function but less accurate.
	///
	/// @see gtx_fast_square_root extension.
<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL T fastDistance(vecType<T, P> const & x, vecType<T, P> const & y);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_DECL T fastDistance(vec<L, T, Q> const& x, vec<L, T, Q> const& y);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Faster than the common normalize function but less accurate.
	///
	/// @see gtx_fast_square_root extension.
<<<<<<< HEAD
	template <typename genType> 
	GLM_FUNC_DECL genType fastNormalize(genType const & x);
=======
	template<typename genType>
	GLM_FUNC_DECL genType fastNormalize(genType const& x);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// @}
}// namespace glm

#include "fast_square_root.inl"
