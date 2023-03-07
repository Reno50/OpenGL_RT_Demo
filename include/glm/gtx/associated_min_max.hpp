/// @ref gtx_associated_min_max
/// @file glm/gtx/associated_min_max.hpp
///
/// @see core (dependence)
/// @see gtx_extented_min_max (dependence)
///
/// @defgroup gtx_associated_min_max GLM_GTX_associated_min_max
/// @ingroup gtx
<<<<<<< HEAD
/// 
/// @brief Min and max functions that return associated values not the compared onces.
/// <glm/gtx/associated_min_max.hpp> need to be included to use these functionalities.
=======
///
/// Include <glm/gtx/associated_min_max.hpp> to use the features of this extension.
///
/// @brief Min and max functions that return associated values not the compared onces.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependency:
#include "../glm.hpp"

<<<<<<< HEAD
#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_associated_min_max extension included")
=======
#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_associated_min_max is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_associated_min_max extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm
{
	/// @addtogroup gtx_associated_min_max
	/// @{

	/// Minimum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
<<<<<<< HEAD
	template<typename T, typename U, precision P>
=======
	template<typename T, typename U, qualifier Q>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_DECL U associatedMin(T x, U a, T y, U b);

	/// Minimum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
<<<<<<< HEAD
	template<typename T, typename U, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL tvec2<U, P> associatedMin(
		vecType<T, P> const & x, vecType<U, P> const & a,
		vecType<T, P> const & y, vecType<U, P> const & b);

	/// Minimum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<typename T, typename U, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<U, P> associatedMin(
		T x, const vecType<U, P>& a,
		T y, const vecType<U, P>& b);

	/// Minimum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<typename T, typename U, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<U, P> associatedMin(
		vecType<T, P> const & x, U a,
		vecType<T, P> const & y, U b);
=======
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<2, U, Q> associatedMin(
		vec<L, T, Q> const& x, vec<L, U, Q> const& a,
		vec<L, T, Q> const& y, vec<L, U, Q> const& b);

	/// Minimum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMin(
		T x, const vec<L, U, Q>& a,
		T y, const vec<L, U, Q>& b);

	/// Minimum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMin(
		vec<L, T, Q> const& x, U a,
		vec<L, T, Q> const& y, U b);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Minimum comparison between 3 variables and returns 3 associated variable values
	/// @see gtx_associated_min_max
	template<typename T, typename U>
	GLM_FUNC_DECL U associatedMin(
		T x, U a,
		T y, U b,
		T z, U c);

	/// Minimum comparison between 3 variables and returns 3 associated variable values
	/// @see gtx_associated_min_max
<<<<<<< HEAD
	template<typename T, typename U, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<U, P> associatedMin(
		vecType<T, P> const & x, vecType<U, P> const & a,
		vecType<T, P> const & y, vecType<U, P> const & b,
		vecType<T, P> const & z, vecType<U, P> const & c);
=======
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMin(
		vec<L, T, Q> const& x, vec<L, U, Q> const& a,
		vec<L, T, Q> const& y, vec<L, U, Q> const& b,
		vec<L, T, Q> const& z, vec<L, U, Q> const& c);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Minimum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<typename T, typename U>
	GLM_FUNC_DECL U associatedMin(
		T x, U a,
		T y, U b,
		T z, U c,
		T w, U d);

	/// Minimum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
<<<<<<< HEAD
	template<typename T, typename U, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<U, P> associatedMin(
		vecType<T, P> const & x, vecType<U, P> const & a,
		vecType<T, P> const & y, vecType<U, P> const & b,
		vecType<T, P> const & z, vecType<U, P> const & c,
		vecType<T, P> const & w, vecType<U, P> const & d);

	/// Minimum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<typename T, typename U, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<U, P> associatedMin(
		T x, vecType<U, P> const & a,
		T y, vecType<U, P> const & b,
		T z, vecType<U, P> const & c,
		T w, vecType<U, P> const & d);

	/// Minimum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<typename T, typename U, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<U, P> associatedMin(
		vecType<T, P> const & x, U a,
		vecType<T, P> const & y, U b,
		vecType<T, P> const & z, U c,
		vecType<T, P> const & w, U d);
=======
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMin(
		vec<L, T, Q> const& x, vec<L, U, Q> const& a,
		vec<L, T, Q> const& y, vec<L, U, Q> const& b,
		vec<L, T, Q> const& z, vec<L, U, Q> const& c,
		vec<L, T, Q> const& w, vec<L, U, Q> const& d);

	/// Minimum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMin(
		T x, vec<L, U, Q> const& a,
		T y, vec<L, U, Q> const& b,
		T z, vec<L, U, Q> const& c,
		T w, vec<L, U, Q> const& d);

	/// Minimum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMin(
		vec<L, T, Q> const& x, U a,
		vec<L, T, Q> const& y, U b,
		vec<L, T, Q> const& z, U c,
		vec<L, T, Q> const& w, U d);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Maximum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<typename T, typename U>
	GLM_FUNC_DECL U associatedMax(T x, U a, T y, U b);

	/// Maximum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
