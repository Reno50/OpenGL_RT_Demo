/// @ref gtx_matrix_transform_2d
<<<<<<< HEAD
/// @file glm/gtc/matrix_transform_2d.inl
=======
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
/// @author Miguel Ángel Pérez Martínez

#include "../trigonometric.hpp"

namespace glm
{
<<<<<<< HEAD
	
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tmat3x3<T, P> translate(
		tmat3x3<T, P> const & m,
		tvec2<T, P> const & v)
	{
		tmat3x3<T, P> Result(m);
=======

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> translate(
		mat<3, 3, T, Q> const& m,
		vec<2, T, Q> const& v)
	{
		mat<3, 3, T, Q> Result(m);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		Result[2] = m[0] * v[0] + m[1] * v[1] + m[2];
		return Result;
	}


<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tmat3x3<T, P> rotate(
		tmat3x3<T, P> const & m,
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> rotate(
		mat<3, 3, T, Q> const& m,
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		T angle)
	{
		T const a = angle;
		T const c = cos(a);
		T const s = sin(a);

<<<<<<< HEAD
		tmat3x3<T, P> Result(uninitialize);
=======
		mat<3, 3, T, Q> Result;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		Result[0] = m[0] * c + m[1] * s;
		Result[1] = m[0] * -s + m[1] * c;
		Result[2] = m[2];
		return Result;
	}

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tmat3x3<T, P> scale(
		tmat3x3<T, P> const & m,
		tvec2<T, P> const & v)
	{
		tmat3x3<T, P> Result(uninitialize);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> scale(
		mat<3, 3, T, Q> const& m,
		vec<2, T, Q> const& v)
	{
		mat<3, 3, T, Q> Result;
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		Result[0] = m[0] * v[0];
		Result[1] = m[1] * v[1];
		Result[2] = m[2];
		return Result;
	}

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tmat3x3<T, P> shearX(
		tmat3x3<T, P> const & m,
		T y)
	{
		tmat3x3<T, P> Result(1);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> shearX(
		mat<3, 3, T, Q> const& m,
		T y)
	{
		mat<3, 3, T, Q> Result(1);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		Result[0][1] = y;
		return m * Result;
	}

<<<<<<< HEAD
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tmat3x3<T, P> shearY(
		tmat3x3<T, P> const & m,
		T x)
	{
		tmat3x3<T, P> Result(1);
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> shearY(
		mat<3, 3, T, Q> const& m,
		T x)
	{
		mat<3, 3, T, Q> Result(1);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		Result[1][0] = x;
		return m * Result;
	}

}//namespace glm
