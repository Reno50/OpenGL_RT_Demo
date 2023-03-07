/// @ref gtx_bit
<<<<<<< HEAD
/// @file glm/gtx/bit.inl
=======
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

namespace glm
{
	///////////////////
	// highestBitValue

<<<<<<< HEAD
	template <typename genIUType>
=======
	template<typename genIUType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_QUALIFIER genIUType highestBitValue(genIUType Value)
	{
		genIUType tmp = Value;
		genIUType result = genIUType(0);
		while(tmp)
		{
			result = (tmp & (~tmp + 1)); // grab lowest bit
			tmp &= ~result; // clear lowest bit
		}
		return result;
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> highestBitValue(vecType<T, P> const & v)
	{
		return detail::functor1<T, T, P, vecType>::call(highestBitValue, v);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> highestBitValue(vec<L, T, Q> const& v)
	{
		return detail::functor1<vec, L, T, T, Q>::call(highestBitValue, v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	///////////////////
	// lowestBitValue

<<<<<<< HEAD
	template <typename genIUType>
=======
	template<typename genIUType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_QUALIFIER genIUType lowestBitValue(genIUType Value)
	{
		return (Value & (~Value + 1));
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> lowestBitValue(vecType<T, P> const & v)
	{
		return detail::functor1<T, T, P, vecType>::call(lowestBitValue, v);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> lowestBitValue(vec<L, T, Q> const& v)
	{
		return detail::functor1<vec, L, T, T, Q>::call(lowestBitValue, v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	///////////////////
	// powerOfTwoAbove

<<<<<<< HEAD
	template <typename genType>
=======
	template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_QUALIFIER genType powerOfTwoAbove(genType value)
	{
		return isPowerOfTwo(value) ? value : highestBitValue(value) << 1;
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> powerOfTwoAbove(vecType<T, P> const & v)
	{
		return detail::functor1<T, T, P, vecType>::call(powerOfTwoAbove, v);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> powerOfTwoAbove(vec<L, T, Q> const& v)
	{
		return detail::functor1<vec, L, T, T, Q>::call(powerOfTwoAbove, v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	///////////////////
	// powerOfTwoBelow

<<<<<<< HEAD
	template <typename genType>
=======
	template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_QUALIFIER genType powerOfTwoBelow(genType value)
	{
		return isPowerOfTwo(value) ? value : highestBitValue(value);
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> powerOfTwoBelow(vecType<T, P> const & v)
	{
		return detail::functor1<T, T, P, vecType>::call(powerOfTwoBelow, v);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> powerOfTwoBelow(vec<L, T, Q> const& v)
	{
		return detail::functor1<vec, L, T, T, Q>::call(powerOfTwoBelow, v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

	/////////////////////
	// powerOfTwoNearest

<<<<<<< HEAD
	template <typename genType>
=======
	template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_QUALIFIER genType powerOfTwoNearest(genType value)
	{
		if(isPowerOfTwo(value))
			return value;

		genType const prev = highestBitValue(value);
		genType const next = prev << 1;
		return (next - value) < (value - prev) ? next : prev;
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> powerOfTwoNearest(vecType<T, P> const & v)
	{
		return detail::functor1<T, T, P, vecType>::call(powerOfTwoNearest, v);
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> powerOfTwoNearest(vec<L, T, Q> const& v)
	{
		return detail::functor1<vec, L, T, T, Q>::call(powerOfTwoNearest, v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

}//namespace glm
