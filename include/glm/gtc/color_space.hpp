/// @ref gtc_color_space
/// @file glm/gtc/color_space.hpp
///
/// @see core (dependence)
/// @see gtc_color_space (dependence)
///
/// @defgroup gtc_color_space GLM_GTC_color_space
/// @ingroup gtc
///
<<<<<<< HEAD
/// @brief Allow to perform bit operations on integer values
///
/// <glm/gtc/color.hpp> need to be included to use these functionalities.
=======
/// Include <glm/gtc/color_space.hpp> to use the features of this extension.
///
/// Allow to perform bit operations on integer values
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

#pragma once

// Dependencies
#include "../detail/setup.hpp"
<<<<<<< HEAD
#include "../detail/precision.hpp"
=======
#include "../detail/qualifier.hpp"
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#include "../exponential.hpp"
#include "../vec3.hpp"
#include "../vec4.hpp"
#include <limits>

<<<<<<< HEAD
#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
=======
#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#	pragma message("GLM: GLM_GTC_color_space extension included")
#endif

namespace glm
{
	/// @addtogroup gtc_color_space
	/// @{

	/// Convert a linear color to sRGB color using a standard gamma correction.
<<<<<<< HEAD
	/// IEC 61966-2-1:1999 specification https://www.w3.org/Graphics/Color/srgb
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<T, P> convertLinearToSRGB(vecType<T, P> const & ColorLinear);

	/// Convert a linear color to sRGB color using a custom gamma correction.
	/// IEC 61966-2-1:1999 specification https://www.w3.org/Graphics/Color/srgb
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<T, P> convertLinearToSRGB(vecType<T, P> const & ColorLinear, T Gamma);

	/// Convert a sRGB color to linear color using a standard gamma correction.
	/// IEC 61966-2-1:1999 specification https://www.w3.org/Graphics/Color/srgb
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<T, P> convertSRGBToLinear(vecType<T, P> const & ColorSRGB);

	/// Convert a sRGB color to linear color using a custom gamma correction.
	// IEC 61966-2-1:1999 specification https://www.w3.org/Graphics/Color/srgb
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<T, P> convertSRGBToLinear(vecType<T, P> const & ColorSRGB, T Gamma);
=======
	/// IEC 61966-2-1:1999 / Rec. 709 specification https://www.w3.org/Graphics/Color/srgb
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_DECL vec<L, T, Q> convertLinearToSRGB(vec<L, T, Q> const& ColorLinear);

	/// Convert a linear color to sRGB color using a custom gamma correction.
	/// IEC 61966-2-1:1999 / Rec. 709 specification https://www.w3.org/Graphics/Color/srgb
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_DECL vec<L, T, Q> convertLinearToSRGB(vec<L, T, Q> const& ColorLinear, T Gamma);

	/// Convert a sRGB color to linear color using a standard gamma correction.
	/// IEC 61966-2-1:1999 / Rec. 709 specification https://www.w3.org/Graphics/Color/srgb
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_DECL vec<L, T, Q> convertSRGBToLinear(vec<L, T, Q> const& ColorSRGB);

	/// Convert a sRGB color to linear color using a custom gamma correction.
	// IEC 61966-2-1:1999 / Rec. 709 specification https://www.w3.org/Graphics/Color/srgb
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_DECL vec<L, T, Q> convertSRGBToLinear(vec<L, T, Q> const& ColorSRGB, T Gamma);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

	/// @}
} //namespace glm

#include "color_space.inl"
