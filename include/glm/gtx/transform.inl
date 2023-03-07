/// @ref gtx_transform
<<<<<<< HEAD
/// @file glm/gtx/transform.inl

namespace glm
{
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat4x4<T, P> translate(tvec3<T, P> const & v)
	{
		return translate(tmat4x4<T, P>(static_cast<T>(1)), v);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat4x4<T, P> rotate(T angle, tvec3<T, P> const & v)
	{
		return rotate(tmat4x4<T, P>(static_cast<T>(1)), angle, v);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tmat4x4<T, P> scale(tvec3<T, P> const & v)
	{
		return scale(tmat4x4<T, P>(static_cast<T>(1)), v);
=======

namespace glm
{
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 4, T, Q> translate(vec<3, T, Q> const& v)
	{
		return translate(mat<4, 4, T, Q>(static_cast<T>(1)), v);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 4, T, Q> rotate(T angle, vec<3, T, Q> const& v)
	{
		return rotate(mat<4, 4, T, Q>(static_cast<T>(1)), angle, v);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 4, T, Q> scale(vec<3, T, Q> const& v)
	{
		return scale(mat<4, 4, T, Q>(static_cast<T>(1)), v);
>>>>>>> 50922f5810200b1e13462f7930ab97db75af0ed8
	}

}//namespace glm
