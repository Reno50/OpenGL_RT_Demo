/// @ref gtc_round
/// @file glm/gtc/round.hpp
///
/// @see core (dependence)
/// @see gtc_round (dependence)
///
/// @defgroup gtc_round GLM_GTC_round
/// @ingroup gtc
///
<<<<<<< HEAD
/// @brief rounding value to specific boundings
///
/// <glm/gtc/round.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtc/round.hpp> to use the features of this extension.
///
/// Rounding value to specific boundings
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependencies
#include "../detail/setup.hpp"
<<<<<<< HEAD
#include "../detail/precision.hpp"
=======
#include "../detail/qualifier.hpp"
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#include "../detail/_vectorize.hpp"
#include "../vector_relational.hpp"
#include "../common.hpp"
#include <limits>

<<<<<<< HEAD
#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTC_integer extension included")
=======
#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTC_round extension included")
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#endif

namespace glm
{
	/// @addtogroup gtc_round
	/// @{

<<<<<<< HEAD
	/// Return true if the value is a power of two number.
	///
	/// @see gtc_round
	template <typename genIUType>
	GLM_FUNC_DECL bool isPowerOfTwo(genIUType Value);

	/// Return true if the value is a power of two number.
	///
	/// @see gtc_round
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<bool, P> isPowerOfTwo(vecType<T, P> const & value);

=======
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	/// Return the power of two number which value is just higher the input value,
	/// round up to a power of two.
	///
	/// @see gtc_round
<<<<<<< HEAD
	template <typename genIUType>
	GLM_FUNC_DECL genIUType ceilPowerOfTwo(genIUType Value);
=======
	template<typename genIUType>
	GLM_FUNC_DECL genIUType ceilPowerOfTwo(genIUType v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Return the power of two number which value is just higher the input value,
	/// round up to a power of two.
	///
<<<<<<< HEAD
	/// @see gtc_round
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<T, P> ceilPowerOfTwo(vecType<T, P> const & value);
=======
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point or integer scalar types
	/// @tparam Q Value from qualifier enum
	///
	/// @see gtc_round
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_DECL vec<L, T, Q> ceilPowerOfTwo(vec<L, T, Q> const& v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Return the power of two number which value is just lower the input value,
	/// round down to a power of two.
	///
	/// @see gtc_round
<<<<<<< HEAD
	template <typename genIUType>
	GLM_FUNC_DECL genIUType floorPowerOfTwo(genIUType Value);
=======
	template<typename genIUType>
	GLM_FUNC_DECL genIUType floorPowerOfTwo(genIUType v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Return the power of two number which value is just lower the input value,
	/// round down to a power of two.
	///
<<<<<<< HEAD
	/// @see gtc_round
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<T, P> floorPowerOfTwo(vecType<T, P> const & value);
=======
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point or integer scalar types
	/// @tparam Q Value from qualifier enum
	///
	/// @see gtc_round
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_DECL vec<L, T, Q> floorPowerOfTwo(vec<L, T, Q> const& v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Return the power of two number which value is the closet to the input value.
	///
	/// @see gtc_round
<<<<<<< HEAD
	template <typename genIUType>
	GLM_FUNC_DECL genIUType roundPowerOfTwo(genIUType Value);

	/// Return the power of two number which value is the closet to the input value.
	///
	/// @see gtc_round
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<T, P> roundPowerOfTwo(vecType<T, P> const & value);

	/// Return true if the 'Value' is a multiple of 'Multiple'.
	///
	/// @see gtc_round
	template <typename genIUType>
	GLM_FUNC_DECL bool isMultiple(genIUType Value, genIUType Multiple);

	/// Return true if the 'Value' is a multiple of 'Multiple'.
	///
	/// @see gtc_round
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<bool, P> isMultiple(vecType<T, P> const & Value, T Multiple);

	/// Return true if the 'Value' is a multiple of 'Multiple'.
	///
	/// @see gtc_round
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<bool, P> isMultiple(vecType<T, P> const & Value, vecType<T, P> const & Multiple);
=======
	template<typename genIUType>
	GLM_FUNC_DECL genIUType roundPowerOfTwo(genIUType v);

	/// Return the power of two number which value is the closet to the input value.
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point or integer scalar types
	/// @tparam Q Value from qualifier enum
	///
	/// @see gtc_round
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_DECL vec<L, T, Q> roundPowerOfTwo(vec<L, T, Q> const& v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Higher multiple number of Source.
	///
	/// @tparam genType Floating-point or integer scalar or vector types.
<<<<<<< HEAD
	/// @param Source 
	/// @param Multiple Must be a null or positive value
	///
	/// @see gtc_round
	template <typename genType>
	GLM_FUNC_DECL genType ceilMultiple(genType Source, genType Multiple);

	/// Higher multiple number of Source.
	///
	/// @tparam genType Floating-point or integer scalar or vector types.
	/// @param Source 
	/// @param Multiple Must be a null or positive value
	///
	/// @see gtc_round
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<T, P> ceilMultiple(vecType<T, P> const & Source, vecType<T, P> const & Multiple);
=======
	///
	/// @param v Source value to which is applied the function
	/// @param Multiple Must be a null or positive value
	///
	/// @see gtc_round
	template<typename genType>
	GLM_FUNC_DECL genType ceilMultiple(genType v, genType Multiple);

	/// Higher multiple number of Source.
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point or integer scalar types
	/// @tparam Q Value from qualifier enum
	///
	/// @param v Source values to which is applied the function
	/// @param Multiple Must be a null or positive value
	///
	/// @see gtc_round
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_DECL vec<L, T, Q> ceilMultiple(vec<L, T, Q> const& v, vec<L, T, Q> const& Multiple);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Lower multiple number of Source.
	///
	/// @tparam genType Floating-point or integer scalar or vector types.
<<<<<<< HEAD
	/// @param Source 
	/// @param Multiple Must be a null or positive value
	///
	/// @see gtc_round
	template <typename genType>
	GLM_FUNC_DECL genType floorMultiple(
		genType Source,
		genType Multiple);
=======
	///
	/// @param v Source value to which is applied the function
	/// @param Multiple Must be a null or positive value
	///
	/// @see gtc_round
	template<typename genType>
	GLM_FUNC_DECL genType floorMultiple(genType v, genType Multiple);

	/// Lower multiple number of Source.
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point or integer scalar types
	/// @tparam Q Value from qualifier enum
	///
	/// @param v Source values to which is applied the function
	/// @param Multiple Must be a null or positive value
	///
	/// @see gtc_round
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_DECL vec<L, T, Q> floorMultiple(vec<L, T, Q> const& v, vec<L, T, Q> const& Multiple);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// Lower multiple number of Source.
	///
	/// @tparam genType Floating-point or integer scalar or vector types.
<<<<<<< HEAD
	/// @param Source 
	/// @param Multiple Must be a null or positive value
	///
	/// @see gtc_round
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<T, P> floorMultiple(
		vecType<T, P> const & Source,
		vecType<T, P> const & Multiple);

	/// Lower multiple number of Source.
	///
	/// @tparam genType Floating-point or integer scalar or vector types.
	/// @param Source 
	/// @param Multiple Must be a null or positive value
	///
	/// @see gtc_round
	template <typename genType>
	GLM_FUNC_DECL genType roundMultiple(
		genType Source,
		genType Multiple);

	/// Lower multiple number of Source.
	///
	/// @tparam genType Floating-point or integer scalar or vector types.
	/// @param Source 
	/// @param Multiple Must be a null or positive value
	///
	/// @see gtc_round
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<T, P> roundMultiple(
		vecType<T, P> const & Source,
		vecType<T, P> const & Multiple);
=======
	///
	/// @param v Source value to which is applied the function
	/// @param Multiple Must be a null or positive value
	///
	/// @see gtc_round
	template<typename genType>
	GLM_FUNC_DECL genType roundMultiple(genType v, genType Multiple);

	/// Lower multiple number of Source.
	///
	/// @tparam L Integer between 1 and 4 included that qualify the dimension of the vector
	/// @tparam T Floating-point or integer scalar types
	/// @tparam Q Value from qualifier enum
	///
	/// @param v Source values to which is applied the function
	/// @param Multiple Must be a null or positive value
	///
	/// @see gtc_round
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_DECL vec<L, T, Q> roundMultiple(vec<L, T, Q> const& v, vec<L, T, Q> const& Multiple);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// @}
} //namespace glm

#include "round.inl"
