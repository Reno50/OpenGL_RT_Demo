/// @ref core
/// @file glm/detail/func_packing.inl

<<<<<<< HEAD
#include "func_common.hpp"
#include "type_half.hpp"
#include "../fwd.hpp"

namespace glm
{
	GLM_FUNC_QUALIFIER uint packUnorm2x16(vec2 const & v)
	{
		union
		{
			u16  in[2];
			uint out;
		} u;

		u16vec2 result(round(clamp(v, 0.0f, 1.0f) * 65535.0f));
=======
#include "../common.hpp"
#include "type_half.hpp"

namespace glm
{
	GLM_FUNC_QUALIFIER uint packUnorm2x16(vec2 const& v)
	{
		union
		{
			unsigned short in[2];
			uint out;
		} u;

		vec<2, unsigned short, defaultp> result(round(clamp(v, 0.0f, 1.0f) * 65535.0f));
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

		u.in[0] = result[0];
		u.in[1] = result[1];

		return u.out;
	}

	GLM_FUNC_QUALIFIER vec2 unpackUnorm2x16(uint p)
	{
		union
		{
			uint in;
<<<<<<< HEAD
			u16  out[2];
=======
			unsigned short out[2];
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		} u;

		u.in = p;

		return vec2(u.out[0], u.out[1]) * 1.5259021896696421759365224689097e-5f;
	}

<<<<<<< HEAD
	GLM_FUNC_QUALIFIER uint packSnorm2x16(vec2 const & v)
	{
		union
		{
			i16  in[2];
			uint out;
		} u;

		i16vec2 result(round(clamp(v, -1.0f, 1.0f) * 32767.0f));
=======
	GLM_FUNC_QUALIFIER uint packSnorm2x16(vec2 const& v)
	{
		union
		{
			signed short in[2];
			uint out;
		} u;
 
		vec<2, short, defaultp> result(round(clamp(v, -1.0f, 1.0f) * 32767.0f));
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

		u.in[0] = result[0];
		u.in[1] = result[1];

		return u.out;
	}

	GLM_FUNC_QUALIFIER vec2 unpackSnorm2x16(uint p)
	{
		union
		{
			uint in;
<<<<<<< HEAD
			i16  out[2];
=======
			signed short out[2];
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		} u;

		u.in = p;

		return clamp(vec2(u.out[0], u.out[1]) * 3.0518509475997192297128208258309e-5f, -1.0f, 1.0f);
	}

<<<<<<< HEAD
	GLM_FUNC_QUALIFIER uint packUnorm4x8(vec4 const & v)
	{
		union
		{
			u8   in[4];
			uint out;
		} u;

		u8vec4 result(round(clamp(v, 0.0f, 1.0f) * 255.0f));
=======
	GLM_FUNC_QUALIFIER uint packUnorm4x8(vec4 const& v)
	{
		union
		{
			unsigned char in[4];
			uint out;
		} u;

		vec<4, unsigned char, defaultp> result(round(clamp(v, 0.0f, 1.0f) * 255.0f));
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

		u.in[0] = result[0];
		u.in[1] = result[1];
		u.in[2] = result[2];
		u.in[3] = result[3];

		return u.out;
	}

	GLM_FUNC_QUALIFIER vec4 unpackUnorm4x8(uint p)
	{
		union
		{
			uint in;
<<<<<<< HEAD
			u8   out[4];
=======
			unsigned char out[4];
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		} u;

		u.in = p;

		return vec4(u.out[0], u.out[1], u.out[2], u.out[3]) * 0.0039215686274509803921568627451f;
	}
<<<<<<< HEAD
	
	GLM_FUNC_QUALIFIER uint packSnorm4x8(vec4 const & v)
	{
		union
		{
			i8   in[4];
			uint out;
		} u;

		i8vec4 result(round(clamp(v, -1.0f, 1.0f) * 127.0f));
=======

	GLM_FUNC_QUALIFIER uint packSnorm4x8(vec4 const& v)
	{
		union
		{
			signed char in[4];
			uint out;
		} u;

		vec<4, signed char, defaultp> result(round(clamp(v, -1.0f, 1.0f) * 127.0f));
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8

		u.in[0] = result[0];
		u.in[1] = result[1];
		u.in[2] = result[2];
		u.in[3] = result[3];

		return u.out;
	}
<<<<<<< HEAD
	
=======

>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	GLM_FUNC_QUALIFIER glm::vec4 unpackSnorm4x8(uint p)
	{
		union
		{
			uint in;
<<<<<<< HEAD
			i8   out[4];
=======
			signed char out[4];
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		} u;

		u.in = p;

		return clamp(vec4(u.out[0], u.out[1], u.out[2], u.out[3]) * 0.0078740157480315f, -1.0f, 1.0f);
	}

<<<<<<< HEAD
	GLM_FUNC_QUALIFIER double packDouble2x32(uvec2 const & v)
=======
	GLM_FUNC_QUALIFIER double packDouble2x32(uvec2 const& v)
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	{
		union
		{
			uint   in[2];
			double out;
		} u;

		u.in[0] = v[0];
		u.in[1] = v[1];

		return u.out;
	}

	GLM_FUNC_QUALIFIER uvec2 unpackDouble2x32(double v)
	{
		union
		{
			double in;
			uint   out[2];
		} u;

		u.in = v;

		return uvec2(u.out[0], u.out[1]);
	}

<<<<<<< HEAD
	GLM_FUNC_QUALIFIER uint packHalf2x16(vec2 const & v)
	{
		union
		{
			i16  in[2];
=======
	GLM_FUNC_QUALIFIER uint packHalf2x16(vec2 const& v)
	{
		union
		{
			signed short in[2];
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
			uint out;
		} u;

		u.in[0] = detail::toFloat16(v.x);
		u.in[1] = detail::toFloat16(v.y);

		return u.out;
	}

	GLM_FUNC_QUALIFIER vec2 unpackHalf2x16(uint v)
	{
		union
		{
			uint in;
<<<<<<< HEAD
			i16  out[2];
=======
			signed short out[2];
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		} u;

		u.in = v;

		return vec2(
			detail::toFloat32(u.out[0]),
			detail::toFloat32(u.out[1]));
	}
}//namespace glm

<<<<<<< HEAD
#if GLM_ARCH != GLM_ARCH_PURE && GLM_HAS_UNRESTRICTED_UNIONS
=======
#if GLM_CONFIG_SIMD == GLM_ENABLE
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
#	include "func_packing_simd.inl"
#endif

