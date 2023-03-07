<<<<<<< HEAD
/// @ref core
/// @file glm/detail/func_geometric.inl

#include "func_exponential.hpp"
#include "func_common.hpp"
#include "type_vec2.hpp"
#include "type_vec4.hpp"
#include "type_float.hpp"
=======
#include "../exponential.hpp"
#include "../common.hpp"
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

namespace glm{
namespace detail
{
<<<<<<< HEAD
	template <template <typename, precision> class vecType, typename T, precision P, bool Aligned>
	struct compute_length
	{
		GLM_FUNC_QUALIFIER static T call(vecType<T, P> const & v)
=======
	template<length_t L, typename T, qualifier Q, bool Aligned>
	struct compute_length
	{
		GLM_FUNC_QUALIFIER static T call(vec<L, T, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		{
			return sqrt(dot(v, v));
		}
	};

<<<<<<< HEAD
	template <template <typename, precision> class vecType, typename T, precision P, bool Aligned>
	struct compute_distance
	{
		GLM_FUNC_QUALIFIER static T call(vecType<T, P> const & p0, vecType<T, P> const & p1)
=======
	template<length_t L, typename T, qualifier Q, bool Aligned>
	struct compute_distance
	{
		GLM_FUNC_QUALIFIER static T call(vec<L, T, Q> const& p0, vec<L, T, Q> const& p1)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		{
			return length(p1 - p0);
		}
	};

<<<<<<< HEAD
	template <template <class, precision> class vecType, typename T, precision P, bool Aligned>
	struct compute_dot{};

	template <typename T, precision P, bool Aligned>
	struct compute_dot<tvec1, T, P, Aligned>
	{
		GLM_FUNC_QUALIFIER static T call(tvec1<T, P> const & a, tvec1<T, P> const & b)
=======
	template<typename V, typename T, bool Aligned>
	struct compute_dot{};

