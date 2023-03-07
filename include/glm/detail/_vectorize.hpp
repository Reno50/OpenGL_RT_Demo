<<<<<<< HEAD
/// @ref core
/// @file glm/detail/_vectorize.hpp

#pragma once

#include "type_vec1.hpp"
#include "type_vec2.hpp"
#include "type_vec3.hpp"
#include "type_vec4.hpp"

namespace glm{
namespace detail
{
	template <typename R, typename T, precision P, template <typename, precision> class vecType>
	struct functor1{};

	template <typename R, typename T, precision P>
	struct functor1<R, T, P, tvec1>
	{
		GLM_FUNC_QUALIFIER static tvec1<R, P> call(R (*Func) (T x), tvec1<T, P> const & v)
		{
			return tvec1<R, P>(Func(v.x));
		}
	};

	template <typename R, typename T, precision P>
	struct functor1<R, T, P, tvec2>
	{
		GLM_FUNC_QUALIFIER static tvec2<R, P> call(R (*Func) (T x), tvec2<T, P> const & v)
		{
			return tvec2<R, P>(Func(v.x), Func(v.y));
		}
	};

	template <typename R, typename T, precision P>
	struct functor1<R, T, P, tvec3>
	{
		GLM_FUNC_QUALIFIER static tvec3<R, P> call(R (*Func) (T x), tvec3<T, P> const & v)
		{
			return tvec3<R, P>(Func(v.x), Func(v.y), Func(v.z));
		}
	};

	template <typename R, typename T, precision P>
	struct functor1<R, T, P, tvec4>
	{
		GLM_FUNC_QUALIFIER static tvec4<R, P> call(R (*Func) (T x), tvec4<T, P> const & v)
		{
			return tvec4<R, P>(Func(v.x), Func(v.y), Func(v.z), Func(v.w));
		}
	};

	template <typename T, precision P, template <typename, precision> class vecType>
	struct functor2{};

	template <typename T, precision P>
	struct functor2<T, P, tvec1>
	{
		GLM_FUNC_QUALIFIER static tvec1<T, P> call(T (*Func) (T x, T y), tvec1<T, P> const & a, tvec1<T, P> const & b)
		{
			return tvec1<T, P>(Func(a.x, b.x));
		}
	};

	template <typename T, precision P>
	struct functor2<T, P, tvec2>
	{
		GLM_FUNC_QUALIFIER static tvec2<T, P> call(T (*Func) (T x, T y), tvec2<T, P> const & a, tvec2<T, P> const & b)
		{
			return tvec2<T, P>(Func(a.x, b.x), Func(a.y, b.y));
		}
	};

	template <typename T, precision P>
	struct functor2<T, P, tvec3>
	{
		GLM_FUNC_QUALIFIER static tvec3<T, P> call(T (*Func) (T x, T y), tvec3<T, P> const & a, tvec3<T, P> const & b)
		{
			return tvec3<T, P>(Func(a.x, b.x), Func(a.y, b.y), Func(a.z, b.z));
		}
	};

	template <typename T, precision P>
	struct functor2<T, P, tvec4>
	{
		GLM_FUNC_QUALIFIER static tvec4<T, P> call(T (*Func) (T x, T y), tvec4<T, P> const & a, tvec4<T, P> const & b)
		{
			return tvec4<T, P>(Func(a.x, b.x), Func(a.y, b.y), Func(a.z, b.z), Func(a.w, b.w));
		}
	};

	template <typename T, precision P, template <typename, precision> class vecType>
	struct functor2_vec_sca{};

	template <typename T, precision P>
	struct functor2_vec_sca<T, P, tvec1>
	{
		GLM_FUNC_QUALIFIER static tvec1<T, P> call(T (*Func) (T x, T y), tvec1<T, P> const & a, T b)
		{
			return tvec1<T, P>(Func(a.x, b));
		}
	};

	template <typename T, precision P>
	struct functor2_vec_sca<T, P, tvec2>
	{
		GLM_FUNC_QUALIFIER static tvec2<T, P> call(T (*Func) (T x, T y), tvec2<T, P> const & a, T b)
		{
			return tvec2<T, P>(Func(a.x, b), Func(a.y, b));
		}
	};

