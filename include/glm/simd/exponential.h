/// @ref simd
/// @file glm/simd/experimental.h

#pragma once

#include "platform.h"

#if GLM_ARCH & GLM_ARCH_SSE2_BIT

<<<<<<< HEAD
GLM_FUNC_QUALIFIER glm_vec4 glm_vec1_sqrt_lowp(glm_vec4 x)
=======
GLM_FUNC_QUALIFIER glm_f32vec4 glm_vec1_sqrt_lowp(glm_f32vec4 x)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
{
	return _mm_mul_ss(_mm_rsqrt_ss(x), x);
}

<<<<<<< HEAD
GLM_FUNC_QUALIFIER glm_vec4 glm_vec4_sqrt_lowp(glm_vec4 x)
=======
GLM_FUNC_QUALIFIER glm_f32vec4 glm_vec4_sqrt_lowp(glm_f32vec4 x)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
{
	return _mm_mul_ps(_mm_rsqrt_ps(x), x);
}

#endif//GLM_ARCH & GLM_ARCH_SSE2_BIT
