/// @ref gtc_integer
<<<<<<< HEAD
/// @file glm/gtc/integer.inl
=======
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

namespace glm{
namespace detail
{
<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType, bool Aligned>
	struct compute_log2<T, P, vecType, false, Aligned>
	{
		GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & vec)
		{
			//Equivalent to return findMSB(vec); but save one function call in ASM with VC
			//return findMSB(vec);
			return vecType<T, P>(detail::compute_findMSB_vec<T, P, vecType, sizeof(T) * 8>::call(vec));
=======
	template<length_t L, typename T, qualifier Q, bool Aligned>
	struct compute_log2<L, T, Q, false, Aligned>
	{
		GLM_FUNC_QUALIFIER static vec<L, T, Q> call(vec<L, T, Q> const& v)
		{
			//Equivalent to return findMSB(vec); but save one function call in ASM with VC
			//return findMSB(vec);
			return vec<L, T, Q>(detail::compute_findMSB_vec<L, T, Q, sizeof(T) * 8>::call(v));
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		}
	};

#	if GLM_HAS_BITSCAN_WINDOWS
<<<<<<< HEAD
		template <precision P, bool Aligned>
		struct compute_log2<int, P, tvec4, false, Aligned>
		{
			GLM_FUNC_QUALIFIER static tvec4<int, P> call(tvec4<int, P> const & vec)
			{
				tvec4<int, P> Result(glm::uninitialize);

				_BitScanReverse(reinterpret_cast<unsigned long*>(&Result.x), vec.x);
				_BitScanReverse(reinterpret_cast<unsigned long*>(&Result.y), vec.y);
				_BitScanReverse(reinterpret_cast<unsigned long*>(&Result.z), vec.z);
				_BitScanReverse(reinterpret_cast<unsigned long*>(&Result.w), vec.w);

=======
		template<qualifier Q, bool Aligned>
		struct compute_log2<4, int, Q, false, Aligned>
		{
			GLM_FUNC_QUALIFIER static vec<4, int, Q> call(vec<4, int, Q> const& v)
			{
				vec<4, int, Q> Result;
				_BitScanReverse(reinterpret_cast<unsigned long*>(&Result.x), v.x);
				_BitScanReverse(reinterpret_cast<unsigned long*>(&Result.y), v.y);
				_BitScanReverse(reinterpret_cast<unsigned long*>(&Result.z), v.z);
				_BitScanReverse(reinterpret_cast<unsigned long*>(&Result.w), v.w);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
				return Result;
			}
		};
#	endif//GLM_HAS_BITSCAN_WINDOWS
}//namespace detail
<<<<<<< HEAD
	template <typename genType>
=======
	template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_QUALIFIER int iround(genType x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'iround' only accept floating-point inputs");
		assert(static_cast<genType>(0.0) <= x);

		return static_cast<int>(x + static_cast<genType>(0.5));
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<int, P> iround(vecType<T, P> const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'iround' only accept floating-point inputs");
		assert(all(lessThanEqual(vecType<T, P>(0), x)));

		return vecType<int, P>(x + static_cast<T>(0.5));
	}

	template <typename genType>
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, int, Q> iround(vec<L, T, Q> const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'iround' only accept floating-point inputs");
		assert(all(lessThanEqual(vec<L, T, Q>(0), x)));

		return vec<L, int, Q>(x + static_cast<T>(0.5));
	}

	template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_QUALIFIER uint uround(genType x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'uround' only accept floating-point inputs");
		assert(static_cast<genType>(0.0) <= x);

		return static_cast<uint>(x + static_cast<genType>(0.5));
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<uint, P> uround(vecType<T, P> const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'uround' only accept floating-point inputs");
		assert(all(lessThanEqual(vecType<T, P>(0), x)));

		return vecType<uint, P>(x + static_cast<T>(0.5));
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, uint, Q> uround(vec<L, T, Q> const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'uround' only accept floating-point inputs");
		assert(all(lessThanEqual(vec<L, T, Q>(0), x)));

		return vec<L, uint, Q>(x + static_cast<T>(0.5));
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}
}//namespace glm