	template <typename T, precision P>
	struct functor2_vec_sca<T, P, tvec3>
	{
		GLM_FUNC_QUALIFIER static tvec3<T, P> call(T (*Func) (T x, T y), tvec3<T, P> const & a, T b)
		{
			return tvec3<T, P>(Func(a.x, b), Func(a.y, b), Func(a.z, b));
		}
	};

	template <typename T, precision P>
	struct functor2_vec_sca<T, P, tvec4>
	{
		GLM_FUNC_QUALIFIER static tvec4<T, P> call(T (*Func) (T x, T y), tvec4<T, P> const & a, T b)
		{
			return tvec4<T, P>(Func(a.x, b), Func(a.y, b), Func(a.z, b), Func(a.w, b));
=======
#pragma once

namespace glm{
namespace detail
{
	template<template<length_t L, typename T, qualifier Q> class vec, length_t L, typename R, typename T, qualifier Q>
	struct functor1{};

	template<template<length_t L, typename T, qualifier Q> class vec, typename R, typename T, qualifier Q>
	struct functor1<vec, 1, R, T, Q>
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<1, R, Q> call(R (*Func) (T x), vec<1, T, Q> const& v)
		{
			return vec<1, R, Q>(Func(v.x));
		}
	};

	template<template<length_t L, typename T, qualifier Q> class vec, typename R, typename T, qualifier Q>
	struct functor1<vec, 2, R, T, Q>
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<2, R, Q> call(R (*Func) (T x), vec<2, T, Q> const& v)
		{
			return vec<2, R, Q>(Func(v.x), Func(v.y));
		}
	};

	template<template<length_t L, typename T, qualifier Q> class vec, typename R, typename T, qualifier Q>
	struct functor1<vec, 3, R, T, Q>
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<3, R, Q> call(R (*Func) (T x), vec<3, T, Q> const& v)
		{
			return vec<3, R, Q>(Func(v.x), Func(v.y), Func(v.z));
		}
	};

	template<template<length_t L, typename T, qualifier Q> class vec, typename R, typename T, qualifier Q>
	struct functor1<vec, 4, R, T, Q>
	{
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR static vec<4, R, Q> call(R (*Func) (T x), vec<4, T, Q> const& v)
		{
			return vec<4, R, Q>(Func(v.x), Func(v.y), Func(v.z), Func(v.w));
		}
	};

	template<template<length_t L, typename T, qualifier Q> class vec, length_t L, typename T, qualifier Q>
	struct functor2{};

	template<template<length_t L, typename T, qualifier Q> class vec, typename T, qualifier Q>
	struct functor2<vec, 1, T, Q>
	{
		GLM_FUNC_QUALIFIER static vec<1, T, Q> call(T (*Func) (T x, T y), vec<1, T, Q> const& a, vec<1, T, Q> const& b)
		{
			return vec<1, T, Q>(Func(a.x, b.x));
		}
	};

	template<template<length_t L, typename T, qualifier Q> class vec, typename T, qualifier Q>
	struct functor2<vec, 2, T, Q>
	{
		GLM_FUNC_QUALIFIER static vec<2, T, Q> call(T (*Func) (T x, T y), vec<2, T, Q> const& a, vec<2, T, Q> const& b)
		{
			return vec<2, T, Q>(Func(a.x, b.x), Func(a.y, b.y));
		}
	};

	template<template<length_t L, typename T, qualifier Q> class vec, typename T, qualifier Q>
	struct functor2<vec, 3, T, Q>
	{
		GLM_FUNC_QUALIFIER static vec<3, T, Q> call(T (*Func) (T x, T y), vec<3, T, Q> const& a, vec<3, T, Q> const& b)
		{
			return vec<3, T, Q>(Func(a.x, b.x), Func(a.y, b.y), Func(a.z, b.z));
		}
	};

