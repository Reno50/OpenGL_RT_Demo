/// @ref gtc_ulp
/// @file glm/gtc/ulp.hpp
///
/// @see core (dependence)
///
/// @defgroup gtc_ulp GLM_GTC_ulp
/// @ingroup gtc
///
<<<<<<< HEAD
/// @brief Allow the measurement of the accuracy of a function against a reference 
/// implementation. This extension works on floating-point data and provide results 
/// in ULP.
/// <glm/gtc/ulp.hpp> need to be included to use these features.
=======
/// Include <glm/gtc/ulp.hpp> to use the features of this extension.
///
/// Allow the measurement of the accuracy of a function against a reference
/// implementation. This extension works on floating-point data and provide results
/// in ULP.
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependencies
#include "../detail/setup.hpp"
<<<<<<< HEAD
#include "../detail/precision.hpp"
#include "../detail/type_int.hpp"

#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
=======
#include "../detail/qualifier.hpp"
#include "../detail/_vectorize.hpp"
#include "../ext/scalar_int_sized.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#	pragma message("GLM: GLM_GTC_ulp extension included")
#endif

namespace glm
{
<<<<<<< HEAD
	/// @addtogroup gtc_ulp
	/// @{

	/// Return the next ULP value(s) after the input value(s).
	/// @see gtc_ulp
	template <typename genType>
	GLM_FUNC_DECL genType next_float(genType const & x);

	/// Return the previous ULP value(s) before the input value(s).
	/// @see gtc_ulp
	template <typename genType>
	GLM_FUNC_DECL genType prev_float(genType const & x);

	/// Return the value(s) ULP distance after the input value(s).
	/// @see gtc_ulp
	template <typename genType>
	GLM_FUNC_DECL genType next_float(genType const & x, uint const & Distance);

	/// Return the value(s) ULP distance before the input value(s).
	/// @see gtc_ulp
	template <typename genType>
	GLM_FUNC_DECL genType prev_float(genType const & x, uint const & Distance);
	
	/// Return the distance in the number of ULP between 2 scalars.
	/// @see gtc_ulp
	template <typename T>
	GLM_FUNC_DECL uint float_distance(T const & x, T const & y);

	/// Return the distance in the number of ULP between 2 vectors.
	/// @see gtc_ulp
	template<typename T, template<typename> class vecType>
	GLM_FUNC_DECL vecType<uint> float_distance(vecType<T> const & x, vecType<T> const & y);
	
	/// @}
}// namespace glm
=======
	/// Return the next ULP value(s) after the input value(s).
	///
	/// @tparam genType A floating-point scalar type.
	///
	/// @see gtc_ulp
	template<typename genType>
	GLM_FUNC_DECL genType next_float(genType x);

	/// Return the previous ULP value(s) before the input value(s).
	///
	/// @tparam genType A floating-point scalar type.
	///
	/// @see gtc_ulp
	template<typename genType>
	GLM_FUNC_DECL genType prev_float(genType x);

	/// Return the value(s) ULP distance after the input value(s).
	///
	/// @tparam genType A floating-point scalar type.
	///
	/// @see gtc_ulp
	template<typename genType>
	GLM_FUNC_DECL genType next_float(genType x, int ULPs);

	/// Return the value(s) ULP distance before the input value(s).
	///
	/// @tparam genType A floating-point scalar type.
	///
	/// @see gtc_ulp
	template<typename genType>
	GLM_FUNC_DECL genType prev_float(genType x, int ULPs);

	/// Return the distance in the number of ULP between 2 single-precision floating-point scalars.
	///
	/// @see gtc_ulp
	GLM_FUNC_DECL int float_distance(float x, float y);

	/// Return the distance in the number of ULP between 2 double-precision floating-point scalars.
	///
	/// @see gtc_ulp
	GLM_FUNC_DECL int64 float_distance(double x, double y);

	/// Return the next ULP value(s) after the input value(s).
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point
	/// @tparam Q Value from qualifier enum
	///
	/// @see gtc_ulp
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_DECL vec<L, T, Q> next_float(vec<L, T, Q> const& x);

	/// Return the value(s) ULP distance after the input value(s).
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point
	/// @tparam Q Value from qualifier enum
	///
	/// @see gtc_ulp
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_DECL vec<L, T, Q> next_float(vec<L, T, Q> const& x, int ULPs);

	/// Return the value(s) ULP distance after the input value(s).
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point
	/// @tparam Q Value from qualifier enum
	///
	/// @see gtc_ulp
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_DECL vec<L, T, Q> next_float(vec<L, T, Q> const& x, vec<L, int, Q> const& ULPs);

	/// Return the previous ULP value(s) before the input value(s).
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point
	/// @tparam Q Value from qualifier enum
	///
	/// @see gtc_ulp
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_DECL vec<L, T, Q> prev_float(vec<L, T, Q> const& x);

	/// Return the value(s) ULP distance before the input value(s).
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point
	/// @tparam Q Value from qualifier enum
	///
	/// @see gtc_ulp
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_DECL vec<L, T, Q> prev_float(vec<L, T, Q> const& x, int ULPs);

	/// Return the value(s) ULP distance before the input value(s).
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point
	/// @tparam Q Value from qualifier enum
	///
	/// @see gtc_ulp
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_DECL vec<L, T, Q> prev_float(vec<L, T, Q> const& x, vec<L, int, Q> const& ULPs);

	/// Return the distance in the number of ULP between 2 single-precision floating-point scalars.
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam Q Value from qualifier enum
	///
	/// @see gtc_ulp
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_DECL vec<L, int, Q> float_distance(vec<L, float, Q> const& x, vec<L, float, Q> const& y);

	/// Return the distance in the number of ULP between 2 double-precision floating-point scalars.
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam Q Value from qualifier enum
	///
	/// @see gtc_ulp
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_DECL vec<L, int64, Q> float_distance(vec<L, double, Q> const& x, vec<L, double, Q> const& y);

	/// @}
}//namespace glm
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#include "ulp.inl"
