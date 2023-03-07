/// @ref core
/// @file glm/detail/func_common.inl

<<<<<<< HEAD
#include "func_vector_relational.hpp"
=======
#include "../vector_relational.hpp"
#include "compute_common.hpp"
#include "type_vec1.hpp"
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#include "type_vec2.hpp"
#include "type_vec3.hpp"
#include "type_vec4.hpp"
#include "_vectorize.hpp"
#include <limits>

namespace glm
{
	// min
<<<<<<< HEAD
	template <typename genType>
	GLM_FUNC_QUALIFIER genType min(genType x, genType y)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559 || std::numeric_limits<genType>::is_integer || GLM_UNRESTRICTED_GENTYPE, "'min' only accept floating-point or integer inputs");
		return x < y ? x : y;
	}

	// max
	template <typename genType>
	GLM_FUNC_QUALIFIER genType max(genType x, genType y)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559 || std::numeric_limits<genType>::is_integer || GLM_UNRESTRICTED_GENTYPE, "'max' only accept floating-point or integer inputs");

		return x > y ? x : y;
	}

	// abs
	template <>
	GLM_FUNC_QUALIFIER int32 abs(int32 x)
	{
		int32 const y = x >> 31;
=======
	template<typename genType>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR genType min(genType x, genType y)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559 || std::numeric_limits<genType>::is_integer, "'min' only accept floating-point or integer inputs");
		return (y < x) ? y : x;
	}

	// max
	template<typename genType>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR genType max(genType x, genType y)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559 || std::numeric_limits<genType>::is_integer, "'max' only accept floating-point or integer inputs");

		return (x < y) ? y : x;
	}

	// abs
	template<>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR int abs(int x)
	{
		int const y = x >> (sizeof(int) * 8 - 1);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		return (x ^ y) - y;
	}

	// round
#	if GLM_HAS_CXX11_STL
		using ::std::round;
#	else
<<<<<<< HEAD
		template <typename genType>
=======
		template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		GLM_FUNC_QUALIFIER genType round(genType x)
		{
			GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'round' only accept floating-point inputs");

			return x < static_cast<genType>(0) ? static_cast<genType>(int(x - static_cast<genType>(0.5))) : static_cast<genType>(int(x + static_cast<genType>(0.5)));
		}
#	endif

	// trunc
#	if GLM_HAS_CXX11_STL
		using ::std::trunc;
#	else
<<<<<<< HEAD
		template <typename genType>
=======
		template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		GLM_FUNC_QUALIFIER genType trunc(genType x)
		{
			GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'trunc' only accept floating-point inputs");

			return x < static_cast<genType>(0) ? -std::floor(-x) : std::floor(x);
		}
#	endif

}//namespace glm

namespace glm{
namespace detail
{
<<<<<<< HEAD
	template <typename genFIType, bool /*signed*/>
	struct compute_abs
	{};

	template <typename genFIType>
	struct compute_abs<genFIType, true>
	{
		GLM_FUNC_QUALIFIER static genFIType call(genFIType x)
		{
			GLM_STATIC_ASSERT(
				std::numeric_limits<genFIType>::is_iec559 || std::numeric_limits<genFIType>::is_signed || GLM_UNRESTRICTED_GENTYPE,
				"'abs' only accept floating-point and integer scalar or vector inputs");

			return x >= genFIType(0) ? x : -x;
			// TODO, perf comp with: *(((int *) &x) + 1) &= 0x7fffffff;
		}
	};

	#if GLM_COMPILER & GLM_COMPILER_CUDA
	template <>
	struct compute_abs<float, true>
	{
		GLM_FUNC_QUALIFIER static float call(float x)
		{
			return fabsf(x);
		}
	};
	#endif

	template <typename genFIType>
	struct compute_abs<genFIType, false>
	{
		GLM_FUNC_QUALIFIER static genFIType call(genFIType x)
		{
			GLM_STATIC_ASSERT(
				(!std::numeric_limits<genFIType>::is_signed && std::numeric_limits<genFIType>::is_integer) || GLM_UNRESTRICTED_GENTYPE,
				"'abs' only accept floating-point and integer scalar or vector inputs");
			return x;
		}
	};

	template <typename T, precision P, template <typename, precision> class vecType, bool Aligned>
	struct compute_abs_vector
	{
		GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & x)
		{
			return detail::functor1<T, T, P, vecType>::call(abs, x);
		}
	};

	template <typename T, typename U, precision P, template <typename, precision> class vecType, bool Aligned>
	struct compute_mix_vector
	{
		GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & x, vecType<T, P> const & y, vecType<U, P> const & a)
		{
			GLM_STATIC_ASSERT(std::numeric_limits<U>::is_iec559 || GLM_UNRESTRICTED_GENTYPE, "'mix' only accept floating-point inputs for the interpolator a");

			return vecType<T, P>(vecType<U, P>(x) + a * vecType<U, P>(y - x));
		}
	};

	template <typename T, precision P, template <typename, precision> class vecType, bool Aligned>
	struct compute_mix_vector<T, bool, P, vecType, Aligned>
	{
		GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & x, vecType<T, P> const & y, vecType<bool, P> const & a)
		{
			vecType<T, P> Result(uninitialize);
=======
	template<length_t L, typename T, qualifier Q, bool Aligned>
	struct compute_abs_vector
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<L, T, Q> call(vec<L, T, Q> const& x)
		{
			return detail::functor1<vec, L, T, T, Q>::call(abs, x);
		}
	};

	template<length_t L, typename T, typename U, qualifier Q, bool Aligned>
	struct compute_mix_vector
	{
		GLM_FUNC_QUALIFIER static vec<L, T, Q> call(vec<L, T, Q> const& x, vec<L, T, Q> const& y, vec<L, U, Q> const& a)
		{
			GLM_STATIC_ASSERT(std::numeric_limits<U>::is_iec559 || GLM_CONFIG_UNRESTRICTED_GENTYPE, "'mix' only accept floating-point inputs for the interpolator a");

			return vec<L, T, Q>(vec<L, U, Q>(x) * (static_cast<U>(1) - a) + vec<L, U, Q>(y) * a);
		}
	};

	template<length_t L, typename T, qualifier Q, bool Aligned>
	struct compute_mix_vector<L, T, bool, Q, Aligned>
	{
		GLM_FUNC_QUALIFIER static vec<L, T, Q> call(vec<L, T, Q> const& x, vec<L, T, Q> const& y, vec<L, bool, Q> const& a)
		{
			vec<L, T, Q> Result;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			for(length_t i = 0; i < x.length(); ++i)
				Result[i] = a[i] ? y[i] : x[i];
			return Result;
		}
	};

