/// @ref core
/// @file glm/detail/func_common_simd.inl

#if GLM_ARCH & GLM_ARCH_SSE2_BIT

#include "../simd/common.h"

#include <immintrin.h>

namespace glm{
namespace detail
{
<<<<<<< HEAD
	template <precision P>
	struct compute_abs_vector<float, P, tvec4, true>
	{
		GLM_FUNC_QUALIFIER static tvec4<float, P> call(tvec4<float, P> const & v)
		{
			tvec4<float, P> result(uninitialize);
=======
	template<qualifier Q>
	struct compute_abs_vector<4, float, Q, true>
	{
		GLM_FUNC_QUALIFIER static vec<4, float, Q> call(vec<4, float, Q> const& v)
		{
			vec<4, float, Q> result;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			result.data = glm_vec4_abs(v.data);
			return result;
		}
	};

<<<<<<< HEAD
	template <precision P>
	struct compute_abs_vector<int, P, tvec4, true>
	{
		GLM_FUNC_QUALIFIER static tvec4<int, P> call(tvec4<int, P> const & v)
		{
			tvec4<int, P> result(uninitialize);
=======
	template<qualifier Q>
	struct compute_abs_vector<4, int, Q, true>
	{
		GLM_FUNC_QUALIFIER static vec<4, int, Q> call(vec<4, int, Q> const& v)
		{
			vec<4, int, Q> result;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			result.data = glm_ivec4_abs(v.data);
			return result;
		}
	};

<<<<<<< HEAD
	template <precision P>
	struct compute_floor<float, P, tvec4, true>
	{
		GLM_FUNC_QUALIFIER static tvec4<float, P> call(tvec4<float, P> const & v)
		{
			tvec4<float, P> result(uninitialize);
=======
	template<qualifier Q>
	struct compute_floor<4, float, Q, true>
	{
		GLM_FUNC_QUALIFIER static vec<4, float, Q> call(vec<4, float, Q> const& v)
		{
			vec<4, float, Q> result;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			result.data = glm_vec4_floor(v.data);
			return result;
		}
	};

<<<<<<< HEAD
	template <precision P>
	struct compute_ceil<float, P, tvec4, true>
	{
		GLM_FUNC_QUALIFIER static tvec4<float, P> call(tvec4<float, P> const & v)
		{
			tvec4<float, P> result(uninitialize);
=======
	template<qualifier Q>
	struct compute_ceil<4, float, Q, true>
	{
		GLM_FUNC_QUALIFIER static vec<4, float, Q> call(vec<4, float, Q> const& v)
		{
			vec<4, float, Q> result;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			result.data = glm_vec4_ceil(v.data);
			return result;
		}
	};

<<<<<<< HEAD
	template <precision P>
	struct compute_fract<float, P, tvec4, true>
	{
		GLM_FUNC_QUALIFIER static tvec4<float, P> call(tvec4<float, P> const & v)
		{
			tvec4<float, P> result(uninitialize);
=======
	template<qualifier Q>
	struct compute_fract<4, float, Q, true>
	{
		GLM_FUNC_QUALIFIER static vec<4, float, Q> call(vec<4, float, Q> const& v)
		{
			vec<4, float, Q> result;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			result.data = glm_vec4_fract(v.data);
			return result;
		}
	};

<<<<<<< HEAD
	template <precision P>
	struct compute_round<float, P, tvec4, true>
	{
		GLM_FUNC_QUALIFIER static tvec4<float, P> call(tvec4<float, P> const & v)
		{
			tvec4<float, P> result(uninitialize);
=======
	template<qualifier Q>
	struct compute_round<4, float, Q, true>
	{
		GLM_FUNC_QUALIFIER static vec<4, float, Q> call(vec<4, float, Q> const& v)
		{
			vec<4, float, Q> result;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			result.data = glm_vec4_round(v.data);
			return result;
		}
	};

<<<<<<< HEAD
	template <precision P>
	struct compute_mod<float, P, tvec4, true>
	{
		GLM_FUNC_QUALIFIER static tvec4<float, P> call(tvec4<float, P> const & x, tvec4<float, P> const & y)
		{
			tvec4<float, P> result(uninitialize);
=======
	template<qualifier Q>
	struct compute_mod<4, float, Q, true>
	{
		GLM_FUNC_QUALIFIER static vec<4, float, Q> call(vec<4, float, Q> const& x, vec<4, float, Q> const& y)
		{
			vec<4, float, Q> result;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			result.data = glm_vec4_mod(x.data, y.data);
			return result;
		}
	};

<<<<<<< HEAD
	template <precision P>
	struct compute_min_vector<float, P, tvec4, true>
	{
		GLM_FUNC_QUALIFIER static tvec4<float, P> call(tvec4<float, P> const & v1, tvec4<float, P> const & v2)
		{
			tvec4<float, P> result(uninitialize);
=======
	template<qualifier Q>
	struct compute_min_vector<4, float, Q, true>
	{
		GLM_FUNC_QUALIFIER static vec<4, float, Q> call(vec<4, float, Q> const& v1, vec<4, float, Q> const& v2)
		{
			vec<4, float, Q> result;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			result.data = _mm_min_ps(v1.data, v2.data);
			return result;
		}
	};

<<<<<<< HEAD
	template <precision P>
	struct compute_min_vector<int32, P, tvec4, true>
	{
		GLM_FUNC_QUALIFIER static tvec4<int32, P> call(tvec4<int32, P> const & v1, tvec4<int32, P> const & v2)
		{
			tvec4<int32, P> result(uninitialize);
=======
	template<qualifier Q>
	struct compute_min_vector<4, int, Q, true>
	{
		GLM_FUNC_QUALIFIER static vec<4, int, Q> call(vec<4, int, Q> const& v1, vec<4, int, Q> const& v2)
		{
			vec<4, int, Q> result;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			result.data = _mm_min_epi32(v1.data, v2.data);
			return result;
		}
	};

<<<<<<< HEAD
	template <precision P>
	struct compute_min_vector<uint32, P, tvec4, true>
	{
		GLM_FUNC_QUALIFIER static tvec4<int32, P> call(tvec4<uint32, P> const & v1, tvec4<uint32, P> const & v2)
		{
			tvec4<uint32, P> result(uninitialize);
=======
	template<qualifier Q>
	struct compute_min_vector<4, uint, Q, true>
	{
		GLM_FUNC_QUALIFIER static vec<4, uint, Q> call(vec<4, uint, Q> const& v1, vec<4, uint, Q> const& v2)
		{
			vec<4, uint, Q> result;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			result.data = _mm_min_epu32(v1.data, v2.data);
			return result;
		}
	};

<<<<<<< HEAD
	template <precision P>
	struct compute_max_vector<float, P, tvec4, true>
	{
		GLM_FUNC_QUALIFIER static tvec4<float, P> call(tvec4<float, P> const & v1, tvec4<float, P> const & v2)
		{
			tvec4<float, P> result(uninitialize);
=======
	template<qualifier Q>
	struct compute_max_vector<4, float, Q, true>
	{
		GLM_FUNC_QUALIFIER static vec<4, float, Q> call(vec<4, float, Q> const& v1, vec<4, float, Q> const& v2)
		{
			vec<4, float, Q> result;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			result.data = _mm_max_ps(v1.data, v2.data);
			return result;
		}
	};

<<<<<<< HEAD
	template <precision P>
	struct compute_max_vector<int32, P, tvec4, true>
	{
		GLM_FUNC_QUALIFIER static tvec4<int32, P> call(tvec4<int32, P> const & v1, tvec4<int32, P> const & v2)
		{
			tvec4<int32, P> result(uninitialize);
=======
	template<qualifier Q>
	struct compute_max_vector<4, int, Q, true>
	{
		GLM_FUNC_QUALIFIER static vec<4, int, Q> call(vec<4, int, Q> const& v1, vec<4, int, Q> const& v2)
		{
			vec<4, int, Q> result;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			result.data = _mm_max_epi32(v1.data, v2.data);
			return result;
		}
	};

<<<<<<< HEAD
	template <precision P>
	struct compute_max_vector<uint32, P, tvec4, true>
	{
		GLM_FUNC_QUALIFIER static tvec4<uint32, P> call(tvec4<uint32, P> const & v1, tvec4<uint32, P> const & v2)
		{
			tvec4<uint32, P> result(uninitialize);
=======
	template<qualifier Q>
	struct compute_max_vector<4, uint, Q, true>
	{
		GLM_FUNC_QUALIFIER static vec<4, uint, Q> call(vec<4, uint, Q> const& v1, vec<4, uint, Q> const& v2)
		{
			vec<4, uint, Q> result;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			result.data = _mm_max_epu32(v1.data, v2.data);
			return result;
		}
	};

<<<<<<< HEAD
	template <precision P>
	struct compute_clamp_vector<float, P, tvec4, true>
	{
		GLM_FUNC_QUALIFIER static tvec4<float, P> call(tvec4<float, P> const & x, tvec4<float, P> const & minVal, tvec4<float, P> const & maxVal)
		{
			tvec4<float, P> result(uninitialize);
=======
	template<qualifier Q>
	struct compute_clamp_vector<4, float, Q, true>
	{
		GLM_FUNC_QUALIFIER static vec<4, float, Q> call(vec<4, float, Q> const& x, vec<4, float, Q> const& minVal, vec<4, float, Q> const& maxVal)
		{
			vec<4, float, Q> result;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			result.data = _mm_min_ps(_mm_max_ps(x.data, minVal.data), maxVal.data);
			return result;
		}
	};

<<<<<<< HEAD
	template <precision P>
	struct compute_clamp_vector<int32, P, tvec4, true>
	{
		GLM_FUNC_QUALIFIER static tvec4<int32, P> call(tvec4<int32, P> const & x, tvec4<int32, P> const & minVal, tvec4<int32, P> const & maxVal)
		{
			tvec4<int32, P> result(uninitialize);
=======
	template<qualifier Q>
	struct compute_clamp_vector<4, int, Q, true>
	{
		GLM_FUNC_QUALIFIER static vec<4, int, Q> call(vec<4, int, Q> const& x, vec<4, int, Q> const& minVal, vec<4, int, Q> const& maxVal)
		{
			vec<4, int, Q> result;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			result.data = _mm_min_epi32(_mm_max_epi32(x.data, minVal.data), maxVal.data);
			return result;
		}
	};

<<<<<<< HEAD
	template <precision P>
	struct compute_clamp_vector<uint32, P, tvec4, true>
	{
		GLM_FUNC_QUALIFIER static tvec4<uint32, P> call(tvec4<uint32, P> const & x, tvec4<uint32, P> const & minVal, tvec4<uint32, P> const & maxVal)
		{
			tvec4<uint32, P> result(uninitialize);
=======
	template<qualifier Q>
	struct compute_clamp_vector<4, uint, Q, true>
	{
		GLM_FUNC_QUALIFIER static vec<4, uint, Q> call(vec<4, uint, Q> const& x, vec<4, uint, Q> const& minVal, vec<4, uint, Q> const& maxVal)
		{
			vec<4, uint, Q> result;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			result.data = _mm_min_epu32(_mm_max_epu32(x.data, minVal.data), maxVal.data);
			return result;
		}
	};

<<<<<<< HEAD
	template <precision P>
	struct compute_mix_vector<float, bool, P, tvec4, true>
	{
		GLM_FUNC_QUALIFIER static tvec4<float, P> call(tvec4<float, P> const & x, tvec4<float, P> const & y, tvec4<bool, P> const & a)
		{
			__m128i const Load = _mm_set_epi32(-(int)a.w, -(int)a.z, -(int)a.y, -(int)a.x);
			__m128 const Mask = _mm_castsi128_ps(Load);

			tvec4<float, P> Result(uninitialize);
=======
	template<qualifier Q>
	struct compute_mix_vector<4, float, bool, Q, true>
	{
		GLM_FUNC_QUALIFIER static vec<4, float, Q> call(vec<4, float, Q> const& x, vec<4, float, Q> const& y, vec<4, bool, Q> const& a)
		{
			__m128i const Load = _mm_set_epi32(-static_cast<int>(a.w), -static_cast<int>(a.z), -static_cast<int>(a.y), -static_cast<int>(a.x));
			__m128 const Mask = _mm_castsi128_ps(Load);

			vec<4, float, Q> Result;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#			if 0 && GLM_ARCH & GLM_ARCH_AVX
				Result.data = _mm_blendv_ps(x.data, y.data, Mask);
#			else
				Result.data = _mm_or_ps(_mm_and_ps(Mask, y.data), _mm_andnot_ps(Mask, x.data));
#			endif
			return Result;
		}
	};
/* FIXME
<<<<<<< HEAD
	template <precision P>
	struct compute_step_vector<float, P, tvec4>
	{
		GLM_FUNC_QUALIFIER static tvec4<float, P> call(tvec4<float, P> const& edge, tvec4<float, P> const& x)
		{
			tvec4<float, P> result(uninitialize);
=======
	template<qualifier Q>
	struct compute_step_vector<float, Q, tvec4>
	{
		GLM_FUNC_QUALIFIER static vec<4, float, Q> call(vec<4, float, Q> const& edge, vec<4, float, Q> const& x)
		{
			vec<4, float, Q> Result;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			result.data = glm_vec4_step(edge.data, x.data);
			return result;
		}
	};
*/
<<<<<<< HEAD
	template <precision P>
	struct compute_smoothstep_vector<float, P, tvec4, true>
	{
		GLM_FUNC_QUALIFIER static tvec4<float, P> call(tvec4<float, P> const& edge0, tvec4<float, P> const& edge1, tvec4<float, P> const& x)
		{
			tvec4<float, P> result(uninitialize);
			result.data = glm_vec4_smoothstep(edge0.data, edge1.data, x.data);
			return result;
=======
	template<qualifier Q>
	struct compute_smoothstep_vector<4, float, Q, true>
	{
		GLM_FUNC_QUALIFIER static vec<4, float, Q> call(vec<4, float, Q> const& edge0, vec<4, float, Q> const& edge1, vec<4, float, Q> const& x)
		{
			vec<4, float, Q> Result;
			Result.data = glm_vec4_smoothstep(edge0.data, edge1.data, x.data);
			return Result;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		}
	};
}//namespace detail
}//namespace glm

#endif//GLM_ARCH & GLM_ARCH_SSE2_BIT
