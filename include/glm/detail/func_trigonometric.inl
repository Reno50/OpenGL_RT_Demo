<<<<<<< HEAD
/// @ref core
/// @file glm/detail/func_trigonometric.inl

=======
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#include "_vectorize.hpp"
#include <cmath>
#include <limits>

namespace glm
{
	// radians
<<<<<<< HEAD
	template <typename genType>
=======
	template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR genType radians(genType degrees)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'radians' only accept floating-point input");

		return degrees * static_cast<genType>(0.01745329251994329576923690768489);
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vecType<T, P> radians(vecType<T, P> const & v)
	{
		return detail::functor1<T, T, P, vecType>::call(radians, v);
	}
	
	// degrees
	template <typename genType>
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> radians(vec<L, T, Q> const& v)
	{
		return detail::functor1<vec, L, T, T, Q>::call(radians, v);
	}

	// degrees
	template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR genType degrees(genType radians)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'degrees' only accept floating-point input");

		return radians * static_cast<genType>(57.295779513082320876798154814105);
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vecType<T, P> degrees(vecType<T, P> const & v)
	{
		return detail::functor1<T, T, P, vecType>::call(degrees, v);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> degrees(vec<L, T, Q> const& v)
	{
		return detail::functor1<vec, L, T, T, Q>::call(degrees, v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	// sin
	using ::std::sin;

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> sin(vecType<T, P> const & v)
	{
		return detail::functor1<T, T, P, vecType>::call(sin, v);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> sin(vec<L, T, Q> const& v)
	{
		return detail::functor1<vec, L, T, T, Q>::call(sin, v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	// cos
	using std::cos;

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> cos(vecType<T, P> const & v)
	{
		return detail::functor1<T, T, P, vecType>::call(cos, v);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> cos(vec<L, T, Q> const& v)
	{
		return detail::functor1<vec, L, T, T, Q>::call(cos, v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	// tan
	using std::tan;

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> tan(vecType<T, P> const & v)
	{
		return detail::functor1<T, T, P, vecType>::call(tan, v);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> tan(vec<L, T, Q> const& v)
	{
		return detail::functor1<vec, L, T, T, Q>::call(tan, v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	// asin
	using std::asin;

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> asin(vecType<T, P> const & v)
	{
		return detail::functor1<T, T, P, vecType>::call(asin, v);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> asin(vec<L, T, Q> const& v)
	{
		return detail::functor1<vec, L, T, T, Q>::call(asin, v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	// acos
	using std::acos;

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> acos(vecType<T, P> const & v)
	{
		return detail::functor1<T, T, P, vecType>::call(acos, v);
	}

	// atan
	template <typename genType>
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> acos(vec<L, T, Q> const& v)
	{
		return detail::functor1<vec, L, T, T, Q>::call(acos, v);
	}

	// atan
	template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_QUALIFIER genType atan(genType y, genType x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'atan' only accept floating-point input");

		return ::std::atan2(y, x);
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> atan(vecType<T, P> const & a, vecType<T, P> const & b)
	{
		return detail::functor2<T, P, vecType>::call(::std::atan2, a, b);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> atan(vec<L, T, Q> const& a, vec<L, T, Q> const& b)
	{
		return detail::functor2<vec, L, T, Q>::call(::std::atan2, a, b);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	using std::atan;

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> atan(vecType<T, P> const & v)
	{
		return detail::functor1<T, T, P, vecType>::call(atan, v);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> atan(vec<L, T, Q> const& v)
	{
		return detail::functor1<vec, L, T, T, Q>::call(atan, v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	// sinh
	using std::sinh;

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> sinh(vecType<T, P> const & v)
	{
		return detail::functor1<T, T, P, vecType>::call(sinh, v);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> sinh(vec<L, T, Q> const& v)
	{
		return detail::functor1<vec, L, T, T, Q>::call(sinh, v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	// cosh
	using std::cosh;

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> cosh(vecType<T, P> const & v)
	{
		return detail::functor1<T, T, P, vecType>::call(cosh, v);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> cosh(vec<L, T, Q> const& v)
	{
		return detail::functor1<vec, L, T, T, Q>::call(cosh, v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	// tanh
	using std::tanh;

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> tanh(vecType<T, P> const & v)
	{
		return detail::functor1<T, T, P, vecType>::call(tanh, v);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> tanh(vec<L, T, Q> const& v)
	{
		return detail::functor1<vec, L, T, T, Q>::call(tanh, v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	// asinh
#	if GLM_HAS_CXX11_STL
		using std::asinh;
#	else
<<<<<<< HEAD
		template <typename genType>
=======
		template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		GLM_FUNC_QUALIFIER genType asinh(genType x)
		{
			GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'asinh' only accept floating-point input");

			return (x < static_cast<genType>(0) ? static_cast<genType>(-1) : (x > static_cast<genType>(0) ? static_cast<genType>(1) : static_cast<genType>(0))) * log(std::abs(x) + sqrt(static_cast<genType>(1) + x * x));
		}
#	endif

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> asinh(vecType<T, P> const & v)
	{
		return detail::functor1<T, T, P, vecType>::call(asinh, v);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> asinh(vec<L, T, Q> const& v)
	{
		return detail::functor1<vec, L, T, T, Q>::call(asinh, v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	// acosh
#	if GLM_HAS_CXX11_STL
		using std::acosh;
#	else
<<<<<<< HEAD
		template <typename genType> 
=======
		template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		GLM_FUNC_QUALIFIER genType acosh(genType x)
		{
			GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'acosh' only accept floating-point input");

			if(x < static_cast<genType>(1))
				return static_cast<genType>(0);
			return log(x + sqrt(x * x - static_cast<genType>(1)));
		}
#	endif

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> acosh(vecType<T, P> const & v)
	{
		return detail::functor1<T, T, P, vecType>::call(acosh, v);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> acosh(vec<L, T, Q> const& v)
	{
		return detail::functor1<vec, L, T, T, Q>::call(acosh, v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	// atanh
#	if GLM_HAS_CXX11_STL
		using std::atanh;
#	else
<<<<<<< HEAD
		template <typename genType>
		GLM_FUNC_QUALIFIER genType atanh(genType x)
		{
			GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'atanh' only accept floating-point input");
		
=======
		template<typename genType>
		GLM_FUNC_QUALIFIER genType atanh(genType x)
		{
			GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'atanh' only accept floating-point input");

>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			if(std::abs(x) >= static_cast<genType>(1))
				return 0;
			return static_cast<genType>(0.5) * log((static_cast<genType>(1) + x) / (static_cast<genType>(1) - x));
		}
#	endif

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> atanh(vecType<T, P> const & v)
	{
		return detail::functor1<T, T, P, vecType>::call(atanh, v);
	}
}//namespace glm

#if GLM_ARCH != GLM_ARCH_PURE && GLM_HAS_UNRESTRICTED_UNIONS
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> atanh(vec<L, T, Q> const& v)
	{
		return detail::functor1<vec, L, T, T, Q>::call(atanh, v);
	}
}//namespace glm

#if GLM_CONFIG_SIMD == GLM_ENABLE
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#	include "func_trigonometric_simd.inl"
#endif