<<<<<<< HEAD
	template <typename T, typename U, precision P, template <typename, precision> class vecType, bool Aligned>
	struct compute_mix_scalar
	{
		GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & x, vecType<T, P> const & y, U const & a)
		{
			GLM_STATIC_ASSERT(std::numeric_limits<U>::is_iec559 || GLM_UNRESTRICTED_GENTYPE, "'mix' only accept floating-point inputs for the interpolator a");

			return vecType<T, P>(vecType<U, P>(x) + a * vecType<U, P>(y - x));
		}
	};

	template <typename T, precision P, template <typename, precision> class vecType, bool Aligned>
	struct compute_mix_scalar<T, bool, P, vecType, Aligned>
	{
		GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & x, vecType<T, P> const & y, bool const & a)
=======
	template<length_t L, typename T, typename U, qualifier Q, bool Aligned>
	struct compute_mix_scalar
	{
		GLM_FUNC_QUALIFIER static vec<L, T, Q> call(vec<L, T, Q> const& x, vec<L, T, Q> const& y, U const& a)
		{
			GLM_STATIC_ASSERT(std::numeric_limits<U>::is_iec559 || GLM_CONFIG_UNRESTRICTED_GENTYPE, "'mix' only accept floating-point inputs for the interpolator a");

			return vec<L, T, Q>(vec<L, U, Q>(x) * (static_cast<U>(1) - a) + vec<L, U, Q>(y) * a);
		}
	};

	template<length_t L, typename T, qualifier Q, bool Aligned>
	struct compute_mix_scalar<L, T, bool, Q, Aligned>
	{
		GLM_FUNC_QUALIFIER static vec<L, T, Q> call(vec<L, T, Q> const& x, vec<L, T, Q> const& y, bool const& a)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		{
			return a ? y : x;
		}
	};

<<<<<<< HEAD
	template <typename T, typename U>
	struct compute_mix
	{
		GLM_FUNC_QUALIFIER static T call(T const & x, T const & y, U const & a)
		{
			GLM_STATIC_ASSERT(std::numeric_limits<U>::is_iec559 || GLM_UNRESTRICTED_GENTYPE, "'mix' only accept floating-point inputs for the interpolator a");

			return static_cast<T>(static_cast<U>(x) + a * static_cast<U>(y - x));
		}
	};

	template <typename T>
	struct compute_mix<T, bool>
	{
		GLM_FUNC_QUALIFIER static T call(T const & x, T const & y, bool const & a)
=======
	template<typename T, typename U>
	struct compute_mix
	{
		GLM_FUNC_QUALIFIER static T call(T const& x, T const& y, U const& a)
		{
			GLM_STATIC_ASSERT(std::numeric_limits<U>::is_iec559 || GLM_CONFIG_UNRESTRICTED_GENTYPE, "'mix' only accept floating-point inputs for the interpolator a");

			return static_cast<T>(static_cast<U>(x) * (static_cast<U>(1) - a) + static_cast<U>(y) * a);
		}
	};

	template<typename T>
	struct compute_mix<T, bool>
	{
		GLM_FUNC_QUALIFIER static T call(T const& x, T const& y, bool const& a)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		{
			return a ? y : x;
		}
	};

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType, bool isFloat, bool Aligned>
	struct compute_sign
	{
		GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & x)
		{
			return vecType<T, P>(glm::lessThan(vecType<T, P>(0), x)) - vecType<T, P>(glm::lessThan(x, vecType<T, P>(0)));
=======
	template<length_t L, typename T, qualifier Q, bool isFloat, bool Aligned>
	struct compute_sign
	{
		GLM_FUNC_QUALIFIER static vec<L, T, Q> call(vec<L, T, Q> const& x)
		{
			return vec<L, T, Q>(glm::lessThan(vec<L, T, Q>(0), x)) - vec<L, T, Q>(glm::lessThan(x, vec<L, T, Q>(0)));
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		}
	};

#	if GLM_ARCH == GLM_ARCH_X86
<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType, bool Aligned>
	struct compute_sign<T, P, vecType, false, Aligned>
	{
		GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & x)
		{
			T const Shift(static_cast<T>(sizeof(T) * 8 - 1));
			vecType<T, P> const y(vecType<typename make_unsigned<T>::type, P>(-x) >> typename make_unsigned<T>::type(Shift));
=======
	template<length_t L, typename T, qualifier Q, bool Aligned>
	struct compute_sign<L, T, Q, false, Aligned>
	{
		GLM_FUNC_QUALIFIER static vec<L, T, Q> call(vec<L, T, Q> const& x)
		{
			T const Shift(static_cast<T>(sizeof(T) * 8 - 1));
			vec<L, T, Q> const y(vec<L, typename detail::make_unsigned<T>::type, Q>(-x) >> typename detail::make_unsigned<T>::type(Shift));
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

			return (x >> Shift) | y;
		}
	};
#	endif

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType, bool Aligned>
	struct compute_floor
	{
		GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & x)
		{
			return detail::functor1<T, T, P, vecType>::call(std::floor, x);
		}
	};

	template <typename T, precision P, template <typename, precision> class vecType, bool Aligned>
	struct compute_ceil
	{
		GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & x)
		{
			return detail::functor1<T, T, P, vecType>::call(std::ceil, x);
		}
	};

	template <typename T, precision P, template <typename, precision> class vecType, bool Aligned>
	struct compute_fract
	{
		GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & x)
=======
	template<length_t L, typename T, qualifier Q, bool Aligned>
	struct compute_floor
	{
		GLM_FUNC_QUALIFIER static vec<L, T, Q> call(vec<L, T, Q> const& x)
		{
			return detail::functor1<vec, L, T, T, Q>::call(std::floor, x);
		}
	};

	template<length_t L, typename T, qualifier Q, bool Aligned>
	struct compute_ceil
	{
		GLM_FUNC_QUALIFIER static vec<L, T, Q> call(vec<L, T, Q> const& x)
		{
			return detail::functor1<vec, L, T, T, Q>::call(std::ceil, x);
		}
	};

	template<length_t L, typename T, qualifier Q, bool Aligned>
	struct compute_fract
	{
		GLM_FUNC_QUALIFIER static vec<L, T, Q> call(vec<L, T, Q> const& x)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		{
			return x - floor(x);
		}
	};

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType, bool Aligned>
	struct compute_trunc
	{
		GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & x)
		{
			return detail::functor1<T, T, P, vecType>::call(trunc, x);
		}
	};

	template <typename T, precision P, template <typename, precision> class vecType, bool Aligned>
	struct compute_round
	{
		GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & x)
		{
			return detail::functor1<T, T, P, vecType>::call(round, x);
		}
	};

	template <typename T, precision P, template <typename, precision> class vecType, bool Aligned>
	struct compute_mod
	{
		GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & a, vecType<T, P> const & b)
