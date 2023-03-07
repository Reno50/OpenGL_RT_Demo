/// @ref gtx_matrix_operation
<<<<<<< HEAD
/// @file glm/gtx/matrix_operation.inl

namespace glm
{
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x2<T, P> diagonal2x2
	(
		tvec2<T, P> const & v
	)
	{
		tmat2x2<T, P> Result(static_cast<T>(1));
=======

namespace glm
{
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q> diagonal2x2
	(
		vec<2, T, Q> const& v
	)
	{
		mat<2, 2, T, Q> Result(static_cast<T>(1));
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		Result[0][0] = v[0];
		Result[1][1] = v[1];
		return Result;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x3<T, P> diagonal2x3
	(
		tvec2<T, P> const & v
	)
	{
		tmat2x3<T, P> Result(static_cast<T>(1));
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 3, T, Q> diagonal2x3
	(
		vec<2, T, Q> const& v
	)
	{
		mat<2, 3, T, Q> Result(static_cast<T>(1));
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		Result[0][0] = v[0];
		Result[1][1] = v[1];
		return Result;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat2x4<T, P> diagonal2x4
	(
		tvec2<T, P> const & v
	)
	{
		tmat2x4<T, P> Result(static_cast<T>(1));
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 4, T, Q> diagonal2x4
	(
		vec<2, T, Q> const& v
	)
	{
		mat<2, 4, T, Q> Result(static_cast<T>(1));
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		Result[0][0] = v[0];
		Result[1][1] = v[1];
		return Result;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat3x2<T, P> diagonal3x2
	(
		tvec2<T, P> const & v
	)
	{
		tmat3x2<T, P> Result(static_cast<T>(1));
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 2, T, Q> diagonal3x2
	(
		vec<2, T, Q> const& v
	)
	{
		mat<3, 2, T, Q> Result(static_cast<T>(1));
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		Result[0][0] = v[0];
		Result[1][1] = v[1];
		return Result;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat3x3<T, P> diagonal3x3
	(
		tvec3<T, P> const & v
	)
	{
		tmat3x3<T, P> Result(static_cast<T>(1));
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> diagonal3x3
	(
		vec<3, T, Q> const& v
	)
	{
		mat<3, 3, T, Q> Result(static_cast<T>(1));
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		Result[0][0] = v[0];
		Result[1][1] = v[1];
		Result[2][2] = v[2];
		return Result;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat3x4<T, P> diagonal3x4
	(
		tvec3<T, P> const & v
	)
	{
		tmat3x4<T, P> Result(static_cast<T>(1));
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 4, T, Q> diagonal3x4
	(
		vec<3, T, Q> const& v
	)
	{
		mat<3, 4, T, Q> Result(static_cast<T>(1));
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		Result[0][0] = v[0];
		Result[1][1] = v[1];
		Result[2][2] = v[2];
		return Result;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat4x4<T, P> diagonal4x4
	(
		tvec4<T, P> const & v
	)
	{
		tmat4x4<T, P> Result(static_cast<T>(1));
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 4, T, Q> diagonal4x4
	(
		vec<4, T, Q> const& v
	)
	{
		mat<4, 4, T, Q> Result(static_cast<T>(1));
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		Result[0][0] = v[0];
		Result[1][1] = v[1];
		Result[2][2] = v[2];
		Result[3][3] = v[3];
<<<<<<< HEAD
		return Result;		
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat4x3<T, P> diagonal4x3
	(
		tvec3<T, P> const & v
	)
	{
		tmat4x3<T, P> Result(static_cast<T>(1));
		Result[0][0] = v[0];
		Result[1][1] = v[1];
		Result[2][2] = v[2];
		return Result;		
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat4x2<T, P> diagonal4x2
	(
		tvec2<T, P> const & v
	)
	{
		tmat4x2<T, P> Result(static_cast<T>(1));
		Result[0][0] = v[0];
		Result[1][1] = v[1];
		return Result;		
=======
		return Result;
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 3, T, Q> diagonal4x3
	(
		vec<3, T, Q> const& v
	)
	{
		mat<4, 3, T, Q> Result(static_cast<T>(1));
		Result[0][0] = v[0];
		Result[1][1] = v[1];
		Result[2][2] = v[2];
		return Result;
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 2, T, Q> diagonal4x2
	(
		vec<2, T, Q> const& v
	)
	{
		mat<4, 2, T, Q> Result(static_cast<T>(1));
		Result[0][0] = v[0];
		Result[1][1] = v[1];
		return Result;
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q> adjugate(mat<2, 2, T, Q> const& m)
	{
		return mat<2, 2, T, Q>(
			+m[1][1], -m[1][0],
			-m[0][1], +m[0][0]);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> adjugate(mat<3, 3, T, Q> const& m)
	{
		T const m00 = determinant(mat<2, 2, T, Q>(m[1][1], m[2][1], m[1][2], m[2][2]));
		T const m01 = determinant(mat<2, 2, T, Q>(m[0][1], m[2][1], m[0][2], m[2][2]));
		T const m02 = determinant(mat<2, 2, T, Q>(m[0][1], m[1][1], m[0][2], m[1][2]));

		T const m10 = determinant(mat<2, 2, T, Q>(m[1][0], m[2][0], m[1][2], m[2][2]));
		T const m11 = determinant(mat<2, 2, T, Q>(m[0][0], m[2][0], m[0][2], m[2][2]));
		T const m12 = determinant(mat<2, 2, T, Q>(m[0][0], m[1][0], m[0][2], m[1][2]));

		T const m20 = determinant(mat<2, 2, T, Q>(m[1][0], m[2][0], m[1][1], m[2][1]));
		T const m21 = determinant(mat<2, 2, T, Q>(m[0][0], m[2][0], m[0][1], m[2][1]));
		T const m22 = determinant(mat<2, 2, T, Q>(m[0][0], m[1][0], m[0][1], m[1][1]));

		return mat<3, 3, T, Q>(
			+m00, -m01, +m02,
			-m10, +m11, -m12,
			+m20, -m21, +m22);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 4, T, Q> adjugate(mat<4, 4, T, Q> const& m)
	{
		T const m00 = determinant(mat<3, 3, T, Q>(m[1][1], m[1][2], m[1][3], m[2][1], m[2][2], m[2][3], m[3][1], m[3][2], m[3][3]));
		T const m01 = determinant(mat<3, 3, T, Q>(m[1][0], m[1][2], m[1][3], m[2][0], m[2][2], m[2][3], m[3][0], m[3][2], m[3][3]));
		T const m02 = determinant(mat<3, 3, T, Q>(m[1][0], m[1][1], m[1][3], m[2][0], m[2][2], m[2][3], m[3][0], m[3][1], m[3][3]));
		T const m03 = determinant(mat<3, 3, T, Q>(m[1][0], m[1][1], m[1][2], m[2][0], m[2][1], m[2][2], m[3][0], m[3][1], m[3][2]));

		T const m10 = determinant(mat<3, 3, T, Q>(m[0][1], m[0][2], m[0][3], m[2][1], m[2][2], m[2][3], m[3][1], m[3][2], m[3][3]));
		T const m11 = determinant(mat<3, 3, T, Q>(m[0][0], m[0][2], m[0][3], m[2][0], m[2][2], m[2][3], m[3][0], m[3][2], m[3][3]));
		T const m12 = determinant(mat<3, 3, T, Q>(m[0][0], m[0][1], m[0][3], m[2][0], m[2][1], m[2][3], m[3][0], m[3][1], m[3][3]));
		T const m13 = determinant(mat<3, 3, T, Q>(m[0][0], m[0][1], m[0][2], m[2][0], m[2][1], m[2][2], m[3][0], m[3][1], m[3][2]));

		T const m20 = determinant(mat<3, 3, T, Q>(m[0][1], m[0][2], m[0][3], m[1][1], m[1][2], m[1][3], m[3][1], m[3][2], m[3][3]));
		T const m21 = determinant(mat<3, 3, T, Q>(m[0][0], m[0][2], m[0][3], m[1][0], m[1][2], m[1][3], m[3][0], m[3][2], m[3][3]));
		T const m22 = determinant(mat<3, 3, T, Q>(m[0][0], m[0][1], m[0][3], m[1][0], m[1][1], m[1][3], m[3][0], m[3][1], m[3][3]));
		T const m23 = determinant(mat<3, 3, T, Q>(m[0][0], m[0][1], m[0][2], m[1][0], m[1][1], m[1][2], m[3][0], m[3][1], m[3][2]));

		T const m30 = determinant(mat<3, 3, T, Q>(m[0][1], m[0][2], m[0][3], m[1][1], m[1][2], m[1][3], m[2][1], m[2][2], m[2][3]));
		T const m31 = determinant(mat<3, 3, T, Q>(m[0][0], m[0][2], m[0][3], m[1][0], m[1][2], m[1][3], m[2][0], m[2][2], m[2][3]));
		T const m32 = determinant(mat<3, 3, T, Q>(m[0][0], m[0][1], m[0][3], m[1][0], m[1][1], m[1][3], m[2][0], m[2][1], m[2][3]));
		T const m33 = determinant(mat<3, 3, T, Q>(m[0][0], m[0][1], m[0][2], m[1][0], m[1][1], m[1][2], m[2][0], m[2][1], m[2][2]));

		return mat<4, 4, T, Q>(
			+m00, -m01, +m02, -m03,
			-m10, +m11, -m12, +m13,
			+m20, -m21, +m22, -m23,
			-m30, +m31, -m32, +m33);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}
}//namespace glm
