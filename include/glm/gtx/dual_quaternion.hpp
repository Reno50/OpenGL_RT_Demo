/// @ref gtx_dual_quaternion
/// @file glm/gtx/dual_quaternion.hpp
/// @author Maksim Vorobiev (msomeone@gmail.com)
///
/// @see core (dependence)
<<<<<<< HEAD
/// @see gtc_half_float (dependence)
=======
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
/// @see gtc_constants (dependence)
/// @see gtc_quaternion (dependence)
///
/// @defgroup gtx_dual_quaternion GLM_GTX_dual_quaternion
/// @ingroup gtx
///
<<<<<<< HEAD
/// @brief Defines a templated dual-quaternion type and several dual-quaternion operations.
///
/// <glm/gtx/dual_quaternion.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtx/dual_quaternion.hpp> to use the features of this extension.
///
/// Defines a templated dual-quaternion type and several dual-quaternion operations.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependency:
#include "../glm.hpp"
#include "../gtc/constants.hpp"
#include "../gtc/quaternion.hpp"

<<<<<<< HEAD
#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_dual_quaternion extension included")
=======
#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_dual_quaternion is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_dual_quaternion extension included")
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm
{
	/// @addtogroup gtx_dual_quaternion
	/// @{

<<<<<<< HEAD
	template <typename T, precision P = defaultp>
=======
	template<typename T, qualifier Q = defaultp>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	struct tdualquat
	{
		// -- Implementation detail --

		typedef T value_type;
<<<<<<< HEAD
		typedef glm::tquat<T, P> part_type;

		// -- Data --

		glm::tquat<T, P> real, dual;
=======
		typedef qua<T, Q> part_type;

		// -- Data --

		qua<T, Q> real, dual;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

		// -- Component accesses --

		typedef length_t length_type;
		/// Return the count of components of a dual quaternion
<<<<<<< HEAD
		GLM_FUNC_DECL static length_type length(){return 2;}

		GLM_FUNC_DECL part_type & operator[](length_type i);
		GLM_FUNC_DECL part_type const & operator[](length_type i) const;

		// -- Implicit basic constructors --

		GLM_FUNC_DECL GLM_CONSTEXPR tdualquat() GLM_DEFAULT_CTOR;
		GLM_FUNC_DECL GLM_CONSTEXPR tdualquat(tdualquat<T, P> const & d) GLM_DEFAULT;
		template <precision Q>
		GLM_FUNC_DECL GLM_CONSTEXPR tdualquat(tdualquat<T, Q> const & d);

		// -- Explicit basic constructors --

		GLM_FUNC_DECL GLM_CONSTEXPR_CTOR explicit tdualquat(ctor);
		GLM_FUNC_DECL GLM_CONSTEXPR tdualquat(tquat<T, P> const & real);
		GLM_FUNC_DECL GLM_CONSTEXPR tdualquat(tquat<T, P> const & orientation, tvec3<T, P> const & translation);
		GLM_FUNC_DECL GLM_CONSTEXPR tdualquat(tquat<T, P> const & real, tquat<T, P> const & dual);

		// -- Conversion constructors --

		template <typename U, precision Q>
		GLM_FUNC_DECL GLM_CONSTEXPR GLM_EXPLICIT tdualquat(tdualquat<U, Q> const & q);

		GLM_FUNC_DECL GLM_EXPLICIT tdualquat(tmat2x4<T, P> const & holder_mat);
		GLM_FUNC_DECL GLM_EXPLICIT tdualquat(tmat3x4<T, P> const & aug_mat);

		// -- Unary arithmetic operators --

		GLM_FUNC_DECL tdualquat<T, P> & operator=(tdualquat<T, P> const & m) GLM_DEFAULT;

		template <typename U>
		GLM_FUNC_DECL tdualquat<T, P> & operator=(tdualquat<U, P> const & m);
		template <typename U>
		GLM_FUNC_DECL tdualquat<T, P> & operator*=(U s);
		template <typename U>
		GLM_FUNC_DECL tdualquat<T, P> & operator/=(U s);
=======
		GLM_FUNC_DECL static GLM_CONSTEXPR length_type length(){return 2;}

		GLM_FUNC_DECL part_type & operator[](length_type i);
		GLM_FUNC_DECL part_type const& operator[](length_type i) const;

		// -- Implicit basic constructors --

		GLM_FUNC_DECL GLM_CONSTEXPR tdualquat() GLM_DEFAULT;
		GLM_FUNC_DECL GLM_CONSTEXPR tdualquat(tdualquat<T, Q> const& d) GLM_DEFAULT;
		template<qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR tdualquat(tdualquat<T, P> const& d);

		// -- Explicit basic constructors --

		GLM_FUNC_DECL GLM_CONSTEXPR tdualquat(qua<T, Q> const& real);
		GLM_FUNC_DECL GLM_CONSTEXPR tdualquat(qua<T, Q> const& orientation, vec<3, T, Q> const& translation);
		GLM_FUNC_DECL GLM_CONSTEXPR tdualquat(qua<T, Q> const& real, qua<T, Q> const& dual);

		// -- Conversion constructors --

		template<typename U, qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR GLM_EXPLICIT tdualquat(tdualquat<U, P> const& q);

		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR tdualquat(mat<2, 4, T, Q> const& holder_mat);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR tdualquat(mat<3, 4, T, Q> const& aug_mat);

		// -- Unary arithmetic operators --

		GLM_FUNC_DECL tdualquat<T, Q> & operator=(tdualquat<T, Q> const& m) GLM_DEFAULT;

		template<typename U>
		GLM_FUNC_DECL tdualquat<T, Q> & operator=(tdualquat<U, Q> const& m);
		template<typename U>
		GLM_FUNC_DECL tdualquat<T, Q> & operator*=(U s);
		template<typename U>
		GLM_FUNC_DECL tdualquat<T, Q> & operator/=(U s);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	};

	// -- Unary bit operators --

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_DECL tdualquat<T, P> operator+(tdualquat<T, P> const & q);

	template <typename T, precision P>
	GLM_FUNC_DECL tdualquat<T, P> operator-(tdualquat<T, P> const & q);

	// -- Binary operators --

	template <typename T, precision P>
	GLM_FUNC_DECL tdualquat<T, P> operator+(tdualquat<T, P> const & q, tdualquat<T, P> const & p);

	template <typename T, precision P>
	GLM_FUNC_DECL tdualquat<T, P> operator*(tdualquat<T, P> const & q, tdualquat<T, P> const & p);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator*(tdualquat<T, P> const & q, tvec3<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator*(tvec3<T, P> const & v, tdualquat<T, P> const & q);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator*(tdualquat<T, P> const & q, tvec4<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator*(tvec4<T, P> const & v, tdualquat<T, P> const & q);

	template <typename T, precision P>
	GLM_FUNC_DECL tdualquat<T, P> operator*(tdualquat<T, P> const & q, T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tdualquat<T, P> operator*(T const & s, tdualquat<T, P> const & q);

	template <typename T, precision P>
	GLM_FUNC_DECL tdualquat<T, P> operator/(tdualquat<T, P> const & q, T const & s);

	// -- Boolean operators --

	template <typename T, precision P>
	GLM_FUNC_DECL bool operator==(tdualquat<T, P> const & q1, tdualquat<T, P> const & q2);

	template <typename T, precision P>
	GLM_FUNC_DECL bool operator!=(tdualquat<T, P> const & q1, tdualquat<T, P> const & q2);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL tdualquat<T, Q> operator+(tdualquat<T, Q> const& q);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL tdualquat<T, Q> operator-(tdualquat<T, Q> const& q);

	// -- Binary operators --

	template<typename T, qualifier Q>
	GLM_FUNC_DECL tdualquat<T, Q> operator+(tdualquat<T, Q> const& q, tdualquat<T, Q> const& p);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL tdualquat<T, Q> operator*(tdualquat<T, Q> const& q, tdualquat<T, Q> const& p);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<3, T, Q> operator*(tdualquat<T, Q> const& q, vec<3, T, Q> const& v);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<3, T, Q> operator*(vec<3, T, Q> const& v, tdualquat<T, Q> const& q);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<4, T, Q> operator*(tdualquat<T, Q> const& q, vec<4, T, Q> const& v);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<4, T, Q> operator*(vec<4, T, Q> const& v, tdualquat<T, Q> const& q);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL tdualquat<T, Q> operator*(tdualquat<T, Q> const& q, T const& s);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL tdualquat<T, Q> operator*(T const& s, tdualquat<T, Q> const& q);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL tdualquat<T, Q> operator/(tdualquat<T, Q> const& q, T const& s);

	// -- Boolean operators --

	template<typename T, qualifier Q>
	GLM_FUNC_DECL bool operator==(tdualquat<T, Q> const& q1, tdualquat<T, Q> const& q2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL bool operator!=(tdualquat<T, Q> const& q1, tdualquat<T, Q> const& q2);

	/// Creates an identity dual quaternion.
	///
	/// @see gtx_dual_quaternion
	template <typename T, qualifier Q>
	GLM_FUNC_DECL tdualquat<T, Q> dual_quat_identity();
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Returns the normalized quaternion.
	///
	/// @see gtx_dual_quaternion
<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_DECL tdualquat<T, P> normalize(tdualquat<T, P> const & q);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL tdualquat<T, Q> normalize(tdualquat<T, Q> const& q);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Returns the linear interpolation of two dual quaternion.
	///
	/// @see gtc_dual_quaternion
<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_DECL tdualquat<T, P> lerp(tdualquat<T, P> const & x, tdualquat<T, P> const & y, T const & a);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL tdualquat<T, Q> lerp(tdualquat<T, Q> const& x, tdualquat<T, Q> const& y, T const& a);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Returns the q inverse.
	///
	/// @see gtx_dual_quaternion
<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_DECL tdualquat<T, P> inverse(tdualquat<T, P> const & q);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL tdualquat<T, Q> inverse(tdualquat<T, Q> const& q);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Converts a quaternion to a 2 * 4 matrix.
	///
	/// @see gtx_dual_quaternion
<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_DECL tmat2x4<T, P> mat2x4_cast(tdualquat<T, P> const & x);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<2, 4, T, Q> mat2x4_cast(tdualquat<T, Q> const& x);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Converts a quaternion to a 3 * 4 matrix.
	///
	/// @see gtx_dual_quaternion
<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_DECL tmat3x4<T, P> mat3x4_cast(tdualquat<T, P> const & x);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<3, 4, T, Q> mat3x4_cast(tdualquat<T, Q> const& x);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Converts a 2 * 4 matrix (matrix which holds real and dual parts) to a quaternion.
	///
	/// @see gtx_dual_quaternion
<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_DECL tdualquat<T, P> dualquat_cast(tmat2x4<T, P> const & x);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL tdualquat<T, Q> dualquat_cast(mat<2, 4, T, Q> const& x);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Converts a 3 * 4 matrix (augmented matrix rotation + translation) to a quaternion.
	///
	/// @see gtx_dual_quaternion
<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_DECL tdualquat<T, P> dualquat_cast(tmat3x4<T, P> const & x);


	/// Dual-quaternion of low single-precision floating-point numbers.
=======
	template<typename T, qualifier Q>
	GLM_FUNC_DECL tdualquat<T, Q> dualquat_cast(mat<3, 4, T, Q> const& x);


	/// Dual-quaternion of low single-qualifier floating-point numbers.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	///
	/// @see gtx_dual_quaternion
	typedef tdualquat<float, lowp>		lowp_dualquat;

<<<<<<< HEAD
	/// Dual-quaternion of medium single-precision floating-point numbers.
=======
	/// Dual-quaternion of medium single-qualifier floating-point numbers.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	///
	/// @see gtx_dual_quaternion
	typedef tdualquat<float, mediump>	mediump_dualquat;

<<<<<<< HEAD
	/// Dual-quaternion of high single-precision floating-point numbers.
=======
	/// Dual-quaternion of high single-qualifier floating-point numbers.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	///
	/// @see gtx_dual_quaternion
	typedef tdualquat<float, highp>		highp_dualquat;


<<<<<<< HEAD
	/// Dual-quaternion of low single-precision floating-point numbers.
=======
	/// Dual-quaternion of low single-qualifier floating-point numbers.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	///
	/// @see gtx_dual_quaternion
	typedef tdualquat<float, lowp>		lowp_fdualquat;

<<<<<<< HEAD
	/// Dual-quaternion of medium single-precision floating-point numbers.
=======
	/// Dual-quaternion of medium single-qualifier floating-point numbers.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	///
	/// @see gtx_dual_quaternion
	typedef tdualquat<float, mediump>	mediump_fdualquat;

<<<<<<< HEAD
	/// Dual-quaternion of high single-precision floating-point numbers.
=======
	/// Dual-quaternion of high single-qualifier floating-point numbers.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	///
	/// @see gtx_dual_quaternion
	typedef tdualquat<float, highp>		highp_fdualquat;


<<<<<<< HEAD
	/// Dual-quaternion of low double-precision floating-point numbers.
=======
	/// Dual-quaternion of low double-qualifier floating-point numbers.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	///
	/// @see gtx_dual_quaternion
	typedef tdualquat<double, lowp>		lowp_ddualquat;

<<<<<<< HEAD
	/// Dual-quaternion of medium double-precision floating-point numbers.
=======
	/// Dual-quaternion of medium double-qualifier floating-point numbers.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	///
	/// @see gtx_dual_quaternion
	typedef tdualquat<double, mediump>	mediump_ddualquat;

<<<<<<< HEAD
	/// Dual-quaternion of high double-precision floating-point numbers.
=======
	/// Dual-quaternion of high double-qualifier floating-point numbers.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	///
	/// @see gtx_dual_quaternion
	typedef tdualquat<double, highp>	highp_ddualquat;


#if(!defined(GLM_PRECISION_HIGHP_FLOAT) && !defined(GLM_PRECISION_MEDIUMP_FLOAT) && !defined(GLM_PRECISION_LOWP_FLOAT))
	/// Dual-quaternion of floating-point numbers.
	///
	/// @see gtx_dual_quaternion
	typedef highp_fdualquat			dualquat;

<<<<<<< HEAD
	/// Dual-quaternion of single-precision floating-point numbers.
=======
	/// Dual-quaternion of single-qualifier floating-point numbers.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	///
	/// @see gtx_dual_quaternion
	typedef highp_fdualquat			fdualquat;
#elif(defined(GLM_PRECISION_HIGHP_FLOAT) && !defined(GLM_PRECISION_MEDIUMP_FLOAT) && !defined(GLM_PRECISION_LOWP_FLOAT))
	typedef highp_fdualquat			dualquat;
	typedef highp_fdualquat			fdualquat;
#elif(!defined(GLM_PRECISION_HIGHP_FLOAT) && defined(GLM_PRECISION_MEDIUMP_FLOAT) && !defined(GLM_PRECISION_LOWP_FLOAT))
	typedef mediump_fdualquat		dualquat;
	typedef mediump_fdualquat		fdualquat;
#elif(!defined(GLM_PRECISION_HIGHP_FLOAT) && !defined(GLM_PRECISION_MEDIUMP_FLOAT) && defined(GLM_PRECISION_LOWP_FLOAT))
	typedef lowp_fdualquat			dualquat;
	typedef lowp_fdualquat			fdualquat;
#else
#	error "GLM error: multiple default precision requested for single-precision floating-point types"
#endif


#if(!defined(GLM_PRECISION_HIGHP_DOUBLE) && !defined(GLM_PRECISION_MEDIUMP_DOUBLE) && !defined(GLM_PRECISION_LOWP_DOUBLE))
<<<<<<< HEAD
	/// Dual-quaternion of default double-precision floating-point numbers.
=======
	/// Dual-quaternion of default double-qualifier floating-point numbers.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	///
	/// @see gtx_dual_quaternion
	typedef highp_ddualquat			ddualquat;
#elif(defined(GLM_PRECISION_HIGHP_DOUBLE) && !defined(GLM_PRECISION_MEDIUMP_DOUBLE) && !defined(GLM_PRECISION_LOWP_DOUBLE))
	typedef highp_ddualquat			ddualquat;
#elif(!defined(GLM_PRECISION_HIGHP_DOUBLE) && defined(GLM_PRECISION_MEDIUMP_DOUBLE) && !defined(GLM_PRECISION_LOWP_DOUBLE))
	typedef mediump_ddualquat		ddualquat;
#elif(!defined(GLM_PRECISION_HIGHP_DOUBLE) && !defined(GLM_PRECISION_MEDIUMP_DOUBLE) && defined(GLM_PRECISION_LOWP_DOUBLE))
	typedef lowp_ddualquat			ddualquat;
#else
#	error "GLM error: Multiple default precision requested for double-precision floating-point types"
#endif

	/// @}
} //namespace glm

#include "dual_quaternion.inl"
