<<<<<<< HEAD
/// @ref core
/// @file glm/detail/type_float.hpp

=======
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#pragma once

#include "setup.hpp"

<<<<<<< HEAD
namespace glm{
namespace detail
{
	typedef float				float32;
	typedef double				float64;
}//namespace detail
	
	typedef float				lowp_float_t;
	typedef float				mediump_float_t;
	typedef double				highp_float_t;

	/// @addtogroup core_precision
	/// @{

	/// Low precision floating-point numbers. 
	/// There is no guarantee on the actual precision.
	/// 
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.4 Floats</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef lowp_float_t		lowp_float;

	/// Medium precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	/// 
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.4 Floats</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef mediump_float_t		mediump_float;

	/// High precision floating-point numbers.
	/// There is no guarantee on the actual precision.
	/// 
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.4 Floats</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef highp_float_t		highp_float;

#if(!defined(GLM_PRECISION_HIGHP_FLOAT) && !defined(GLM_PRECISION_MEDIUMP_FLOAT) && !defined(GLM_PRECISION_LOWP_FLOAT))
	typedef mediump_float		float_t;
#elif(defined(GLM_PRECISION_HIGHP_FLOAT) && !defined(GLM_PRECISION_MEDIUMP_FLOAT) && !defined(GLM_PRECISION_LOWP_FLOAT))
	typedef highp_float			float_t;
#elif(!defined(GLM_PRECISION_HIGHP_FLOAT) && defined(GLM_PRECISION_MEDIUMP_FLOAT) && !defined(GLM_PRECISION_LOWP_FLOAT))
	typedef mediump_float		float_t;
#elif(!defined(GLM_PRECISION_HIGHP_FLOAT) && !defined(GLM_PRECISION_MEDIUMP_FLOAT) && defined(GLM_PRECISION_LOWP_FLOAT))
	typedef lowp_float			float_t;
#else
#	error "GLM error: multiple default precision requested for floating-point types"
#endif

	typedef float				float32;
	typedef double				float64;

////////////////////
// check type sizes
#ifndef GLM_STATIC_ASSERT_NULL
	GLM_STATIC_ASSERT(sizeof(glm::float32) == 4, "float32 size isn't 4 bytes on this platform");
	GLM_STATIC_ASSERT(sizeof(glm::float64) == 8, "float64 size isn't 8 bytes on this platform");
#endif//GLM_STATIC_ASSERT_NULL

	/// @}

}//namespace glm
=======
#if GLM_COMPILER == GLM_COMPILER_VC12
#	pragma warning(push)
#	pragma warning(disable: 4512) // assignment operator could not be generated
#endif

namespace glm{
namespace detail
{
	template <typename T>
	union float_t
	{};

	// https://randomascii.wordpress.com/2012/02/25/comparing-floating-point-numbers-2012-edition/
	template <>
	union float_t<float>
	{
		typedef int int_type;
		typedef float float_type;

		GLM_CONSTEXPR float_t(float_type Num = 0.0f) : f(Num) {}

		GLM_CONSTEXPR float_t& operator=(float_t const& x)
		{
			f = x.f;
			return *this;
		}

		// Portable extraction of components.
		GLM_CONSTEXPR bool negative() const { return i < 0; }
		GLM_CONSTEXPR int_type mantissa() const { return i & ((1 << 23) - 1); }
		GLM_CONSTEXPR int_type exponent() const { return (i >> 23) & ((1 << 8) - 1); }

		int_type i;
		float_type f;
	};

	template <>
	union float_t<double>
	{
		typedef detail::int64 int_type;
		typedef double float_type;

		GLM_CONSTEXPR float_t(float_type Num = static_cast<float_type>(0)) : f(Num) {}

		GLM_CONSTEXPR float_t& operator=(float_t const& x)
		{
			f = x.f;
			return *this;
		}

		// Portable extraction of components.
		GLM_CONSTEXPR bool negative() const { return i < 0; }
		GLM_CONSTEXPR int_type mantissa() const { return i & ((int_type(1) << 52) - 1); }
		GLM_CONSTEXPR int_type exponent() const { return (i >> 52) & ((int_type(1) << 11) - 1); }

		int_type i;
		float_type f;
	};
}//namespace detail
}//namespace glm

#if GLM_COMPILER == GLM_COMPILER_VC12
#	pragma warning(pop)
#endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
