/// @ref gtx_norm
/// @file glm/gtx/norm.hpp
///
/// @see core (dependence)
/// @see gtx_quaternion (dependence)
<<<<<<< HEAD
=======
/// @see gtx_component_wise (dependence)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
///
/// @defgroup gtx_norm GLM_GTX_norm
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Various ways to compute vector norms.
/// 
/// <glm/gtx/norm.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/norm.hpp> to use the features of this extension.
///
/// Various ways to compute vector norms.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependency:
<<<<<<< HEAD
#include "../detail/func_geometric.hpp"
#include "../gtx/quaternion.hpp"

#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_norm extension included")
=======
#include "../geometric.hpp"
#include "../gtx/quaternion.hpp"
#include "../gtx/component_wise.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_norm is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_norm extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm
{
	/// @addtogroup gtx_norm
	/// @{

	/// Returns the squared length of x.
	/// From GLM_GTX_norm extension.
<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL T length2(
		vecType<T, P> const & x);

	/// Returns the squared distance between p0 and p1, i.e., length2(p0 - p1).
	/// From GLM_GTX_norm extension.
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL T distance2(
		vecType<T, P> const & p0,
		vecType<T, P> const & p1);

	//! Returns the L1 norm between x and y.
	//! From GLM_GTX_norm extension.
	template <typename T, precision P>
	GLM_FUNC_DECL T l1Norm(
		tvec3<T, P> const & x,
		tvec3<T, P> const & y);
		
	//! Returns the L1 norm of v.
	//! From GLM_GTX_norm extension.
	template <typename T, precision P>
	GLM_FUNC_DECL T l1Norm(
		tvec3<T, P> const & v);
		
	//! Returns the L2 norm between x and y.
	//! From GLM_GTX_norm extension.
	template <typename T, precision P>
	GLM_FUNC_DECL T l2Norm(
		tvec3<T, P> const & x,
		tvec3<T, P> const & y);
		
	//! Returns the L2 norm of v.
	//! From GLM_GTX_norm extension.
	template <typename T, precision P>
	GLM_FUNC_DECL T l2Norm(
		tvec3<T, P> const & x);
		
	//! Returns the L norm between x and y.
	//! From GLM_GTX_norm extension.
	template <typename T, precision P>
	GLM_FUNC_DECL T lxNorm(
		tvec3<T, P> const & x,
		tvec3<T, P> const & y,
		unsigned int Depth);

	//! Returns the L norm of v.
	//! From GLM_GTX_norm extension.
	template <typename T, precision P>
	GLM_FUNC_DECL T lxNorm(
		tvec3<T, P> const & x,
		unsigned int Depth);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_DECL T length2(vec<L, T, Q> const& x);

	/// Returns the squared distance between p0 and p1, i.e., length2(p0 - p1).
	/// From GLM_GTX_norm extension.
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_DECL T distance2(vec<L, T, Q> const& p0, vec<L, T, Q> const& p1);

	//! Returns the L1 norm between x and y.
	//! From GLM_GTX_norm extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL T l1Norm(vec<3, T, Q> const& x, vec<3, T, Q> const& y);

	//! Returns the L1 norm of v.
	//! From GLM_GTX_norm extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL T l1Norm(vec<3, T, Q> const& v);

	//! Returns the L2 norm between x and y.
	//! From GLM_GTX_norm extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL T l2Norm(vec<3, T, Q> const& x, vec<3, T, Q> const& y);

	//! Returns the L2 norm of v.
	//! From GLM_GTX_norm extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL T l2Norm(vec<3, T, Q> const& x);

	//! Returns the L norm between x and y.
	//! From GLM_GTX_norm extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL T lxNorm(vec<3, T, Q> const& x, vec<3, T, Q> const& y, unsigned int Depth);

	//! Returns the L norm of v.
	//! From GLM_GTX_norm extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL T lxNorm(vec<3, T, Q> const& x, unsigned int Depth);

	//! Returns the LMax norm between x and y.
	//! From GLM_GTX_norm extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL T lMaxNorm(vec<3, T, Q> const& x, vec<3, T, Q> const& y);

	//! Returns the LMax norm of v.
	//! From GLM_GTX_norm extension.
	template<typename T, qualifier Q>
	GLM_FUNC_DECL T lMaxNorm(vec<3, T, Q> const& x);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// @}
}//namespace glm

#include "norm.inl"