	template<typename T, qualifier Q, bool Aligned>
	struct compute_dot<vec<1, T, Q>, T, Aligned>
	{
		GLM_FUNC_QUALIFIER static T call(vec<1, T, Q> const& a, vec<1, T, Q> const& b)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		{
			return a.x * b.x;
		}
	};

<<<<<<< HEAD
	template <typename T, precision P, bool Aligned>
	struct compute_dot<tvec2, T, P, Aligned>
	{
		GLM_FUNC_QUALIFIER static T call(tvec2<T, P> const & x, tvec2<T, P> const & y)
		{
			tvec2<T, P> tmp(x * y);
=======
	template<typename T, qualifier Q, bool Aligned>
	struct compute_dot<vec<2, T, Q>, T, Aligned>
	{
		GLM_FUNC_QUALIFIER static T call(vec<2, T, Q> const& a, vec<2, T, Q> const& b)
		{
			vec<2, T, Q> tmp(a * b);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			return tmp.x + tmp.y;
		}
	};

<<<<<<< HEAD
	template <typename T, precision P, bool Aligned>
	struct compute_dot<tvec3, T, P, Aligned>
	{
		GLM_FUNC_QUALIFIER static T call(tvec3<T, P> const & x, tvec3<T, P> const & y)
		{
			tvec3<T, P> tmp(x * y);
=======
	template<typename T, qualifier Q, bool Aligned>
	struct compute_dot<vec<3, T, Q>, T, Aligned>
	{
		GLM_FUNC_QUALIFIER static T call(vec<3, T, Q> const& a, vec<3, T, Q> const& b)
		{
			vec<3, T, Q> tmp(a * b);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			return tmp.x + tmp.y + tmp.z;
		}
	};

<<<<<<< HEAD
	template <typename T, precision P, bool Aligned>
	struct compute_dot<tvec4, T, P, Aligned>
	{
		GLM_FUNC_QUALIFIER static T call(tvec4<T, P> const & x, tvec4<T, P> const & y)
		{
			tvec4<T, P> tmp(x * y);
=======
	template<typename T, qualifier Q, bool Aligned>
	struct compute_dot<vec<4, T, Q>, T, Aligned>
	{
		GLM_FUNC_QUALIFIER static T call(vec<4, T, Q> const& a, vec<4, T, Q> const& b)
		{
			vec<4, T, Q> tmp(a * b);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			return (tmp.x + tmp.y) + (tmp.z + tmp.w);
		}
	};

<<<<<<< HEAD
	template <typename T, precision P, bool Aligned>
	struct compute_cross
	{
		GLM_FUNC_QUALIFIER static tvec3<T, P> call(tvec3<T, P> const & x, tvec3<T, P> const & y)
		{
			GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'cross' accepts only floating-point inputs");

			return tvec3<T, P>(
=======
	template<typename T, qualifier Q, bool Aligned>
	struct compute_cross
	{
		GLM_FUNC_QUALIFIER static vec<3, T, Q> call(vec<3, T, Q> const& x, vec<3, T, Q> const& y)
		{
			GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'cross' accepts only floating-point inputs");

			return vec<3, T, Q>(
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
				x.y * y.z - y.y * x.z,
				x.z * y.x - y.z * x.x,
				x.x * y.y - y.x * x.y);
		}
	};

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType, bool Aligned>
	struct compute_normalize
	{
		GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & v)
=======
	template<length_t L, typename T, qualifier Q, bool Aligned>
	struct compute_normalize
	{
		GLM_FUNC_QUALIFIER static vec<L, T, Q> call(vec<L, T, Q> const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		{
			GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'normalize' accepts only floating-point inputs");

			return v * inversesqrt(dot(v, v));
		}
	};

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType, bool Aligned>
	struct compute_faceforward
	{
		GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & N, vecType<T, P> const & I, vecType<T, P> const & Nref)
=======
	template<length_t L, typename T, qualifier Q, bool Aligned>
	struct compute_faceforward
	{
		GLM_FUNC_QUALIFIER static vec<L, T, Q> call(vec<L, T, Q> const& N, vec<L, T, Q> const& I, vec<L, T, Q> const& Nref)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		{
			GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'normalize' accepts only floating-point inputs");

			return dot(Nref, I) < static_cast<T>(0) ? N : -N;
		}
	};

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType, bool Aligned>
	struct compute_reflect
	{
		GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & I, vecType<T, P> const & N)
=======
	template<length_t L, typename T, qualifier Q, bool Aligned>
	struct compute_reflect
	{
		GLM_FUNC_QUALIFIER static vec<L, T, Q> call(vec<L, T, Q> const& I, vec<L, T, Q> const& N)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		{
			return I - N * dot(N, I) * static_cast<T>(2);
		}
	};

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType, bool Aligned>
	struct compute_refract
	{
		GLM_FUNC_QUALIFIER static vecType<T, P> call(vecType<T, P> const & I, vecType<T, P> const & N, T eta)
		{
			T const dotValue(dot(N, I));
			T const k(static_cast<T>(1) - eta * eta * (static_cast<T>(1) - dotValue * dotValue));
			return (eta * I - (eta * dotValue + std::sqrt(k)) * N) * static_cast<T>(k >= static_cast<T>(0));
=======
	template<length_t L, typename T, qualifier Q, bool Aligned>
	struct compute_refract
	{
		GLM_FUNC_QUALIFIER static vec<L, T, Q> call(vec<L, T, Q> const& I, vec<L, T, Q> const& N, T eta)
		{
			T const dotValue(dot(N, I));
			T const k(static_cast<T>(1) - eta * eta * (static_cast<T>(1) - dotValue * dotValue));
			vec<L, T, Q> const Result =
                (k >= static_cast<T>(0)) ? (eta * I - (eta * dotValue + std::sqrt(k)) * N) : vec<L, T, Q>(0);
			return Result;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		}
	};
}//namespace detail

	// length
<<<<<<< HEAD
	template <typename genType>
=======
	template<typename genType>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_QUALIFIER genType length(genType x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'length' accepts only floating-point inputs");

		return abs(x);
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER T length(vecType<T, P> const & v)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'length' accepts only floating-point inputs");

		return detail::compute_length<vecType, T, P, detail::is_aligned<P>::value>::call(v);
	}

	// distance
	template <typename genType>
	GLM_FUNC_QUALIFIER genType distance(genType const & p0, genType const & p1)
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T length(vec<L, T, Q> const& v)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'length' accepts only floating-point inputs");

		return detail::compute_length<L, T, Q, detail::is_aligned<Q>::value>::call(v);
	}

	// distance
	template<typename genType>
	GLM_FUNC_QUALIFIER genType distance(genType const& p0, genType const& p1)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'distance' accepts only floating-point inputs");

		return length(p1 - p0);
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER T distance(vecType<T, P> const & p0, vecType<T, P> const & p1)
	{
		return detail::compute_distance<vecType, T, P, detail::is_aligned<P>::value>::call(p0, p1);
	}

	// dot
	template <typename T>
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T distance(vec<L, T, Q> const& p0, vec<L, T, Q> const& p1)
	{
		return detail::compute_distance<L, T, Q, detail::is_aligned<Q>::value>::call(p0, p1);
	}

	// dot
	template<typename T>
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_QUALIFIER T dot(T x, T y)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'dot' accepts only floating-point inputs");
		return x * y;
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER T dot(vecType<T, P> const & x, vecType<T, P> const & y)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'dot' accepts only floating-point inputs");
		return detail::compute_dot<vecType, T, P, detail::is_aligned<P>::value>::call(x, y);
	}

	// cross
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<T, P> cross(tvec3<T, P> const & x, tvec3<T, P> const & y)
	{
		return detail::compute_cross<T, P, detail::is_aligned<P>::value>::call(x, y);
	}

	// normalize
	template <typename genType>
	GLM_FUNC_QUALIFIER genType normalize(genType const & x)
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T dot(vec<L, T, Q> const& x, vec<L, T, Q> const& y)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'dot' accepts only floating-point inputs");
		return detail::compute_dot<vec<L, T, Q>, T, detail::is_aligned<Q>::value>::call(x, y);
	}

	// cross
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<3, T, Q> cross(vec<3, T, Q> const& x, vec<3, T, Q> const& y)
	{
		return detail::compute_cross<T, Q, detail::is_aligned<Q>::value>::call(x, y);
	}
/*
	// normalize
	template<typename genType>
	GLM_FUNC_QUALIFIER genType normalize(genType const& x)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'normalize' accepts only floating-point inputs");

		return x < genType(0) ? genType(-1) : genType(1);
	}
<<<<<<< HEAD

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> normalize(vecType<T, P> const & x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'normalize' accepts only floating-point inputs");

		return detail::compute_normalize<T, P, vecType, detail::is_aligned<P>::value>::call(x);
	}

	// faceforward
	template <typename genType>
	GLM_FUNC_QUALIFIER genType faceforward(genType const & N, genType const & I, genType const & Nref)
=======
*/
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> normalize(vec<L, T, Q> const& x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'normalize' accepts only floating-point inputs");

		return detail::compute_normalize<L, T, Q, detail::is_aligned<Q>::value>::call(x);
	}

	// faceforward
	template<typename genType>
	GLM_FUNC_QUALIFIER genType faceforward(genType const& N, genType const& I, genType const& Nref)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return dot(Nref, I) < static_cast<genType>(0) ? N : -N;
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> faceforward(vecType<T, P> const & N, vecType<T, P> const & I, vecType<T, P> const & Nref)
	{
		return detail::compute_faceforward<T, P, vecType, detail::is_aligned<P>::value>::call(N, I, Nref);
	}

	// reflect
	template <typename genType>
	GLM_FUNC_QUALIFIER genType reflect(genType const & I, genType const & N)
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> faceforward(vec<L, T, Q> const& N, vec<L, T, Q> const& I, vec<L, T, Q> const& Nref)
	{
		return detail::compute_faceforward<L, T, Q, detail::is_aligned<Q>::value>::call(N, I, Nref);
	}

	// reflect
	template<typename genType>
	GLM_FUNC_QUALIFIER genType reflect(genType const& I, genType const& N)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		return I - N * dot(N, I) * genType(2);
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> reflect(vecType<T, P> const & I, vecType<T, P> const & N)
	{
		return detail::compute_reflect<T, P, vecType, detail::is_aligned<P>::value>::call(I, N);
	}

	// refract
	template <typename genType>
	GLM_FUNC_QUALIFIER genType refract(genType const & I, genType const & N, genType eta)
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> reflect(vec<L, T, Q> const& I, vec<L, T, Q> const& N)
	{
		return detail::compute_reflect<L, T, Q, detail::is_aligned<Q>::value>::call(I, N);
	}

	// refract
	template<typename genType>
	GLM_FUNC_QUALIFIER genType refract(genType const& I, genType const& N, genType eta)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'refract' accepts only floating-point inputs");
		genType const dotValue(dot(N, I));
		genType const k(static_cast<genType>(1) - eta * eta * (static_cast<genType>(1) - dotValue * dotValue));
		return (eta * I - (eta * dotValue + sqrt(k)) * N) * static_cast<genType>(k >= static_cast<genType>(0));
	}

<<<<<<< HEAD
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<T, P> refract(vecType<T, P> const & I, vecType<T, P> const & N, T eta)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'refract' accepts only floating-point inputs");
		return detail::compute_refract<T, P, vecType, detail::is_aligned<P>::value>::call(I, N, eta);
	}
}//namespace glm

#if GLM_ARCH != GLM_ARCH_PURE && GLM_HAS_UNRESTRICTED_UNIONS
=======
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> refract(vec<L, T, Q> const& I, vec<L, T, Q> const& N, T eta)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'refract' accepts only floating-point inputs");
		return detail::compute_refract<L, T, Q, detail::is_aligned<Q>::value>::call(I, N, eta);
	}
}//namespace glm

#if GLM_CONFIG_SIMD == GLM_ENABLE
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#	include "func_geometric_simd.inl"
#endif