<<<<<<< HEAD
	template<typename T, typename U, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL tvec2<U, P> associatedMax(
		vecType<T, P> const & x, vecType<U, P> const & a,
		vecType<T, P> const & y, vecType<U, P> const & b);

	/// Maximum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<typename T, typename U, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<T, P> associatedMax(
		T x, vecType<U, P> const & a,
		T y, vecType<U, P> const & b);

	/// Maximum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<typename T, typename U, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<U, P> associatedMax(
		vecType<T, P> const & x, U a,
		vecType<T, P> const & y, U b);
=======
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<2, U, Q> associatedMax(
		vec<L, T, Q> const& x, vec<L, U, Q> const& a,
		vec<L, T, Q> const& y, vec<L, U, Q> const& b);

	/// Maximum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, T, Q> associatedMax(
		T x, vec<L, U, Q> const& a,
		T y, vec<L, U, Q> const& b);

	/// Maximum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMax(
		vec<L, T, Q> const& x, U a,
		vec<L, T, Q> const& y, U b);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Maximum comparison between 3 variables and returns 3 associated variable values
	/// @see gtx_associated_min_max
	template<typename T, typename U>
	GLM_FUNC_DECL U associatedMax(
		T x, U a,
		T y, U b,
		T z, U c);

	/// Maximum comparison between 3 variables and returns 3 associated variable values
	/// @see gtx_associated_min_max
<<<<<<< HEAD
	template<typename T, typename U, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<U, P> associatedMax(
		vecType<T, P> const & x, vecType<U, P> const & a,
		vecType<T, P> const & y, vecType<U, P> const & b,
		vecType<T, P> const & z, vecType<U, P> const & c);

	/// Maximum comparison between 3 variables and returns 3 associated variable values
	/// @see gtx_associated_min_max
	template<typename T, typename U, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<T, P> associatedMax(
		T x, vecType<U, P> const & a,
		T y, vecType<U, P> const & b,
		T z, vecType<U, P> const & c);

	/// Maximum comparison between 3 variables and returns 3 associated variable values
	/// @see gtx_associated_min_max
	template<typename T, typename U, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<U, P> associatedMax(
		vecType<T, P> const & x, U a,
		vecType<T, P> const & y, U b,
		vecType<T, P> const & z, U c);
=======
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMax(
		vec<L, T, Q> const& x, vec<L, U, Q> const& a,
		vec<L, T, Q> const& y, vec<L, U, Q> const& b,
		vec<L, T, Q> const& z, vec<L, U, Q> const& c);

	/// Maximum comparison between 3 variables and returns 3 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, T, Q> associatedMax(
		T x, vec<L, U, Q> const& a,
		T y, vec<L, U, Q> const& b,
		T z, vec<L, U, Q> const& c);

	/// Maximum comparison between 3 variables and returns 3 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMax(
		vec<L, T, Q> const& x, U a,
		vec<L, T, Q> const& y, U b,
		vec<L, T, Q> const& z, U c);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Maximum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<typename T, typename U>
	GLM_FUNC_DECL U associatedMax(
		T x, U a,
		T y, U b,
		T z, U c,
		T w, U d);

	/// Maximum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
<<<<<<< HEAD
	template<typename T, typename U, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<U, P> associatedMax(
		vecType<T, P> const & x, vecType<U, P> const & a,
		vecType<T, P> const & y, vecType<U, P> const & b,
		vecType<T, P> const & z, vecType<U, P> const & c,
		vecType<T, P> const & w, vecType<U, P> const & d);

	/// Maximum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<typename T, typename U, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<U, P> associatedMax(
		T x, vecType<U, P> const & a,
		T y, vecType<U, P> const & b,
		T z, vecType<U, P> const & c,
		T w, vecType<U, P> const & d);

	/// Maximum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<typename T, typename U, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<U, P> associatedMax(
		vecType<T, P> const & x, U a,
		vecType<T, P> const & y, U b,
		vecType<T, P> const & z, U c,
		vecType<T, P> const & w, U d);
=======
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMax(
		vec<L, T, Q> const& x, vec<L, U, Q> const& a,
		vec<L, T, Q> const& y, vec<L, U, Q> const& b,
		vec<L, T, Q> const& z, vec<L, U, Q> const& c,
		vec<L, T, Q> const& w, vec<L, U, Q> const& d);

	/// Maximum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMax(
		T x, vec<L, U, Q> const& a,
		T y, vec<L, U, Q> const& b,
		T z, vec<L, U, Q> const& c,
		T w, vec<L, U, Q> const& d);

	/// Maximum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMax(
		vec<L, T, Q> const& x, U a,
		vec<L, T, Q> const& y, U b,
		vec<L, T, Q> const& z, U c,
		vec<L, T, Q> const& w, U d);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// @}
} //namespace glm

#include "associated_min_max.inl"