	template<template<length_t L, typename T, qualifier Q> class vec, typename T, qualifier Q>
	struct functor2<vec, 4, T, Q>
	{
		GLM_FUNC_QUALIFIER static vec<4, T, Q> call(T (*Func) (T x, T y), vec<4, T, Q> const& a, vec<4, T, Q> const& b)
		{
			return vec<4, T, Q>(Func(a.x, b.x), Func(a.y, b.y), Func(a.z, b.z), Func(a.w, b.w));
		}
	};

	template<template<length_t L, typename T, qualifier Q> class vec, length_t L, typename T, qualifier Q>
	struct functor2_vec_sca{};

	template<template<length_t L, typename T, qualifier Q> class vec, typename T, qualifier Q>
	struct functor2_vec_sca<vec, 1, T, Q>
	{
		GLM_FUNC_QUALIFIER static vec<1, T, Q> call(T (*Func) (T x, T y), vec<1, T, Q> const& a, T b)
		{
			return vec<1, T, Q>(Func(a.x, b));
		}
	};

	template<template<length_t L, typename T, qualifier Q> class vec, typename T, qualifier Q>
	struct functor2_vec_sca<vec, 2, T, Q>
	{
		GLM_FUNC_QUALIFIER static vec<2, T, Q> call(T (*Func) (T x, T y), vec<2, T, Q> const& a, T b)
		{
			return vec<2, T, Q>(Func(a.x, b), Func(a.y, b));
		}
	};

	template<template<length_t L, typename T, qualifier Q> class vec, typename T, qualifier Q>
	struct functor2_vec_sca<vec, 3, T, Q>
	{
		GLM_FUNC_QUALIFIER static vec<3, T, Q> call(T (*Func) (T x, T y), vec<3, T, Q> const& a, T b)
		{
			return vec<3, T, Q>(Func(a.x, b), Func(a.y, b), Func(a.z, b));
		}
	};

	template<template<length_t L, typename T, qualifier Q> class vec, typename T, qualifier Q>
	struct functor2_vec_sca<vec, 4, T, Q>
	{
		GLM_FUNC_QUALIFIER static vec<4, T, Q> call(T (*Func) (T x, T y), vec<4, T, Q> const& a, T b)
		{
			return vec<4, T, Q>(Func(a.x, b), Func(a.y, b), Func(a.z, b), Func(a.w, b));
		}
	};

	template<length_t L, typename T, qualifier Q>
	struct functor2_vec_int {};

	template<typename T, qualifier Q>
	struct functor2_vec_int<1, T, Q>
	{
		GLM_FUNC_QUALIFIER static vec<1, int, Q> call(int (*Func) (T x, int y), vec<1, T, Q> const& a, vec<1, int, Q> const& b)
		{
			return vec<1, int, Q>(Func(a.x, b.x));
		}
	};

	template<typename T, qualifier Q>
	struct functor2_vec_int<2, T, Q>
	{
		GLM_FUNC_QUALIFIER static vec<2, int, Q> call(int (*Func) (T x, int y), vec<2, T, Q> const& a, vec<2, int, Q> const& b)
		{
			return vec<2, int, Q>(Func(a.x, b.x), Func(a.y, b.y));
		}
	};

	template<typename T, qualifier Q>
	struct functor2_vec_int<3, T, Q>
	{
		GLM_FUNC_QUALIFIER static vec<3, int, Q> call(int (*Func) (T x, int y), vec<3, T, Q> const& a, vec<3, int, Q> const& b)
		{
			return vec<3, int, Q>(Func(a.x, b.x), Func(a.y, b.y), Func(a.z, b.z));
		}
	};

	template<typename T, qualifier Q>
	struct functor2_vec_int<4, T, Q>
	{
		GLM_FUNC_QUALIFIER static vec<4, int, Q> call(int (*Func) (T x, int y), vec<4, T, Q> const& a, vec<4, int, Q> const& b)
		{
			return vec<4, int, Q>(Func(a.x, b.x), Func(a.y, b.y), Func(a.z, b.z), Func(a.w, b.w));
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		}
	};
}//namespace detail
}//namespace glm
