/// @ref gtx_fast_square_root
<<<<<<< HEAD
/// @file glm/gtx/fast_square_root.inl
=======
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

namespace glm
{
	// fastSqrt
<<<<<<< HEAD
	template <typename genType>
=======
	template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_QUALIFIER genType fastSqrt(genType x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'fastSqrt' only accept floating-point input");

		return genType(1) / fastInverseSqrt(x);
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> fastSqrt(vecType<T, P> const & x)
	{
		return detail::functor1<T, T, P, vecType>::call(fastSqrt, x);
	}

	// fastInversesqrt
	template <typename genType>
	GLM_FUNC_QUALIFIER genType fastInverseSqrt(genType x)
	{
#		ifdef __CUDACC__ // Wordaround for a CUDA compiler bug up to CUDA6
			tvec1<T, P> tmp(detail::compute_inversesqrt<tvec1, genType, lowp, detail::is_aligned<lowp>::value>::call(tvec1<genType, lowp>(x)));
			return tmp.x;
#		else
			return detail::compute_inversesqrt<tvec1, genType, highp, detail::is_aligned<highp>::value>::call(tvec1<genType, lowp>(x)).x;
#		endif
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> fastInverseSqrt(vecType<T, P> const & x)
	{
		return detail::compute_inversesqrt<vecType, T, P, detail::is_aligned<P>::value>::call(x);
	}

	// fastLength
	template <typename genType>
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> fastSqrt(vec<L, T, Q> const& x)
	{
		return detail::functor1<vec, L, T, T, Q>::call(fastSqrt, x);
	}

	// fastInversesqrt
	template<typename genType>
	GLM_FUNC_QUALIFIER genType fastInverseSqrt(genType x)
	{
		return detail::compute_inversesqrt<1, genType, lowp, detail::is_aligned<lowp>::value>::call(vec<1, genType, lowp>(x)).x;
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> fastInverseSqrt(vec<L, T, Q> const& x)
	{
		return detail::compute_inversesqrt<L, T, Q, detail::is_aligned<Q>::value>::call(x);
	}

	// fastLength
	template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_QUALIFIER genType fastLength(genType x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'fastLength' only accept floating-point inputs");

		return abs(x);
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER T fastLength(vecType<T, P> const & x)
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T fastLength(vec<L, T, Q> const& x)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'fastLength' only accept floating-point inputs");

		return fastSqrt(dot(x, x));
	}

	// fastDistance
<<<<<<< HEAD
	template <typename genType>
=======
	template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_QUALIFIER genType fastDistance(genType x, genType y)
	{
		return fastLength(y - x);
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER T fastDistance(vecType<T, P> const & x, vecType<T, P> const & y)
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T fastDistance(vec<L, T, Q> const& x, vec<L, T, Q> const& y)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return fastLength(y - x);
	}

	// fastNormalize
<<<<<<< HEAD
	template <typename genType>
=======
	template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_QUALIFIER genType fastNormalize(genType x)
	{
		return x > genType(0) ? genType(1) : -genType(1);
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> fastNormalize(vecType<T, P> const & x)
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> fastNormalize(vec<L, T, Q> const& x)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return x * fastInverseSqrt(dot(x, x));
	}
}//namespace glm
