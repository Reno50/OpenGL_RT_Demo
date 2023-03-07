/// @ref gtx_matrix_cross_product
<<<<<<< HEAD
/// @file glm/gtx/matrix_cross_product.inl

namespace glm
{
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat3x3<T, P> matrixCross3
	(
		tvec3<T, P> const & x
	)
	{
		tmat3x3<T, P> Result(T(0));
=======

namespace glm
{
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 3, T, Q> matrixCross3
	(
		vec<3, T, Q> const& x
	)
	{
		mat<3, 3, T, Q> Result(T(0));
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		Result[0][1] = x.z;
		Result[1][0] = -x.z;
		Result[0][2] = -x.y;
		Result[2][0] = x.y;
		Result[1][2] = x.x;
		Result[2][1] = -x.x;
		return Result;
	}

<<<<<<< HEAD
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat4x4<T, P> matrixCross4
	(
		tvec3<T, P> const & x
	)
	{
		tmat4x4<T, P> Result(T(0));
=======
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 4, T, Q> matrixCross4
	(
		vec<3, T, Q> const& x
	)
	{
		mat<4, 4, T, Q> Result(T(0));
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
		Result[0][1] = x.z;
		Result[1][0] = -x.z;
		Result[0][2] = -x.y;
		Result[2][0] = x.y;
		Result[1][2] = x.x;
		Result[2][1] = -x.x;
		return Result;
	}

}//namespace glm
