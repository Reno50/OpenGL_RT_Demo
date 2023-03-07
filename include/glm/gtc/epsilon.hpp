/// @ref gtc_epsilon
/// @file glm/gtc/epsilon.hpp
<<<<<<< HEAD
/// 
/// @see core (dependence)
/// @see gtc_half_float (dependence)
=======
///
/// @see core (dependence)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
/// @see gtc_quaternion (dependence)
///
/// @defgroup gtc_epsilon GLM_GTC_epsilon
/// @ingroup gtc
<<<<<<< HEAD
/// 
/// @brief Comparison functions for a user defined epsilon values.
/// 
/// <glm/gtc/epsilon.hpp> need to be included to use these functionalities.
=======
///
/// Include <glm/gtc/epsilon.hpp> to use the features of this extension.
///
/// Comparison functions for a user defined epsilon values.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependencies
#include "../detail/setup.hpp"
<<<<<<< HEAD
#include "../detail/precision.hpp"

#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
=======
#include "../detail/qualifier.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#	pragma message("GLM: GLM_GTC_epsilon extension included")
#endif

namespace glm
{
	/// @addtogroup gtc_epsilon
	/// @{

	/// Returns the component-wise comparison of |x - y| < epsilon.
	/// True if this expression is satisfied.
	///
	/// @see gtc_epsilon
<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<bool, P> epsilonEqual(
		vecType<T, P> const & x,
		vecType<T, P> const & y,
		T const & epsilon);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_DECL vec<L, bool, Q> epsilonEqual(vec<L, T, Q> const& x, vec<L, T, Q> const& y, T const& epsilon);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Returns the component-wise comparison of |x - y| < epsilon.
	/// True if this expression is satisfied.
	///
	/// @see gtc_epsilon
<<<<<<< HEAD
	template <typename genType>
	GLM_FUNC_DECL bool epsilonEqual(
		genType const & x,
		genType const & y,
		genType const & epsilon);
=======
	template<typename genType>
	GLM_FUNC_DECL bool epsilonEqual(genType const& x, genType const& y, genType const& epsilon);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Returns the component-wise comparison of |x - y| < epsilon.
	/// True if this expression is not satisfied.
	///
	/// @see gtc_epsilon
<<<<<<< HEAD
	template <typename genType>
	GLM_FUNC_DECL typename genType::boolType epsilonNotEqual(
		genType const & x,
		genType const & y,
		typename genType::value_type const & epsilon);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_DECL vec<L, bool, Q> epsilonNotEqual(vec<L, T, Q> const& x, vec<L, T, Q> const& y, T const& epsilon);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Returns the component-wise comparison of |x - y| >= epsilon.
	/// True if this expression is not satisfied.
	///
	/// @see gtc_epsilon
<<<<<<< HEAD
	template <typename genType>
	GLM_FUNC_DECL bool epsilonNotEqual(
		genType const & x,
		genType const & y,
		genType const & epsilon);
=======
	template<typename genType>
	GLM_FUNC_DECL bool epsilonNotEqual(genType const& x, genType const& y, genType const& epsilon);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// @}
}//namespace glm

#include "epsilon.inl"
