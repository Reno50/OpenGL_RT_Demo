<<<<<<< HEAD
/// @ref core
/// @file glm/detail/func_vector_relational.inl

#include <limits>

namespace glm
{
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<bool, P> lessThan(vecType<T, P> const & x, vecType<T, P> const & y)
	{
		assert(x.length() == y.length());

		vecType<bool, P> Result(uninitialize);
		for(length_t i = 0; i < x.length(); ++i)
			Result[i] = x[i] < y[i];

		return Result;
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<bool, P> lessThanEqual(vecType<T, P> const & x, vecType<T, P> const & y)
	{
		assert(x.length() == y.length());

		vecType<bool, P> Result(uninitialize);
		for(length_t i = 0; i < x.length(); ++i)
=======
namespace glm
{
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> lessThan(vec<L, T, Q> const& x, vec<L, T, Q> const& y)
	{
		vec<L, bool, Q> Result(true);
		for(length_t i = 0; i < L; ++i)
			Result[i] = x[i] < y[i];
		return Result;
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> lessThanEqual(vec<L, T, Q> const& x, vec<L, T, Q> const& y)
	{
		vec<L, bool, Q> Result(true);
		for(length_t i = 0; i < L; ++i)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			Result[i] = x[i] <= y[i];
		return Result;
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<bool, P> greaterThan(vecType<T, P> const & x, vecType<T, P> const & y)
	{
		assert(x.length() == y.length());

		vecType<bool, P> Result(uninitialize);
		for(length_t i = 0; i < x.length(); ++i)
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> greaterThan(vec<L, T, Q> const& x, vec<L, T, Q> const& y)
	{
		vec<L, bool, Q> Result(true);
		for(length_t i = 0; i < L; ++i)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			Result[i] = x[i] > y[i];
		return Result;
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<bool, P> greaterThanEqual(vecType<T, P> const & x, vecType<T, P> const & y)
	{
		assert(x.length() == y.length());

		vecType<bool, P> Result(uninitialize);
		for(length_t i = 0; i < x.length(); ++i)
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> greaterThanEqual(vec<L, T, Q> const& x, vec<L, T, Q> const& y)
	{
		vec<L, bool, Q> Result(true);
		for(length_t i = 0; i < L; ++i)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			Result[i] = x[i] >= y[i];
		return Result;
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<bool, P> equal(vecType<T, P> const & x, vecType<T, P> const & y)
	{
		assert(x.length() == y.length());

		vecType<bool, P> Result(uninitialize);
		for(length_t i = 0; i < x.length(); ++i)
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> equal(vec<L, T, Q> const& x, vec<L, T, Q> const& y)
	{
		vec<L, bool, Q> Result(true);
		for(length_t i = 0; i < L; ++i)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			Result[i] = x[i] == y[i];
		return Result;
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<bool, P> notEqual(vecType<T, P> const & x, vecType<T, P> const & y)
	{
		assert(x.length() == y.length());

		vecType<bool, P> Result(uninitialize);
		for(length_t i = 0; i < x.length(); ++i)
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> notEqual(vec<L, T, Q> const& x, vec<L, T, Q> const& y)
	{
		vec<L, bool, Q> Result(true);
		for(length_t i = 0; i < L; ++i)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			Result[i] = x[i] != y[i];
		return Result;
	}

<<<<<<< HEAD
	template <precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER bool any(vecType<bool, P> const & v)
	{
		bool Result = false;
		for(length_t i = 0; i < v.length(); ++i)
=======
	template<length_t L, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR bool any(vec<L, bool, Q> const& v)
	{
		bool Result = false;
		for(length_t i = 0; i < L; ++i)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			Result = Result || v[i];
		return Result;
	}

<<<<<<< HEAD
	template <precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER bool all(vecType<bool, P> const & v)
	{
		bool Result = true;
		for(length_t i = 0; i < v.length(); ++i)
=======
	template<length_t L, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR bool all(vec<L, bool, Q> const& v)
	{
		bool Result = true;
		for(length_t i = 0; i < L; ++i)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			Result = Result && v[i];
		return Result;
	}

<<<<<<< HEAD
	template <precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<bool, P> not_(vecType<bool, P> const & v)
	{
		vecType<bool, P> Result(uninitialize);
		for(length_t i = 0; i < v.length(); ++i)
=======
	template<length_t L, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> not_(vec<L, bool, Q> const& v)
	{
		vec<L, bool, Q> Result(true);
		for(length_t i = 0; i < L; ++i)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			Result[i] = !v[i];
		return Result;
	}
}//namespace glm

<<<<<<< HEAD
#if GLM_ARCH != GLM_ARCH_PURE && GLM_HAS_UNRESTRICTED_UNIONS
=======
#if GLM_CONFIG_SIMD == GLM_ENABLE
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#	include "func_vector_relational_simd.inl"
#endif
