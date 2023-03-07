/// @ref gtx_norm
<<<<<<< HEAD
/// @file glm/gtx/norm.inl

#include "../detail/precision.hpp"
=======

#include "../detail/qualifier.hpp"
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

namespace glm{
namespace detail
{
<<<<<<< HEAD
	template <template <typename, precision> class vecType, typename T, precision P, bool Aligned>
	struct compute_length2
	{
		GLM_FUNC_QUALIFIER static T call(vecType<T, P> const & v)
=======
	template<length_t L, typename T, qualifier Q, bool Aligned>
	struct compute_length2
	{
		GLM_FUNC_QUALIFIER static T call(vec<L, T, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		{
			return dot(v, v);
		}
	};
}//namespace detail

<<<<<<< HEAD
	template <typename genType>
=======
	template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_QUALIFIER genType length2(genType x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'length2' accepts only floating-point inputs");
		return x * x;
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER T length2(vecType<T, P> const & v)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'length2' accepts only floating-point inputs");
		return detail::compute_length2<vecType, T, P, detail::is_aligned<P>::value>::call(v);
	}

	template <typename T>
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T length2(vec<L, T, Q> const& v)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'length2' accepts only floating-point inputs");
		return detail::compute_length2<L, T, Q, detail::is_aligned<Q>::value>::call(v);
	}

	template<typename T>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_QUALIFIER T distance2(T p0, T p1)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'distance2' accepts only floating-point inputs");
		return length2(p1 - p0);
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER T distance2(vecType<T, P> const & p0, vecType<T, P> const & p1)
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T distance2(vec<L, T, Q> const& p0, vec<L, T, Q> const& p1)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'distance2' accepts only floating-point inputs");
		return length2(p1 - p0);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T l1Norm
	(
		tvec3<T, P> const & a,
		tvec3<T, P> const & b
	)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T l1Norm(vec<3, T, Q> const& a, vec<3, T, Q> const& b)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return abs(b.x - a.x) + abs(b.y - a.y) + abs(b.z - a.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T l1Norm
	(
		tvec3<T, P> const & v
	)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T l1Norm(vec<3, T, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return abs(v.x) + abs(v.y) + abs(v.z);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T l2Norm
	(
		tvec3<T, P> const & a,
		tvec3<T, P> const & b
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T l2Norm(vec<3, T, Q> const& a, vec<3, T, Q> const& b
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	)
	{
		return length(b - a);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T l2Norm
	(
		tvec3<T, P> const & v
	)
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T l2Norm(vec<3, T, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return length(v);
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T lxNorm
	(
		tvec3<T, P> const & x,
		tvec3<T, P> const & y,
		unsigned int Depth
	)
	{
		return pow(pow(y.x - x.x, T(Depth)) + pow(y.y - x.y, T(Depth)) + pow(y.z - x.z, T(Depth)), T(1) / T(Depth));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T lxNorm
	(
		tvec3<T, P> const & v,
		unsigned int Depth
	)
	{
		return pow(pow(v.x, T(Depth)) + pow(v.y, T(Depth)) + pow(v.z, T(Depth)), T(1) / T(Depth));
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T lxNorm(vec<3, T, Q> const& x, vec<3, T, Q> const& y, unsigned int Depth)
	{
		return pow(pow(abs(y.x - x.x), T(Depth)) + pow(abs(y.y - x.y), T(Depth)) + pow(abs(y.z - x.z), T(Depth)), T(1) / T(Depth));
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T lxNorm(vec<3, T, Q> const& v, unsigned int Depth)
	{
		return pow(pow(abs(v.x), T(Depth)) + pow(abs(v.y), T(Depth)) + pow(abs(v.z), T(Depth)), T(1) / T(Depth));
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T lMaxNorm(vec<3, T, Q> const& a, vec<3, T, Q> const& b)
	{
		return compMax(abs(b - a));
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T lMaxNorm(vec<3, T, Q> const& v)
	{
		return compMax(abs(v));
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

}//namespace glm
