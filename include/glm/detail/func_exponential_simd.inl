/// @ref core
/// @file glm/detail/func_exponential_simd.inl

#include "../simd/exponential.h"

#if GLM_ARCH & GLM_ARCH_SSE2_BIT

namespace glm{
namespace detail
{
<<<<<<< HEAD
	template <precision P>
	struct compute_sqrt<tvec4, float, P, true>
	{
		GLM_FUNC_QUALIFIER static tvec4<float, P> call(tvec4<float, P> const & v)
		{
			tvec4<float, P> result(uninitialize);
			result.data = _mm_sqrt_ps(v.data);
			return result;
		}
	};

	template <>
	struct compute_sqrt<tvec4, float, aligned_lowp, true>
	{
		GLM_FUNC_QUALIFIER static tvec4<float, aligned_lowp> call(tvec4<float, aligned_lowp> const & v)
		{
			tvec4<float, aligned_lowp> result(uninitialize);
			result.data = glm_vec4_sqrt_lowp(v.data);
			return result;
		}
	};
=======
	template<qualifier Q>
	struct compute_sqrt<4, float, Q, true>
	{
		GLM_FUNC_QUALIFIER static vec<4, float, Q> call(vec<4, float, Q> const& v)
		{
			vec<4, float, Q> Result;
			Result.data = _mm_sqrt_ps(v.data);
			return Result;
		}
	};

#	if GLM_CONFIG_ALIGNED_GENTYPES == GLM_ENABLE
	template<>
	struct compute_sqrt<4, float, aligned_lowp, true>
	{
		GLM_FUNC_QUALIFIER static vec<4, float, aligned_lowp> call(vec<4, float, aligned_lowp> const& v)
		{
			vec<4, float, aligned_lowp> Result;
			Result.data = glm_vec4_sqrt_lowp(v.data);
			return Result;
		}
	};
#	endif
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
}//namespace detail
}//namespace glm

#endif//GLM_ARCH & GLM_ARCH_SSE2_BIT
