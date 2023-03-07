/// @ref gtx_common
<<<<<<< HEAD
/// @file glm/gtx/common.inl

#include <cmath>
=======

#include <cmath>
#include "../gtc/epsilon.hpp"
#include "../gtc/constants.hpp"
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

namespace glm{
namespace detail
{
<<<<<<< HEAD
	template <typename T, precision P, template <class, precision> class vecType, bool isFloat = true>
	struct compute_fmod
	{
		GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & a, vecType<T, P> const & b)
		{
			return detail::functor2<T, P, vecType>::call(std::fmod, a, b);
		}
	};

	template <typename T, precision P, template <class, precision> class vecType>
	struct compute_fmod<T, P, vecType, false>
	{
		GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & a, vecType<T, P> const & b)
=======
	template<length_t L, typename T, qualifier Q, bool isFloat = true>
	struct compute_fmod
	{
		GLM_FUNC_QUALIFIER static vec<L, T, Q> call(vec<L, T, Q> const& a, vec<L, T, Q> const& b)
		{
			return detail::functor2<vec, L, T, Q>::call(std::fmod, a, b);
		}
	};

	template<length_t L, typename T, qualifier Q>
	struct compute_fmod<L, T, Q, false>
	{
		GLM_FUNC_QUALIFIER static vec<L, T, Q> call(vec<L, T, Q> const& a, vec<L, T, Q> const& b)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		{
			return a % b;
		}
	};
}//namespace detail

<<<<<<< HEAD
	template <typename T> 
	GLM_FUNC_QUALIFIER bool isdenormal(T const & x)
=======
	template<typename T>
	GLM_FUNC_QUALIFIER bool isdenormal(T const& x)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'isdenormal' only accept floating-point inputs");

#		if GLM_HAS_CXX11_STL
			return std::fpclassify(x) == FP_SUBNORMAL;
#		else
<<<<<<< HEAD
			return x != static_cast<T>(0) && std::fabs(x) < std::numeric_limits<T>::min();
#		endif
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER typename tvec1<T, P>::bool_type isdenormal
	(
		tvec1<T, P> const & x
=======
			return epsilonNotEqual(x, static_cast<T>(0), epsilon<T>()) && std::fabs(x) < std::numeric_limits<T>::min();
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER typename vec<1, T, Q>::bool_type isdenormal
	(
		vec<1, T, Q> const& x
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'isdenormal' only accept floating-point inputs");

<<<<<<< HEAD
		return typename tvec1<T, P>::bool_type(
			isdenormal(x.x));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER typename tvec2<T, P>::bool_type isdenormal
	(
		tvec2<T, P> const & x
=======
		return typename vec<1, T, Q>::bool_type(
			isdenormal(x.x));
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER typename vec<2, T, Q>::bool_type isdenormal
	(
		vec<2, T, Q> const& x
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'isdenormal' only accept floating-point inputs");

<<<<<<< HEAD
		return typename tvec2<T, P>::bool_type(
=======
		return typename vec<2, T, Q>::bool_type(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			isdenormal(x.x),
			isdenormal(x.y));
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER typename tvec3<T, P>::bool_type isdenormal
	(
		tvec3<T, P> const & x
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER typename vec<3, T, Q>::bool_type isdenormal
	(
		vec<3, T, Q> const& x
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'isdenormal' only accept floating-point inputs");

<<<<<<< HEAD
		return typename tvec3<T, P>::bool_type(
=======
		return typename vec<3, T, Q>::bool_type(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			isdenormal(x.x),
			isdenormal(x.y),
			isdenormal(x.z));
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER typename tvec4<T, P>::bool_type isdenormal
	(
		tvec4<T, P> const & x
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER typename vec<4, T, Q>::bool_type isdenormal
	(
		vec<4, T, Q> const& x
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'isdenormal' only accept floating-point inputs");

<<<<<<< HEAD
		return typename tvec4<T, P>::bool_type(
=======
		return typename vec<4, T, Q>::bool_type(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			isdenormal(x.x),
			isdenormal(x.y),
			isdenormal(x.z),
			isdenormal(x.w));
	}

	// fmod
<<<<<<< HEAD
	template <typename genType>
	GLM_FUNC_QUALIFIER genType fmod(genType x, genType y)
	{
		return fmod(tvec1<genType>(x), y).x;
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> fmod(vecType<T, P> const & x, T y)
	{
		return detail::compute_fmod<T, P, vecType, std::numeric_limits<T>::is_iec559>::call(x, vecType<T, P>(y));
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> fmod(vecType<T, P> const & x, vecType<T, P> const & y)
	{
		return detail::compute_fmod<T, P, vecType, std::numeric_limits<T>::is_iec559>::call(x, y);
=======
	template<typename genType>
	GLM_FUNC_QUALIFIER genType fmod(genType x, genType y)
	{
		return fmod(vec<1, genType>(x), y).x;
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> fmod(vec<L, T, Q> const& x, T y)
	{
		return detail::compute_fmod<L, T, Q, std::numeric_limits<T>::is_iec559>::call(x, vec<L, T, Q>(y));
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> fmod(vec<L, T, Q> const& x, vec<L, T, Q> const& y)
	{
		return detail::compute_fmod<L, T, Q, std::numeric_limits<T>::is_iec559>::call(x, y);
	}

	template <length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, bool, Q> openBounded(vec<L, T, Q> const& Value, vec<L, T, Q> const& Min, vec<L, T, Q> const& Max)
	{
		return greaterThan(Value, Min) && lessThan(Value, Max);
	}

	template <length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, bool, Q> closeBounded(vec<L, T, Q> const& Value, vec<L, T, Q> const& Min, vec<L, T, Q> const& Max)
	{
		return greaterThanEqual(Value, Min) && lessThanEqual(Value, Max);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}
}//namespace glm