=======
	template<length_t L, typename T, qualifier Q, bool Aligned>
	struct compute_trunc
	{
		GLM_FUNC_QUALIFIER static vec<L, T, Q> call(vec<L, T, Q> const& x)
		{
			return detail::functor1<vec, L, T, T, Q>::call(trunc, x);
		}
	};

	template<length_t L, typename T, qualifier Q, bool Aligned>
	struct compute_round
	{
		GLM_FUNC_QUALIFIER static vec<L, T, Q> call(vec<L, T, Q> const& x)
		{
			return detail::functor1<vec, L, T, T, Q>::call(round, x);
		}
	};

	template<length_t L, typename T, qualifier Q, bool Aligned>
	struct compute_mod
	{
		GLM_FUNC_QUALIFIER static vec<L, T, Q> call(vec<L, T, Q> const& a, vec<L, T, Q> const& b)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		{
			GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'mod' only accept floating-point inputs. Include <glm/gtc/integer.hpp> for integer inputs.");
			return a - b * floor(a / b);
		}
	};

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType, bool Aligned>
	struct compute_min_vector
	{
		GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & x, vecType<T, P> const & y)
		{
			return detail::functor2<T, P, vecType>::call(min, x, y);
		}
	};

	template <typename T, precision P, template <typename, precision> class vecType, bool Aligned>
	struct compute_max_vector
	{
		GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & x, vecType<T, P> const & y)
		{
			return detail::functor2<T, P, vecType>::call(max, x, y);
		}
	};

	template <typename T, precision P, template <typename, precision> class vecType, bool Aligned>
	struct compute_clamp_vector
	{
		GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & x, vecType<T, P> const & minVal, vecType<T, P> const & maxVal)
=======
	template<length_t L, typename T, qualifier Q, bool Aligned>
	struct compute_min_vector
	{
		GLM_FUNC_QUALIFIER static vec<L, T, Q> call(vec<L, T, Q> const& x, vec<L, T, Q> const& y)
		{
			return detail::functor2<vec, L, T, Q>::call(min, x, y);
		}
	};

	template<length_t L, typename T, qualifier Q, bool Aligned>
	struct compute_max_vector
	{
		GLM_FUNC_QUALIFIER static vec<L, T, Q> call(vec<L, T, Q> const& x, vec<L, T, Q> const& y)
		{
			return detail::functor2<vec, L, T, Q>::call(max, x, y);
		}
	};

	template<length_t L, typename T, qualifier Q, bool Aligned>
	struct compute_clamp_vector
	{
		GLM_FUNC_QUALIFIER static vec<L, T, Q> call(vec<L, T, Q> const& x, vec<L, T, Q> const& minVal, vec<L, T, Q> const& maxVal)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		{
			return min(max(x, minVal), maxVal);
		}
	};

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType, bool Aligned>
	struct compute_step_vector
	{
		GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & edge, vecType<T, P> const & x)
		{
			return mix(vecType<T, P>(1), vecType<T, P>(0), glm::lessThan(x, edge));
		}
	};

	template <typename T, precision P, template <typename, precision> class vecType, bool Aligned>
	struct compute_smoothstep_vector
	{
		GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & edge0, vecType<T, P> const & edge1, vecType<T, P> const & x)
		{
			GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || GLM_UNRESTRICTED_GENTYPE, "'step' only accept floating-point inputs");
			vecType<T, P> const tmp(clamp((x - edge0) / (edge1 - edge0), static_cast<T>(0), static_cast<T>(1)));
=======
	template<length_t L, typename T, qualifier Q, bool Aligned>
	struct compute_step_vector
	{
		GLM_FUNC_QUALIFIER static vec<L, T, Q> call(vec<L, T, Q> const& edge, vec<L, T, Q> const& x)
		{
			return mix(vec<L, T, Q>(1), vec<L, T, Q>(0), glm::lessThan(x, edge));
		}
	};

	template<length_t L, typename T, qualifier Q, bool Aligned>
	struct compute_smoothstep_vector
	{
		GLM_FUNC_QUALIFIER static vec<L, T, Q> call(vec<L, T, Q> const& edge0, vec<L, T, Q> const& edge1, vec<L, T, Q> const& x)
		{
			GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || GLM_CONFIG_UNRESTRICTED_GENTYPE, "'smoothstep' only accept floating-point inputs");
			vec<L, T, Q> const tmp(clamp((x - edge0) / (edge1 - edge0), static_cast<T>(0), static_cast<T>(1)));
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			return tmp * tmp * (static_cast<T>(3) - static_cast<T>(2) * tmp);
		}
	};
}//namespace detail

<<<<<<< HEAD
	template <typename genFIType>
	GLM_FUNC_QUALIFIER genFIType abs(genFIType x)
=======
	template<typename genFIType>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR genFIType abs(genFIType x)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return detail::compute_abs<genFIType, std::numeric_limits<genFIType>::is_signed>::call(x);
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> abs(vecType<T, P> const & x)
	{
		return detail::compute_abs_vector<T, P, vecType, detail::is_aligned<P>::value>::call(x);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> abs(vec<L, T, Q> const& x)
	{
		return detail::compute_abs_vector<L, T, Q, detail::is_aligned<Q>::value>::call(x);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	// sign
	// fast and works for any type
<<<<<<< HEAD
	template <typename genFIType> 
=======
	template<typename genFIType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_QUALIFIER genFIType sign(genFIType x)
	{
		GLM_STATIC_ASSERT(
			std::numeric_limits<genFIType>::is_iec559 || (std::numeric_limits<genFIType>::is_signed && std::numeric_limits<genFIType>::is_integer),
			"'sign' only accept signed inputs");
<<<<<<< HEAD
		
		return detail::compute_sign<genFIType, defaultp, tvec1, std::numeric_limits<genFIType>::is_iec559, highp>::call(tvec1<genFIType>(x)).x;
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> sign(vecType<T, P> const & x)
=======

		return detail::compute_sign<1, genFIType, defaultp,
                                    std::numeric_limits<genFIType>::is_iec559, detail::is_aligned<highp>::value>::call(vec<1, genFIType>(x)).x;
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> sign(vec<L, T, Q> const& x)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		GLM_STATIC_ASSERT(
			std::numeric_limits<T>::is_iec559 || (std::numeric_limits<T>::is_signed && std::numeric_limits<T>::is_integer),
			"'sign' only accept signed inputs");

<<<<<<< HEAD
		return detail::compute_sign<T, P, vecType, std::numeric_limits<T>::is_iec559, detail::is_aligned<P>::value>::call(x);
=======
		return detail::compute_sign<L, T, Q, std::numeric_limits<T>::is_iec559, detail::is_aligned<Q>::value>::call(x);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	// floor
	using ::std::floor;
<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> floor(vecType<T, P> const & x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'floor' only accept floating-point inputs.");
		return detail::compute_floor<T, P, vecType, detail::is_aligned<P>::value>::call(x);
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> trunc(vecType<T, P> const & x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'trunc' only accept floating-point inputs");
		return detail::compute_trunc<T, P, vecType, detail::is_aligned<P>::value>::call(x);
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> round(vecType<T, P> const & x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'round' only accept floating-point inputs");
		return detail::compute_round<T, P, vecType, detail::is_aligned<P>::value>::call(x);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> floor(vec<L, T, Q> const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'floor' only accept floating-point inputs.");
		return detail::compute_floor<L, T, Q, detail::is_aligned<Q>::value>::call(x);
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> trunc(vec<L, T, Q> const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'trunc' only accept floating-point inputs");
		return detail::compute_trunc<L, T, Q, detail::is_aligned<Q>::value>::call(x);
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> round(vec<L, T, Q> const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'round' only accept floating-point inputs");
		return detail::compute_round<L, T, Q, detail::is_aligned<Q>::value>::call(x);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

/*
	// roundEven
<<<<<<< HEAD
	template <typename genType>
=======
	template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_QUALIFIER genType roundEven(genType const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'roundEven' only accept floating-point inputs");

		return genType(int(x + genType(int(x) % 2)));
	}
*/

	// roundEven
<<<<<<< HEAD
	template <typename genType>
	GLM_FUNC_QUALIFIER genType roundEven(genType x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'roundEven' only accept floating-point inputs");
		
=======
	template<typename genType>
	GLM_FUNC_QUALIFIER genType roundEven(genType x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'roundEven' only accept floating-point inputs");

>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		int Integer = static_cast<int>(x);
		genType IntegerPart = static_cast<genType>(Integer);
		genType FractionalPart = fract(x);

		if(FractionalPart > static_cast<genType>(0.5) || FractionalPart < static_cast<genType>(0.5))
		{
			return round(x);
		}
		else if((Integer % 2) == 0)
		{
			return IntegerPart;
		}
<<<<<<< HEAD
		else if(x <= static_cast<genType>(0)) // Work around... 
=======
		else if(x <= static_cast<genType>(0)) // Work around...
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		{
			return IntegerPart - static_cast<genType>(1);
		}
		else
		{
			return IntegerPart + static_cast<genType>(1);
		}
		//else // Bug on MinGW 4.5.2
		//{
		//	return mix(IntegerPart + genType(-1), IntegerPart + genType(1), x <= genType(0));
		//}
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> roundEven(vecType<T, P> const & x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'roundEven' only accept floating-point inputs");
		return detail::functor1<T, T, P, vecType>::call(roundEven, x);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> roundEven(vec<L, T, Q> const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'roundEven' only accept floating-point inputs");
		return detail::functor1<vec, L, T, T, Q>::call(roundEven, x);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	// ceil
	using ::std::ceil;
<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> ceil(vecType<T, P> const & x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'ceil' only accept floating-point inputs");
		return detail::compute_ceil<T, P, vecType, detail::is_aligned<P>::value>::call(x);
	}

	// fract
	template <typename genType>
	GLM_FUNC_QUALIFIER genType fract(genType x)
	{
		return fract(tvec1<genType>(x)).x;
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> fract(vecType<T, P> const & x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'fract' only accept floating-point inputs");
		return detail::compute_fract<T, P, vecType, detail::is_aligned<P>::value>::call(x);
	}

	// mod
	template <typename genType>
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> ceil(vec<L, T, Q> const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'ceil' only accept floating-point inputs");
		return detail::compute_ceil<L, T, Q, detail::is_aligned<Q>::value>::call(x);
	}

	// fract
	template<typename genType>
	GLM_FUNC_QUALIFIER genType fract(genType x)
	{
		return fract(vec<1, genType>(x)).x;
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> fract(vec<L, T, Q> const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'fract' only accept floating-point inputs");
		return detail::compute_fract<L, T, Q, detail::is_aligned<Q>::value>::call(x);
	}

	// mod
	template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_QUALIFIER genType mod(genType x, genType y)
	{
#		if GLM_COMPILER & GLM_COMPILER_CUDA
			// Another Cuda compiler bug https://github.com/g-truc/glm/issues/530
<<<<<<< HEAD
			tvec1<genType, defaultp> Result(mod(tvec1<genType, defaultp>(x), y));
			return Result.x;
#		else
			return mod(tvec1<genType, defaultp>(x), y).x;
#		endif
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> mod(vecType<T, P> const & x, T y)
	{
		return detail::compute_mod<T, P, vecType, detail::is_aligned<P>::value>::call(x, vecType<T, P>(y));
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> mod(vecType<T, P> const & x, vecType<T, P> const & y)
	{
		return detail::compute_mod<T, P, vecType, detail::is_aligned<P>::value>::call(x, y);
	}

	// modf
	template <typename genType>
=======
			vec<1, genType, defaultp> Result(mod(vec<1, genType, defaultp>(x), y));
			return Result.x;
#		else
			return mod(vec<1, genType, defaultp>(x), y).x;
#		endif
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> mod(vec<L, T, Q> const& x, T y)
	{
		return detail::compute_mod<L, T, Q, detail::is_aligned<Q>::value>::call(x, vec<L, T, Q>(y));
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> mod(vec<L, T, Q> const& x, vec<L, T, Q> const& y)
	{
		return detail::compute_mod<L, T, Q, detail::is_aligned<Q>::value>::call(x, y);
	}

	// modf
	template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_QUALIFIER genType modf(genType x, genType & i)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'modf' only accept floating-point inputs");
		return std::modf(x, &i);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> modf(tvec1<T, P> const & x, tvec1<T, P> & i)
	{
		return tvec1<T, P>(
			modf(x.x, i.x));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> modf(tvec2<T, P> const & x, tvec2<T, P> & i)
	{
		return tvec2<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<1, T, Q> modf(vec<1, T, Q> const& x, vec<1, T, Q> & i)
	{
		return vec<1, T, Q>(
			modf(x.x, i.x));
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<2, T, Q> modf(vec<2, T, Q> const& x, vec<2, T, Q> & i)
	{
		return vec<2, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			modf(x.x, i.x),
			modf(x.y, i.y));
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> modf(tvec3<T, P> const & x, tvec3<T, P> & i)
	{
		return tvec3<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<3, T, Q> modf(vec<3, T, Q> const& x, vec<3, T, Q> & i)
	{
		return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			modf(x.x, i.x),
			modf(x.y, i.y),
			modf(x.z, i.z));
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> modf(tvec4<T, P> const & x, tvec4<T, P> & i)
	{
		return tvec4<T, P>(
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<4, T, Q> modf(vec<4, T, Q> const& x, vec<4, T, Q> & i)
	{
		return vec<4, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			modf(x.x, i.x),
			modf(x.y, i.y),
			modf(x.z, i.z),
			modf(x.w, i.w));
	}

	//// Only valid if (INT_MIN <= x-y <= INT_MAX)
	//// min(x,y)
	//r = y + ((x - y) & ((x - y) >> (sizeof(int) *
	//CHAR_BIT - 1)));
	//// max(x,y)
	//r = x - ((x - y) & ((x - y) >> (sizeof(int) *
	//CHAR_BIT - 1)));

	// min
<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> min(vecType<T, P> const & a, T b)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer || GLM_UNRESTRICTED_GENTYPE, "'min' only accept floating-point or integer inputs");
		return detail::compute_min_vector<T, P, vecType, detail::is_aligned<P>::value>::call(a, vecType<T, P>(b));
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> min(vecType<T, P> const & a, vecType<T, P> const & b)
	{
		return detail::compute_min_vector<T, P, vecType, detail::is_aligned<P>::value>::call(a, b);
	}

	// max
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> max(vecType<T, P> const & a, T b)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer || GLM_UNRESTRICTED_GENTYPE, "'max' only accept floating-point or integer inputs");
		return detail::compute_max_vector<T, P, vecType, detail::is_aligned<P>::value>::call(a, vecType<T, P>(b));
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> max(vecType<T, P> const & a, vecType<T, P> const & b)
	{
		return detail::compute_max_vector<T, P, vecType, detail::is_aligned<P>::value>::call(a, b);
	}

	// clamp
	template <typename genType>
	GLM_FUNC_QUALIFIER genType clamp(genType x, genType minVal, genType maxVal)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559 || std::numeric_limits<genType>::is_integer || GLM_UNRESTRICTED_GENTYPE, "'clamp' only accept floating-point or integer inputs");
		return min(max(x, minVal), maxVal);
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> clamp(vecType<T, P> const & x, T minVal, T maxVal)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer || GLM_UNRESTRICTED_GENTYPE, "'clamp' only accept floating-point or integer inputs");
		return detail::compute_clamp_vector<T, P, vecType, detail::is_aligned<P>::value>::call(x, vecType<T, P>(minVal), vecType<T, P>(maxVal));
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> clamp(vecType<T, P> const & x, vecType<T, P> const & minVal, vecType<T, P> const & maxVal)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer || GLM_UNRESTRICTED_GENTYPE, "'clamp' only accept floating-point or integer inputs");
		return detail::compute_clamp_vector<T, P, vecType, detail::is_aligned<P>::value>::call(x, minVal, maxVal);
	}

	template <typename genTypeT, typename genTypeU>
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> min(vec<L, T, Q> const& a, T b)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "'min' only accept floating-point or integer inputs");
		return detail::compute_min_vector<L, T, Q, detail::is_aligned<Q>::value>::call(a, vec<L, T, Q>(b));
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> min(vec<L, T, Q> const& a, vec<L, T, Q> const& b)
	{
		return detail::compute_min_vector<L, T, Q, detail::is_aligned<Q>::value>::call(a, b);
	}

	// max
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> max(vec<L, T, Q> const& a, T b)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "'max' only accept floating-point or integer inputs");
		return detail::compute_max_vector<L, T, Q, detail::is_aligned<Q>::value>::call(a, vec<L, T, Q>(b));
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> max(vec<L, T, Q> const& a, vec<L, T, Q> const& b)
	{
		return detail::compute_max_vector<L, T, Q, detail::is_aligned<Q>::value>::call(a, b);
	}

	// clamp
	template<typename genType>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR genType clamp(genType x, genType minVal, genType maxVal)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559 || std::numeric_limits<genType>::is_integer, "'clamp' only accept floating-point or integer inputs");
		return min(max(x, minVal), maxVal);
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> clamp(vec<L, T, Q> const& x, T minVal, T maxVal)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "'clamp' only accept floating-point or integer inputs");
		return detail::compute_clamp_vector<L, T, Q, detail::is_aligned<Q>::value>::call(x, vec<L, T, Q>(minVal), vec<L, T, Q>(maxVal));
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, T, Q> clamp(vec<L, T, Q> const& x, vec<L, T, Q> const& minVal, vec<L, T, Q> const& maxVal)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "'clamp' only accept floating-point or integer inputs");
		return detail::compute_clamp_vector<L, T, Q, detail::is_aligned<Q>::value>::call(x, minVal, maxVal);
	}

	template<typename genTypeT, typename genTypeU>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_QUALIFIER genTypeT mix(genTypeT x, genTypeT y, genTypeU a)
	{
		return detail::compute_mix<genTypeT, genTypeU>::call(x, y, a);
	}

<<<<<<< HEAD
	template <typename T, typename U, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> mix(vecType<T, P> const & x, vecType<T, P> const & y, U a)
	{
		return detail::compute_mix_scalar<T, U, P, vecType, detail::is_aligned<P>::value>::call(x, y, a);
	}
	
	template <typename T, typename U, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> mix(vecType<T, P> const & x, vecType<T, P> const & y, vecType<U, P> const & a)
	{
		return detail::compute_mix_vector<T, U, P, vecType, detail::is_aligned<P>::value>::call(x, y, a);
	}

	// step
	template <typename genType>
	GLM_FUNC_QUALIFIER genType step(genType edge, genType x)
	{
		return mix(static_cast<genType>(1), static_cast<genType>(0), glm::lessThan(x, edge));
	}

	template <template <typename, precision> class vecType, typename T, precision P>
	GLM_FUNC_QUALIFIER vecType<T, P> step(T edge, vecType<T, P> const & x)
	{
		return detail::compute_step_vector<T, P, vecType, detail::is_aligned<P>::value>::call(vecType<T, P>(edge), x);
	}

	template <template <typename, precision> class vecType, typename T, precision P>
	GLM_FUNC_QUALIFIER vecType<T, P> step(vecType<T, P> const & edge, vecType<T, P> const & x)
	{
		return detail::compute_step_vector<T, P, vecType, detail::is_aligned<P>::value>::call(edge, x);
	}

	// smoothstep
	template <typename genType>
	GLM_FUNC_QUALIFIER genType smoothstep(genType edge0, genType edge1, genType x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559 || GLM_UNRESTRICTED_GENTYPE, "'smoothstep' only accept floating-point inputs");
=======
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> mix(vec<L, T, Q> const& x, vec<L, T, Q> const& y, U a)
	{
		return detail::compute_mix_scalar<L, T, U, Q, detail::is_aligned<Q>::value>::call(x, y, a);
	}

	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> mix(vec<L, T, Q> const& x, vec<L, T, Q> const& y, vec<L, U, Q> const& a)
	{
		return detail::compute_mix_vector<L, T, U, Q, detail::is_aligned<Q>::value>::call(x, y, a);
	}

	// step
	template<typename genType>
	GLM_FUNC_QUALIFIER genType step(genType edge, genType x)
	{
		return mix(static_cast<genType>(1), static_cast<genType>(0), x < edge);
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> step(T edge, vec<L, T, Q> const& x)
	{
		return detail::compute_step_vector<L, T, Q, detail::is_aligned<Q>::value>::call(vec<L, T, Q>(edge), x);
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> step(vec<L, T, Q> const& edge, vec<L, T, Q> const& x)
	{
		return detail::compute_step_vector<L, T, Q, detail::is_aligned<Q>::value>::call(edge, x);
	}

	// smoothstep
	template<typename genType>
	GLM_FUNC_QUALIFIER genType smoothstep(genType edge0, genType edge1, genType x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559 || GLM_CONFIG_UNRESTRICTED_GENTYPE, "'smoothstep' only accept floating-point inputs");
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

		genType const tmp(clamp((x - edge0) / (edge1 - edge0), genType(0), genType(1)));
		return tmp * tmp * (genType(3) - genType(2) * tmp);
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> smoothstep(T edge0, T edge1, vecType<T, P> const & x)
	{
		return detail::compute_smoothstep_vector<T, P, vecType, detail::is_aligned<P>::value>::call(vecType<T, P>(edge0), vecType<T, P>(edge1), x);
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> smoothstep(vecType<T, P> const & edge0, vecType<T, P> const & edge1, vecType<T, P> const & x)
	{
		return detail::compute_smoothstep_vector<T, P, vecType, detail::is_aligned<P>::value>::call(edge0, edge1, x);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> smoothstep(T edge0, T edge1, vec<L, T, Q> const& x)
	{
		return detail::compute_smoothstep_vector<L, T, Q, detail::is_aligned<Q>::value>::call(vec<L, T, Q>(edge0), vec<L, T, Q>(edge1), x);
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> smoothstep(vec<L, T, Q> const& edge0, vec<L, T, Q> const& edge1, vec<L, T, Q> const& x)
	{
		return detail::compute_smoothstep_vector<L, T, Q, detail::is_aligned<Q>::value>::call(edge0, edge1, x);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

#	if GLM_HAS_CXX11_STL
		using std::isnan;
#	else
<<<<<<< HEAD
		template <typename genType> 
=======
		template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		GLM_FUNC_QUALIFIER bool isnan(genType x)
		{
			GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'isnan' only accept floating-point inputs");

#			if GLM_HAS_CXX11_STL
				return std::isnan(x);
#			elif GLM_COMPILER & GLM_COMPILER_VC
				return _isnan(x) != 0;
#			elif GLM_COMPILER & GLM_COMPILER_INTEL
#				if GLM_PLATFORM & GLM_PLATFORM_WINDOWS
					return _isnan(x) != 0;
#				else
					return ::isnan(x) != 0;
#				endif
#			elif (GLM_COMPILER & (GLM_COMPILER_GCC | GLM_COMPILER_CLANG)) && (GLM_PLATFORM & GLM_PLATFORM_ANDROID) && __cplusplus < 201103L
				return _isnan(x) != 0;
#			elif GLM_COMPILER & GLM_COMPILER_CUDA
<<<<<<< HEAD
				return isnan(x) != 0;
=======
				return ::isnan(x) != 0;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#			else
				return std::isnan(x);
#			endif
		}
#	endif

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<bool, P> isnan(vecType<T, P> const & x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'isnan' only accept floating-point inputs");

		return detail::functor1<bool, T, P, vecType>::call(isnan, x);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, bool, Q> isnan(vec<L, T, Q> const& v)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'isnan' only accept floating-point inputs");

		vec<L, bool, Q> Result;
		for (length_t l = 0; l < v.length(); ++l)
			Result[l] = glm::isnan(v[l]);
		return Result;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

#	if GLM_HAS_CXX11_STL
		using std::isinf;
#	else
<<<<<<< HEAD
		template <typename genType> 
=======
		template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		GLM_FUNC_QUALIFIER bool isinf(genType x)
		{
			GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'isinf' only accept floating-point inputs");

#			if GLM_HAS_CXX11_STL
				return std::isinf(x);
#			elif GLM_COMPILER & (GLM_COMPILER_INTEL | GLM_COMPILER_VC)
#				if(GLM_PLATFORM & GLM_PLATFORM_WINDOWS)
					return _fpclass(x) == _FPCLASS_NINF || _fpclass(x) == _FPCLASS_PINF;
#				else
					return ::isinf(x);
#				endif
#			elif GLM_COMPILER & (GLM_COMPILER_GCC | GLM_COMPILER_CLANG)
#				if(GLM_PLATFORM & GLM_PLATFORM_ANDROID && __cplusplus < 201103L)
					return _isinf(x) != 0;
#				else
					return std::isinf(x);
#				endif
#			elif GLM_COMPILER & GLM_COMPILER_CUDA
				// http://developer.download.nvidia.com/compute/cuda/4_2/rel/toolkit/docs/online/group__CUDA__MATH__DOUBLE_g13431dd2b40b51f9139cbb7f50c18fab.html#g13431dd2b40b51f9139cbb7f50c18fab
<<<<<<< HEAD
				return isinf(double(x)) != 0;
=======
				return ::isinf(double(x)) != 0;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#			else
				return std::isinf(x);
#			endif
	}
#	endif

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<bool, P> isinf(vecType<T, P> const & x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'isnan' only accept floating-point inputs");

		return detail::functor1<bool, T, P, vecType>::call(isinf, x);
	}

	GLM_FUNC_QUALIFIER int floatBitsToInt(float const & v)
	{
		return reinterpret_cast<int&>(const_cast<float&>(v));
	}

	template <template <typename, precision> class vecType, precision P>
	GLM_FUNC_QUALIFIER vecType<int, P> floatBitsToInt(vecType<float, P> const & v)
	{
		return reinterpret_cast<vecType<int, P>&>(const_cast<vecType<float, P>&>(v));
	}

	GLM_FUNC_QUALIFIER uint floatBitsToUint(float const & v)
	{
		return reinterpret_cast<uint&>(const_cast<float&>(v));
	}

	template <template <typename, precision> class vecType, precision P>
	GLM_FUNC_QUALIFIER vecType<uint, P> floatBitsToUint(vecType<float, P> const & v)
	{
		return reinterpret_cast<vecType<uint, P>&>(const_cast<vecType<float, P>&>(v));
	}

	GLM_FUNC_QUALIFIER float intBitsToFloat(int const & v)
	{
		return reinterpret_cast<float&>(const_cast<int&>(v));
	}

	template <template <typename, precision> class vecType, precision P>
	GLM_FUNC_QUALIFIER vecType<float, P> intBitsToFloat(vecType<int, P> const & v)
	{
		return reinterpret_cast<vecType<float, P>&>(const_cast<vecType<int, P>&>(v));
	}

	GLM_FUNC_QUALIFIER float uintBitsToFloat(uint const & v)
	{
		return reinterpret_cast<float&>(const_cast<uint&>(v));
	}

	template <template <typename, precision> class vecType, precision P>
	GLM_FUNC_QUALIFIER vecType<float, P> uintBitsToFloat(vecType<uint, P> const & v)
	{
		return reinterpret_cast<vecType<float, P>&>(const_cast<vecType<uint, P>&>(v));
	}
	
	template <typename genType>
	GLM_FUNC_QUALIFIER genType fma(genType const & a, genType const & b, genType const & c)
	{
		return a * b + c;
	}

	template <typename genType>
	GLM_FUNC_QUALIFIER genType frexp(genType x, int & exp)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559 || GLM_UNRESTRICTED_GENTYPE, "'frexp' only accept floating-point inputs");
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, bool, Q> isinf(vec<L, T, Q> const& v)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'isinf' only accept floating-point inputs");

		vec<L, bool, Q> Result;
		for (length_t l = 0; l < v.length(); ++l)
			Result[l] = glm::isinf(v[l]);
		return Result;
	}

	GLM_FUNC_QUALIFIER int floatBitsToInt(float const& v)
	{
		union
		{
			float in;
			int out;
		} u;

		u.in = v;

		return u.out;
	}

	template<length_t L, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, int, Q> floatBitsToInt(vec<L, float, Q> const& v)
	{
		return reinterpret_cast<vec<L, int, Q>&>(const_cast<vec<L, float, Q>&>(v));
	}

	GLM_FUNC_QUALIFIER uint floatBitsToUint(float const& v)
	{
		union
		{
			float in;
			uint out;
		} u;

		u.in = v;

		return u.out;
	}

	template<length_t L, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, uint, Q> floatBitsToUint(vec<L, float, Q> const& v)
	{
		return reinterpret_cast<vec<L, uint, Q>&>(const_cast<vec<L, float, Q>&>(v));
	}

	GLM_FUNC_QUALIFIER float intBitsToFloat(int const& v)
	{
		union
		{
			int in;
			float out;
		} u;

		u.in = v;

		return u.out;
	}

	template<length_t L, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, float, Q> intBitsToFloat(vec<L, int, Q> const& v)
	{
		return reinterpret_cast<vec<L, float, Q>&>(const_cast<vec<L, int, Q>&>(v));
	}

	GLM_FUNC_QUALIFIER float uintBitsToFloat(uint const& v)
	{
		union
		{
			uint in;
			float out;
		} u;

		u.in = v;

		return u.out;
	}

	template<length_t L, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, float, Q> uintBitsToFloat(vec<L, uint, Q> const& v)
	{
		return reinterpret_cast<vec<L, float, Q>&>(const_cast<vec<L, uint, Q>&>(v));
	}

#	if GLM_HAS_CXX11_STL
		using std::fma;
#	else
		template<typename genType>
		GLM_FUNC_QUALIFIER genType fma(genType const& a, genType const& b, genType const& c)
		{
			return a * b + c;
		}
#	endif

	template<typename genType>
	GLM_FUNC_QUALIFIER genType frexp(genType x, int& exp)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'frexp' only accept floating-point inputs");
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

		return std::frexp(x, &exp);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> frexp(tvec1<T, P> const & x, tvec1<int, P> & exp)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || GLM_UNRESTRICTED_GENTYPE, "'frexp' only accept floating-point inputs");

		return tvec1<T, P>(std::frexp(x.x, &exp.x));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> frexp(tvec2<T, P> const & x, tvec2<int, P> & exp)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || GLM_UNRESTRICTED_GENTYPE, "'frexp' only accept floating-point inputs");

		return tvec2<T, P>(
			frexp(x.x, exp.x),
			frexp(x.y, exp.y));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> frexp(tvec3<T, P> const & x, tvec3<int, P> & exp)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || GLM_UNRESTRICTED_GENTYPE, "'frexp' only accept floating-point inputs");

		return tvec3<T, P>(
			frexp(x.x, exp.x),
			frexp(x.y, exp.y),
			frexp(x.z, exp.z));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> frexp(tvec4<T, P> const & x, tvec4<int, P> & exp)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || GLM_UNRESTRICTED_GENTYPE, "'frexp' only accept floating-point inputs");

		return tvec4<T, P>(
			frexp(x.x, exp.x),
			frexp(x.y, exp.y),
			frexp(x.z, exp.z),
			frexp(x.w, exp.w));
	}

	template <typename genType>
	GLM_FUNC_QUALIFIER genType ldexp(genType const & x, int const & exp)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559 || GLM_UNRESTRICTED_GENTYPE, "'ldexp' only accept floating-point inputs");
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> frexp(vec<L, T, Q> const& v, vec<L, int, Q>& exp)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'frexp' only accept floating-point inputs");

		vec<L, T, Q> Result;
		for (length_t l = 0; l < v.length(); ++l)
			Result[l] = std::frexp(v[l], &exp[l]);
		return Result;
	}

	template<typename genType>
	GLM_FUNC_QUALIFIER genType ldexp(genType const& x, int const& exp)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'ldexp' only accept floating-point inputs");
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

		return std::ldexp(x, exp);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec1<T, P> ldexp(tvec1<T, P> const & x, tvec1<int, P> const & exp)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || GLM_UNRESTRICTED_GENTYPE, "'ldexp' only accept floating-point inputs");

		return tvec1<T, P>(
			ldexp(x.x, exp.x));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<T, P> ldexp(tvec2<T, P> const & x, tvec2<int, P> const & exp)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || GLM_UNRESTRICTED_GENTYPE, "'ldexp' only accept floating-point inputs");

		return tvec2<T, P>(
			ldexp(x.x, exp.x),
			ldexp(x.y, exp.y));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> ldexp(tvec3<T, P> const & x, tvec3<int, P> const & exp)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || GLM_UNRESTRICTED_GENTYPE, "'ldexp' only accept floating-point inputs");

		return tvec3<T, P>(
			ldexp(x.x, exp.x),
			ldexp(x.y, exp.y),
			ldexp(x.z, exp.z));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> ldexp(tvec4<T, P> const & x, tvec4<int, P> const & exp)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || GLM_UNRESTRICTED_GENTYPE, "'ldexp' only accept floating-point inputs");

		return tvec4<T, P>(
			ldexp(x.x, exp.x),
			ldexp(x.y, exp.y),
			ldexp(x.z, exp.z),
			ldexp(x.w, exp.w));
	}
}//namespace glm

#if GLM_ARCH != GLM_ARCH_PURE && GLM_HAS_UNRESTRICTED_UNIONS
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> ldexp(vec<L, T, Q> const& v, vec<L, int, Q> const& exp)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'ldexp' only accept floating-point inputs");

		vec<L, T, Q> Result;
		for (length_t l = 0; l < v.length(); ++l)
			Result[l] = std::ldexp(v[l], exp[l]);
		return Result;
	}
}//namespace glm

#if GLM_CONFIG_SIMD == GLM_ENABLE
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#	include "func_common_simd.inl"
#endif
